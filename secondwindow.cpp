#include "secondwindow.h"
#include "ui_secondwindow.h"

secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    this->setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    ui->setupUi(this);
    ui->label_for_version->setText(VER);
}

void secondwindow::SetHeight(QString height){
    _height=height.toInt();
    ui->height_label->setText(_QsHeight+height);
}

void secondwindow::SetWidth(QString width){
    _width=width.toInt();
    ui->width_label->setText(_QsWidth+width);
}

void secondwindow::SetNumberLayers(QString nmbr){
    _numberLayers=nmbr.toInt();
    ui->number_of_layers_label->setText(_QsNumberLayers+nmbr);
    ui->number_of_layers_Slider->setMaximum(nmbr.toInt());
    ui->number_of_layers_Slider->setValue(1);
    ui->number_of_layers_spinBox->setMaximum(nmbr.toInt());
    ui->number_of_layers_spinBox->setValue(1);
}

void secondwindow::ChangeLayerView(int _currentLayer){//function that changes frames on the scoreboard (matrix)
    this->_currentLayer= _currentLayer;
    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
                _matrixButtonLamps[i][j].GetButtonLamp()->setStyleSheet(_matrixButtonLamps[i][j].GetCodedState()->at(_currentLayer-1)=='1'?"border-image: url(\":/images/lamp_ligth_on.png\")":"border-image: url(\":/images/lamp_ligth_off.png\")");
        }
    }
}

void secondwindow::SetWindowDimensions(){

     //the number of lamps that fit in the widget_ground window that does not exceed the size of this window
    int w=14;
    int h=9;

    //creating a graphic field,label for version and setting the size of the window and field
    this->setFixedSize(500+22*(_width>w?_width-w:0),380+22*(_height>h?_height-h:0));
    ui->widget_1->setFixedSize(480+22*(_width>w?_width-w:0),360+22*(_height>h?_height-h:0));

    ui->widget_bg_for_ground->setFixedSize(340+22*(_width>w?_width-w:0),230+22*(_height>h?_height-h:0));
    ui->widget_ground->setFixedSize(320+22*(_width>w?_width-w:0),210+22*(_height>h?_height-h:0));

    ui->label_for_version->setGeometry({10, 335+22*(_height>h?_height-h:0), 45, 15});

}

void secondwindow::CreateMatrixLamps(LampButton** _matrixButtonLamps){
    this->_matrixButtonLamps=_matrixButtonLamps;
    SetWindowDimensions();
    //calculate the coordinates for centering the button relative to the widget_ground
    int pos_on_ground_x=22+ui->widget_bg_for_ground->x()+ui->widget_ground->width()/2-((float)_width/2)*22;
    int pos_on_ground_y=20+ui->widget_bg_for_ground->y()+ui->widget_ground->height()/2-((float)_height/2)*22;

    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
            //creating a scoreboard of lamp buttons
            _matrixButtonLamps[i][j].SetButtonLamp(new QPushButton(this));
            _matrixButtonLamps[i][j].GetButtonLamp()->setGeometry({pos_on_ground_x+i*22, pos_on_ground_y+j*22, 20, 20});
            _matrixButtonLamps[i][j].GetButtonLamp()->setStyleSheet("border-image: url(\":/images/lamp_ligth_off.png\")");

            connect(_matrixButtonLamps[i][j].GetButtonLamp(), &QPushButton::clicked, this, &secondwindow::ChangeCellCodedState);
        }
    }
}

void secondwindow::CreateMatrixLamps(){//function that creates a scoreboard from lamps
    SetWindowDimensions();
    //calculate the coordinates for centering the button relative to the widget_ground
    int pos_on_ground_x=22+ui->widget_bg_for_ground->x()+ui->widget_ground->width()/2-((float)_width/2)*22;
    int pos_on_ground_y=20+ui->widget_bg_for_ground->y()+ui->widget_ground->height()/2-((float)_height/2)*22;

    _matrixButtonLamps=new LampButton* [_width];
    for (int count=0;count<_width;count++) _matrixButtonLamps[count]=new LampButton[_height];

    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
            //creating a scoreboard of lamp buttons
            _matrixButtonLamps[i][j].SetButtonLamp(new QPushButton(this));
            //_matrixButtonLamps[i][j].GetButtonLamp()=new QPushButton(this);
            _matrixButtonLamps[i][j].GetButtonLamp()->setGeometry({pos_on_ground_x+i*22, pos_on_ground_y+j*22, 20, 20});
            _matrixButtonLamps[i][j].GetButtonLamp()->setStyleSheet("border-image: url(\":/images/lamp_ligth_off.png\")");

            connect(_matrixButtonLamps[i][j].GetButtonLamp(), &QPushButton::clicked, this, &secondwindow::ChangeCellCodedState);
        }
    }
}

void secondwindow::ChangeCellCodedState(){//a function that sets the value to 0 or 1 when the button is pressed

    //get a pointer to the button that called this function
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
            if (_matrixButtonLamps[i][j].GetButtonLamp()==button){
            if ((*_matrixButtonLamps[i][j].GetCodedState()).at(_currentLayer-1)=='0')
                (*_matrixButtonLamps[i][j].GetCodedState()).replace(_currentLayer-1,1,"1");
            else (*_matrixButtonLamps[i][j].GetCodedState()).replace(_currentLayer-1,1,"0");
            (*_matrixButtonLamps[i][j].GetButtonLamp()).setStyleSheet(_matrixButtonLamps[i][j].GetCodedState()->at(_currentLayer-1)=='1'?"border-image: url(\":/images/lamp_ligth_on.png\")":"border-image: url(\":/images/lamp_ligth_off.png\")");
            }
        }
    }
}

void secondwindow::ClearLayer(int layer){
    //in the last layer, set all signals to 0
    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
            (*_matrixButtonLamps[i][j].GetCodedState()).replace(layer-1,1,"0");
        }
    }
}

void secondwindow::DeleteLastLayer()
{
    //if there is only one layer left, then we do not delete it
    if(_numberLayers==1)return;
    ClearLayer(_numberLayers);
    SetNumberLayers(QString::number(_numberLayers-1));
}

void secondwindow::AddLastLayer()
{
    if(_numberLayers>=32)return;
    SetNumberLayers(QString::number(_numberLayers+1));
}

void secondwindow::RehashCurrentLayer()
{
    ClearLayer(_currentLayer);
    ChangeLayerView(_currentLayer);
}

void secondwindow::on_pushButton_of_clear_clicked()
{
    RehashCurrentLayer();
}

void secondwindow::on_pushButton_of_delete_clicked()
{
    DeleteLastLayer();
}


void secondwindow::on_pushButton_of_add_clicked()
{
    AddLastLayer();
}


void secondwindow::on_number_of_layers_Slider_valueChanged(int value)
{
    ChangeLayerView(value);
}

void secondwindow::on_pushButton_of_save_clicked(){
    FileHandling* fileHanding=new FileHandling(_matrixButtonLamps,_width,_height,_numberLayers);
    fileHanding->CreateDecodedMatrix();
    fileHanding->SaveInFile();
    //delete fileHanding;
}

secondwindow::~secondwindow()
{
    for (int count = 0; count < _width; count++)
        delete []_matrixButtonLamps[count];
    delete ui;
}
