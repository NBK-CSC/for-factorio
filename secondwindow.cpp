﻿#include "secondwindow.h"
#include "ui_secondwindow.h"

secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    this->setWindowIcon(QIcon(":/images/chat-icon-select-button-icon.png"));
    this->setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    ui->setupUi(this);
}

void secondwindow::set_height(QString h){
    _height=h.toInt();
    ui->height_label->setText((_Qs_height+h));
}

void secondwindow::set_width(QString w){
    _width=w.toInt();
    ui->width_label->setText((_Qs_width+w));
}

void secondwindow::set_number_of_layers(QString nmbr){
    _number_of_layers=nmbr.toInt();
    ui->number_of_layers_label->setText((_Qs_number_of_layers+nmbr));
    ui->number_of_layers_Slider->setMaximum(nmbr.toInt());
    ui->number_of_layers_spinBox->setMaximum(nmbr.toInt());
}

void secondwindow::on_number_of_layers_Slider_valueChanged(int value){//function that changes frames on the scoreboard (matrix)
    _current_layer= value;
    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
                _matrix_of_button_lamps[i][j].lamp_btn->setStyleSheet(_matrix_of_button_lamps[i][j].value.at(_current_layer-1)=='1'?"border-image: url(\":/images/lamp_ligth_on.png\")":"border-image: url(\":/images/lamp_ligth_off.png\")");
        }
    }
}

void secondwindow::on_pushButton_of_save_clicked(){//function that saves the scoreboard (matrix) and decoded numbers to a file

    QString** array_to_render_in_file=new QString* [_width];
    QString example_for_output="[%1%2]";

    //creating a matrix for displaying the scoreboard
    for (int count=0;count<_width;count++) array_to_render_in_file[count]=new QString[_height];

    int counter_number_for_optimizing_signals =1;

    //go through the matrix for optimization (find the same or unused elements)
    for (int j=0;j<_height;j++){
        for (int i=0;i<_width;i++){
            for (int l=j;l<_height;l++){
                for (int k=0;k<_width;k++){
                    if (array_to_render_in_file[k][l]==nullptr){
                        //if the lamp was not used in the display, then we write it as an empty field
                        if (_matrix_of_button_lamps[k][l].value==_zero_layers){
                            array_to_render_in_file[k][l]="[  ]";
                        }
                        else{
                            //check that the element from the matrix does not repeat
                            if  (i!=k || j!=l){
                                //if different elements of the matrix have the same row value, duplicate the name with "*"
                                if ((_matrix_of_button_lamps[i][j].value==_matrix_of_button_lamps[k][l].value)){
                                    array_to_render_in_file[k][l]="*"+array_to_render_in_file[i][j] ;
                                }
                            }
                            else{
                                //if the selected element is the first among the search, and it has no numbering, then to put a new number for it and increment the counter
                                array_to_render_in_file[k][l]=example_for_output.arg(counter_number_for_optimizing_signals>9?nullptr:" ").arg(counter_number_for_optimizing_signals);
                                counter_number_for_optimizing_signals++;
                            }
                        }
                    }
                }
            }
        }
    }


    QString filename = "1.txt";
    QFile file(filename);

    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);

        //render a numbered matrix
        for (int j=0;j<_height;j++){
            for (int i=0;i<_width;i++){
                if ((array_to_render_in_file[i][j])[0]!='*'){
                    out <<"  ";
                }
                else out<<" ";
                out <<array_to_render_in_file[i][j];
            }
            out<<Qt::endl;
        }
        out<<Qt::endl;

        //decoding and output of values
        for (int j=0;j<_height;j++){
            for (int i=0;i<_width;i++){
                if ((array_to_render_in_file[i][j])[0]!='*' && array_to_render_in_file[i][j]!="[  ]"){
                    out << array_to_render_in_file[i][j]<<" "<<transate_in_2_to_10(_matrix_of_button_lamps[i][j].value)<<Qt::endl;
                }
            }
        }
    }

    //so that there is no leak of memory,to delete the matrix
    for (int count = 0; count < _width; count++)
        delete [] array_to_render_in_file[count];

    file.close();
}


int secondwindow::transate_in_2_to_10(QString binary_number){//a function that converts a number from binary to decimal
    int decimal_number=0;

    QChar number_sign=binary_number[0];
    for (int i=1;i<binary_number.size();i++){
        if (binary_number[i]!=number_sign){
            decimal_number+=pow(2,binary_number.size()-i-1);
        }
    }
    return decimal_number*(number_sign=='0'?1:-1);
}



void secondwindow::create_matrix_of_lamp(){//function that creates a scoreboard from lamps

    //creating a graphic field and setting the size of the window and field
    this->setFixedSize(477+22*(_width>19?_width-19:0),160+_height*22);
    ui->widget->setFixedSize(457+22*(_width>19?_width-19:0),140+_height*22);
    ui->widget_3->setFixedSize(18+22*_width,18+_height*22);

    _matrix_of_button_lamps=new LampBtn* [_width];
    for (int count=0;count<_width;count++) _matrix_of_button_lamps[count]=new LampBtn[_height];

    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
            //creating a scoreboard of lamp buttons
            _matrix_of_button_lamps[i][j].lamp_btn=new QPushButton(this);
            _matrix_of_button_lamps[i][j].lamp_btn->setGeometry({30+i*22, 130+j*22, 20, 20});
            _matrix_of_button_lamps[i][j].lamp_btn->setStyleSheet("border-image: url(\":/images/lamp_ligth_off.png\")");

            _matrix_of_button_lamps[i][j].value=_zero_layers; //пока максимум 32 слоя(кадра)

            connect(_matrix_of_button_lamps[i][j].lamp_btn, &QPushButton::clicked, this, &secondwindow::pushButton_of_lamp_clicked);
        }
    }
}

void secondwindow::pushButton_of_lamp_clicked(){//a function that sets the value to 0 or 1 when the button is pressed

    //get a pointer to the button that called this function
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    for (int i=0;i<_width;i++){
        for (int j=0;j<_height;j++){
            //find the desired button, and change zero to one, or one to zero, and also change the picture of the lamp, depending on the number
            if (_matrix_of_button_lamps[i][j].lamp_btn==button){
                if (_matrix_of_button_lamps[i][j].value.at(_current_layer-1)=='0'){
                    _matrix_of_button_lamps[i][j].value.replace(_current_layer-1,1,"1");
                }
                else _matrix_of_button_lamps[i][j].value.replace(_current_layer-1,1,"0");
                button->setStyleSheet(_matrix_of_button_lamps[i][j].value.at(_current_layer-1)=='1'?"border-image: url(\":/images/lamp_ligth_on.png\")":"border-image: url(\":/images/lamp_ligth_off.png\")");
            }
        }
    }
}

secondwindow::~secondwindow()
{
    delete ui;
}