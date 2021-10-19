#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "version.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setFixedSize(430,220);
    ui->setupUi(this);
    ui->label_for_version->setText(VER);
}

void MainWindow::on_pushButton_clicked()
{
    QString new_height=ui->height->text();
    QString new_width=ui->width->text();
    QString new_number_of_layers=ui->number_of_layers->text();

    secondwindow window;

    window.setWindowTitle("For Factorio");
    window.SetHeight(new_height);
    window.SetWidth(new_width);
    window.SetNumberLayers(new_number_of_layers);
    window.CreateMatrixLamps();
    this->hide();
    window.setModal(true);
    window.exec();
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_open_clicked()
{
    FileHandling* fileHanding=new FileHandling();
    if (!fileHanding->OpenFile())return;

    secondwindow window;

    window.setWindowTitle("For Factorio");
    window.SetWidth(QString::number(fileHanding->GetWidth()));
    window.SetHeight(QString::number(fileHanding->GetHeight()));
    window.SetNumberLayers(QString::number(fileHanding->GetNumberLayers()));
    window.CreateMatrixLamps(fileHanding->GetMatrixButtonLamps());
    window.ChangeLayerView(1);
    this->hide();
    window.setModal(true);
    window.exec();
    delete fileHanding;
}

