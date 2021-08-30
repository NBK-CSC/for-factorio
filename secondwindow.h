#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QApplication>
#include <QDialog>
#include <QFile>

#include <QPushButton>
#include <QTextStream>
#include <QWidget>

#include <iostream>
#include <string.h>
#include "version.h"

using namespace std;

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();

    void set_height(QString);
    void set_width(QString);
    void set_number_of_layers(QString);
    int transate_in_2_to_10(QString);
    void pushButton_of_lamp_clicked();
    void create_matrix_of_lamp();
    void set_the_size_of_the_windows();

    struct LampBtn{
                QPushButton* lamp_btn;
                QString value;
            };
private slots:
    void on_number_of_layers_Slider_valueChanged(int value);

    void on_pushButton_of_save_clicked();

    void on_pushButton_of_delete_clicked();

    void on_pushButton_of_add_clicked();

private:

    QString _Qs_height = "Height: ";
    QString _Qs_width = "Width: ";
    QString _Qs_number_of_layers = "Layers: ";

    LampBtn** _matrix_of_button_lamps;

    int _current_layer=1;
    int _number_of_layers=1;
    int _height=1;
    int _width=1;

    const QString _zero_layers="00000000000000000000000000000000";

    Ui::secondwindow *ui;
};

#endif // SECONDWINDOW_H
