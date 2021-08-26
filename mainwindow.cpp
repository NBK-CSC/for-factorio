#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "ui_secondwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setWindowIcon(QIcon(":/images/chat-icon-select-button-icon.png"));
    this->setFixedSize(411,181);
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked()
{
    QString new_height=ui->height->text();
    QString new_width=ui->width->text();
    QString new_number_of_layers=ui->number_of_layers->text();

    secondwindow window;

    window.setWindowTitle("For factorio");
    window.set_height(new_height);
    window.set_width(new_width);
    window.set_number_of_layers(new_number_of_layers);
    window.create_matrix_of_lamp();
    window.setModal(true);
    window.exec();
}


MainWindow::~MainWindow()
{
    delete ui;
}


