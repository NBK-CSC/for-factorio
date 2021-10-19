/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget_2;
    QSpinBox *width;
    QSpinBox *height;
    QSpinBox *number_of_layers;
    QLabel *label_for_version;
    QLabel *clear_label_3;
    QLabel *clear_label_4;
    QLabel *clear_label_5;
    QPushButton *pushButton_open;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(430, 220);
        MainWindow->setStyleSheet(QString::fromUtf8("/*QMainWindow\n"
"{\n"
"  background : #232223;\n"
"  background : rgba(35, 34, 35, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 8px;\n"
"  -moz-border-radius : 8px;\n"
"  -webkit-border-radius : 8px;\n"
"}*/\n"
"QMainWindow\n"
"{\n"
"  background : #313032;\n"
"  background : rgba(49, 48, 50, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 410, 200));
        widget->setFocusPolicy(Qt::NoFocus);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"  background : #232223;\n"
"  background : rgba(35, 34, 35, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 8px;\n"
" background-repeat : no-repeat;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 390, 80));
        label->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(10);
        font.setKerning(false);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 9px;\n"
"}"));
        label->setScaledContents(false);
        label->setWordWrap(true);
        label->setMargin(20);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(315, 100, 80, 35));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"  color:white;\n"
"	  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
" QPushButton:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
"  border-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
" }"));
        pushButton->setIconSize(QSize(80, 25));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 70, 281, 71));
        widget_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        widget_2->setAutoFillBackground(false);
        width = new QSpinBox(widget_2);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(0, 30, 70, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(10);
        width->setFont(font2);
        width->setStyleSheet(QString::fromUtf8(" QSpinBox {\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 9px;\n"
" }\n"
"\n"
"QSpinBox::up-button {\n"
"  subcontrol-origin: border;\n"
"  subcontrol-position: top right; \n"
"  width: 18px; \n"
"  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
"QSpinBox::up-button:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
" "
                        " border-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
" QSpinBox::up-arrow {\n"
"     image: url(:/images/plus.png);\n"
"     width: 9px;\n"
"     height: 9px;\n"
" }\n"
"QSpinBox::down-button {\n"
"  subcontrol-origin: border;\n"
"  subcontrol-position: bottom right;\n"
"  width: 18px; \n"
"  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
"QSpinBox::down-button:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
"  border"
                        "-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
" QSpinBox::down-arrow {\n"
"     image: url(:/images/minus.png);\n"
"     width: 12px;\n"
"     height: 9px;\n"
" }"));
        width->setMinimum(1);
        width->setValue(1);
        height = new QSpinBox(widget_2);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(105, 30, 70, 30));
        height->setFont(font2);
        height->setStyleSheet(QString::fromUtf8(" QSpinBox {\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 9px;\n"
" }\n"
"\n"
"QSpinBox::up-button {\n"
"  subcontrol-origin: border;\n"
"  subcontrol-position: top right; \n"
"  width: 18px; \n"
"  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
"QSpinBox::up-button:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
" "
                        " border-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
" QSpinBox::up-arrow {\n"
"     image: url(:/images/plus.png);\n"
"     width: 9px;\n"
"     height: 9px;\n"
" }\n"
"QSpinBox::down-button {\n"
"  subcontrol-origin: border;\n"
"  subcontrol-position: bottom right;\n"
"  width: 18px; \n"
"  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
"QSpinBox::down-button:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
"  border"
                        "-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
" QSpinBox::down-arrow {\n"
"     image: url(:/images/minus.png);\n"
"     width: 12px;\n"
"     height: 9px;\n"
" }"));
        height->setMinimum(1);
        height->setValue(1);
        number_of_layers = new QSpinBox(widget_2);
        number_of_layers->setObjectName(QString::fromUtf8("number_of_layers"));
        number_of_layers->setGeometry(QRect(210, 30, 70, 30));
        number_of_layers->setFont(font2);
        number_of_layers->setStyleSheet(QString::fromUtf8(" QSpinBox {\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 9px;\n"
" }\n"
"\n"
"QSpinBox::up-button {\n"
"  subcontrol-origin: border;\n"
"  subcontrol-position: top right; \n"
"  width: 18px; \n"
"  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
"QSpinBox::up-button:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
" "
                        " border-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
" QSpinBox::up-arrow {\n"
"     image: url(:/images/plus.png);\n"
"     width: 9px;\n"
"     height: 9px;\n"
" }\n"
"QSpinBox::down-button {\n"
"  subcontrol-origin: border;\n"
"  subcontrol-position: bottom right;\n"
"  width: 18px; \n"
"  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
"QSpinBox::down-button:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
"  border"
                        "-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 2px;\n"
"  border-radius : 6px;\n"
" }\n"
" QSpinBox::down-arrow {\n"
"     image: url(:/images/minus.png);\n"
"     width: 12px;\n"
"     height: 9px;\n"
" }"));
        number_of_layers->setMinimum(1);
        number_of_layers->setMaximum(32);
        number_of_layers->setValue(5);
        label_for_version = new QLabel(widget);
        label_for_version->setObjectName(QString::fromUtf8("label_for_version"));
        label_for_version->setGeometry(QRect(10, 175, 50, 15));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        label_for_version->setFont(font3);
        label_for_version->setStyleSheet(QString::fromUtf8("QWidget{\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
"}\n"
""));
        clear_label_3 = new QLabel(widget);
        clear_label_3->setObjectName(QString::fromUtf8("clear_label_3"));
        clear_label_3->setGeometry(QRect(10, 140, 71, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setPointSize(11);
        font4.setKerning(true);
        clear_label_3->setFont(font4);
        clear_label_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
""));
        clear_label_3->setFrameShadow(QFrame::Raised);
        clear_label_3->setScaledContents(false);
        clear_label_3->setAlignment(Qt::AlignCenter);
        clear_label_3->setWordWrap(true);
        clear_label_4 = new QLabel(widget);
        clear_label_4->setObjectName(QString::fromUtf8("clear_label_4"));
        clear_label_4->setGeometry(QRect(115, 140, 71, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font5.setPointSize(10);
        font5.setKerning(true);
        clear_label_4->setFont(font5);
        clear_label_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
""));
        clear_label_4->setFrameShadow(QFrame::Raised);
        clear_label_4->setScaledContents(false);
        clear_label_4->setAlignment(Qt::AlignCenter);
        clear_label_4->setWordWrap(true);
        clear_label_5 = new QLabel(widget);
        clear_label_5->setObjectName(QString::fromUtf8("clear_label_5"));
        clear_label_5->setGeometry(QRect(220, 140, 71, 21));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font6.setPointSize(12);
        font6.setKerning(true);
        clear_label_5->setFont(font6);
        clear_label_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
""));
        clear_label_5->setFrameShadow(QFrame::Raised);
        clear_label_5->setScaledContents(false);
        clear_label_5->setAlignment(Qt::AlignCenter);
        clear_label_5->setWordWrap(true);
        pushButton_open = new QPushButton(widget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(315, 145, 80, 35));
        pushButton_open->setFont(font1);
        pushButton_open->setFocusPolicy(Qt::StrongFocus);
        pushButton_open->setAutoFillBackground(false);
        pushButton_open->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"  color:white;\n"
"	  background : #8C8C8C;\n"
"  background : rgba(140, 140, 140, 1);\n"
"  border-style : Solid;\n"
"  border-color : #AFAFAF;\n"
"  border-color : rgba(175, 175, 175, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
" QPushButton:hover {\n"
"	  background : #E19727;\n"
"  background : rgba(225, 151, 39, 1);\n"
"  border-style : Solid;\n"
"  border-color : #E5AA5B;\n"
"  border-color : rgba(229, 170, 91, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"  background : #F0BD65;\n"
"  background : rgba(240, 189, 101, 1);\n"
"  border-style : Solid;\n"
"  border-color : #F2D39F;\n"
"  border-color : rgba(242, 211, 159, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
" }"));
        pushButton_open->setIconSize(QSize(80, 25));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Set the parameters for width, height, as well as the number of layers (frames) that you want to put.", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        label_for_version->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        clear_label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt;\">Wigth</span></p></body></html>", nullptr));
        clear_label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt;\">Height</span></p></body></html>", nullptr));
        clear_label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt;\">Layers</span></p></body></html>", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
