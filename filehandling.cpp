#include "filehandling.h"

FileHandling::FileHandling(LampButton** matrixButtonLamps,int width,int height,int numberLayers)
{
    _matrixButtonLamps=matrixButtonLamps;
    _width=width;
    _height=height;
    _numberLayers=numberLayers;
    _fileName=QFileDialog::getSaveFileName( 0,"Save as...","C:\\Users\\User\\1.txt","*.txt" );
}

int FileHandling::GetHeight(){
    return _height;
}

int FileHandling::GetWidth(){
    return _width;
}

int FileHandling::GetNumberLayers(){
    return _numberLayers;
}

FileHandling::FileHandling(){
    _fileName=QFileDialog::getOpenFileName(0,"Open file...","C:\\Users\\User\\","*.txt");
}

LampButton** FileHandling::GetMatrixButtonLamps(){
    return _matrixButtonLamps;
}

void FileHandling::CreateDecodedMatrix(){//function that saves the scoreboard (matrix) and decoded numbers to a file
    QString exampleOutput="[%1%2]";

    //creating a matrix for displaying the scoreboard
   _optimizedMatrix=new QString* [_width];
    for (int count=0;count<_width;count++)_optimizedMatrix[count]=new QString[_height];

    int counterNumberOptimizingSignals =0;
    //go through the matrix for optimization (find the same or unused elements)
    for (int j=0;j<_height;j++){
        for (int i=0;i<_width;i++){
            for (int l=j;l<_height;l++){
                for (int k=0;k<_width;k++){
                    if (_optimizedMatrix[k][l]==nullptr){
                        //if the lamp was not used in the display, then we write it as an empty field
                        if ((*_matrixButtonLamps[k][l].GetCodedState())==LampButton::ZeroCodedState)
                           _optimizedMatrix[k][l]="[__]";
                        else{
                            //check that the element from the matrix does not repeat
                            if  (i!=k || j!=l){
                                //if different elements of the matrix have the same row value, duplicate the name with "*"
                                if (*_matrixButtonLamps[i][j].GetCodedState()==*_matrixButtonLamps[k][l].GetCodedState())
                                   _optimizedMatrix[k][l]="*"+_optimizedMatrix[i][j] ;
                            }
                            else{
                                //if the selected element is the first among the search, and it has no numbering, then to put a new number for it and increment the counter
                               _optimizedMatrix[k][l]=exampleOutput.arg(counterNumberOptimizingSignals>9?nullptr:"_").arg(counterNumberOptimizingSignals);
                                counterNumberOptimizingSignals++;
                            }
                        }
                    }
                }
            }
        }
    }
}

void FileHandling::SaveInFile(){
    QFile file(_fileName);

    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        out<<"Width:"<<_width<<Qt::endl;
        out<<"Height:"<<_height<<Qt::endl;
        out<<"Number Layers:"<<_numberLayers<<Qt::endl<<Qt::endl;
        out<<"Rendered matrix-lamps:"<<Qt::endl;
        //render a numbered matrix
        for (int j=0;j<_height;j++){
            for (int i=0;i<_width;i++){
                if ((_optimizedMatrix[i][j])[0]!='*'){
                    out <<"  ";
                }
                else out<<" ";
                out <<_optimizedMatrix[i][j];
            }
            out<<Qt::endl;
        }
        out<<Qt::endl<<"Decoded values ​​of the elements of the matrix-lamps:"<<Qt::endl;

        //decoding and output of values
        for (int j=0;j<_height;j++){
            for (int i=0;i<_width;i++){
                if ((_optimizedMatrix[i][j])[0]!='*' &&_optimizedMatrix[i][j]!="[__]"){
                    out <<_optimizedMatrix[i][j]<<" "<<DecodeIn2To10(*_matrixButtonLamps[i][j].GetCodedState())<<Qt::endl;
                }
            }
        }
    }
    file.close();
}

bool FileHandling::OpenFile(){
    QFile file(_fileName);

    int count=1;
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            // to read information from each line
            QString line = in.readLine();
            if ( count==1)_width=line.right(line.length()-6).toInt();
            if ( count==2){
                _height=line.right(line.length()-7).toInt();
                _optimizedMatrix=new QString* [_width];
                for (int j=0;j<_width;j++)_optimizedMatrix[j]=new QString[_height];

                _matrixButtonLamps=new LampButton* [_width];
                for (int j=0;j<_width;j++)_matrixButtonLamps[j]=new LampButton[_height];
            }
            if ( count==3)_numberLayers=line.right(line.length()-14).toInt();
            if(6<=count and count<=(5+_height)){
                //in the string to separate characters in list only numbers and _
                QStringList newLine=line.split(QRegularExpression("[^0-9\_]+"),Qt::SkipEmptyParts);
                for(int i=0;i<_width;i++){
                    if(newLine.at(i)=="__")_optimizedMatrix[i][count-6]=nullptr;
                    else _optimizedMatrix[i][count-6]=newLine.at(i).split(QRegularExpression("[^0-9]+"),Qt::SkipEmptyParts).at(0);
                }
            }
            if(8+_height<=count and line!=nullptr){
                for (int i=0;i<_width;i++){
                    for (int j=0;j<_height;j++){
                        QStringList newLine=line.split(QRegularExpression("[^0-9\-]+"),Qt::SkipEmptyParts);
                        if (_optimizedMatrix[i][j]==newLine[0]){
                            QString decodedNumber=DecodeIn10To2(newLine[1].toInt());
                            _matrixButtonLamps[i][j].SetCodedState(decodedNumber);
                        }
                        if (_optimizedMatrix[i][j]==nullptr)_matrixButtonLamps[i][j].SetCodedState(LampButton::ZeroCodedState);
                    }
                }
            }
            count++;
        }
    }
    else return false;
    file.close();
    return true;
}

QString FileHandling::DecodeIn10To2(int decimalNumber){
    //translation from the binary number system, if the number is negative, we pass the number +1 to the parameter, because of the two's complement of encoding numbers
    QString binaryNumber = (QString::number(decimalNumber<0?decimalNumber+1:decimalNumber, 2)).split(QRegularExpression("[^0-9]+"),Qt::SkipEmptyParts).at(0);
    //change zeros to one, and one to zeros, if the number is negative
    if (decimalNumber<0)binaryNumber.replace('0', '#').replace('1', '0').replace('#', '1');
    binaryNumber=(binaryNumber.rightJustified(LampButton::ZeroCodedState.size(), decimalNumber<0?'1':'0')).right(LampButton::ZeroCodedState.size());
    if (decimalNumber<0)binaryNumber[0]='1';
    return binaryNumber;
}

int FileHandling::DecodeIn2To10(QString binaryNumber){//a function that converts a number from binary to decimal
    int decimalNumber=0;

    QChar numberSign=binaryNumber[0];
    for (int i=1;i<binaryNumber.size();i++){
        if (binaryNumber[i]!=numberSign){
            decimalNumber+=pow(2,binaryNumber.size()-i-1);
        }
    }
    if (numberSign=='1') decimalNumber=(decimalNumber+1)*(-1);
    return decimalNumber;
}

FileHandling::~FileHandling(){
    //so that there is no leak of memory,to delete the matrix
    for (int count = 0; count < _width; count++){
        delete _matrixButtonLamps[count];
        delete []_optimizedMatrix[count];
    }
}
