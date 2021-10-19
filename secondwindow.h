#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QApplication>
#include <QDialog>

#include <QPushButton>
#include <QTextStream>
#include <QWidget>

#include <iostream>
#include <string.h>
#include "version.h"
#include "lampbutton.h"
#include "filehandling.h"
using namespace std;

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT
private:

    QString _QsHeight = "Height: ";
    QString _QsWidth = "Width: ";
    QString _QsNumberLayers = "Layers: ";

    LampButton** _matrixButtonLamps;

    int _currentLayer=1;
    int _numberLayers=1;
    int _height=1;
    int _width=1;

    Ui::secondwindow *ui;

public:
    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();

    void SetHeight(QString);
    int GetHeight();
    void SetWidth(QString);
    int GetWidth();
    void SetNumberLayers(QString);
    int GetNumberLayers();
    void ChangeCellCodedState();
    void CreateMatrixLamps();
    void CreateMatrixLamps(LampButton**);
    void SetWindowDimensions();
    void ClearLayer(int);
    void Refresh();
    void DeleteLastLayer();
    void AddLastLayer();
    void RehashCurrentLayer();
    void ChangeLayerView(int);

private slots:
    //void on_number_of_layers_Slider_valueChanged(int value);
    void on_pushButton_of_save_clicked();
    void on_pushButton_of_clear_clicked();
    void on_pushButton_of_delete_clicked();
    void on_pushButton_of_add_clicked();
    void on_number_of_layers_Slider_valueChanged(int value);
};

#endif // SECONDWINDOW_H
