#include "mainwindow.h"
#include <QApplication>

#include <QLabel>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItemGroup>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;
    window.setWindowTitle("For factorio");
    window.show();
    return a.exec();
}
