/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QWidget *widget_1;
    QPushButton *pushButton_of_save;
    QWidget *widget_for_label;
    QLabel *number_of_layers_label;
    QLabel *height_label;
    QLabel *width_label;
    QSlider *number_of_layers_Slider;
    QSpinBox *number_of_layers_spinBox;
    QLabel *label_for_version;
    QPushButton *pushButton_of_delete;
    QPushButton *pushButton_of_add;
    QWidget *widget_bg_for_ground;
    QWidget *widget_ground;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QString::fromUtf8("secondwindow"));
        secondwindow->setEnabled(true);
        secondwindow->resize(500, 320);
        secondwindow->setMouseTracking(false);
        secondwindow->setTabletTracking(false);
        secondwindow->setLayoutDirection(Qt::LeftToRight);
        secondwindow->setAutoFillBackground(false);
        secondwindow->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"  background : #313032;\n"
"  background : rgba(49, 48, 50, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"}\n"
""));
        widget_1 = new QWidget(secondwindow);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        widget_1->setGeometry(QRect(10, 10, 480, 300));
        widget_1->setStyleSheet(QString::fromUtf8("QWidget#widget_1{\n"
"  background : #232223;\n"
"  background : rgba(35, 34, 35, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 8px;\n"
" background-repeat : no-repeat;\n"
"}\n"
"QWidget#horizontalLayout{\n"
"  color:white;\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 9px;\n"
"}"));
        pushButton_of_save = new QPushButton(widget_1);
        pushButton_of_save->setObjectName(QString::fromUtf8("pushButton_of_save"));
        pushButton_of_save->setGeometry(QRect(10, 10, 111, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("OCR A Extended")});
        font.setPointSize(16);
        pushButton_of_save->setFont(font);
        pushButton_of_save->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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
        widget_for_label = new QWidget(widget_1);
        widget_for_label->setObjectName(QString::fromUtf8("widget_for_label"));
        widget_for_label->setGeometry(QRect(10, 60, 111, 111));
        widget_for_label->setStyleSheet(QString::fromUtf8("QWidget{\n"
"\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
"}\n"
"\n"
"QWidget{\n"
"  color:white;\n"
"}\n"
"\n"
"QWidget#widget_for_label\n"
"{\n"
"  background : #313032;\n"
"  background : rgba(49, 48, 50, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"}\n"
""));
        number_of_layers_label = new QLabel(widget_for_label);
        number_of_layers_label->setObjectName(QString::fromUtf8("number_of_layers_label"));
        number_of_layers_label->setEnabled(true);
        number_of_layers_label->setGeometry(QRect(10, 70, 91, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("OCR A Extended")});
        number_of_layers_label->setFont(font1);
        height_label = new QLabel(widget_for_label);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        height_label->setGeometry(QRect(10, 40, 91, 29));
        height_label->setFont(font1);
        width_label = new QLabel(widget_for_label);
        width_label->setObjectName(QString::fromUtf8("width_label"));
        width_label->setGeometry(QRect(10, 10, 91, 29));
        width_label->setFont(font1);
        number_of_layers_Slider = new QSlider(widget_1);
        number_of_layers_Slider->setObjectName(QString::fromUtf8("number_of_layers_Slider"));
        number_of_layers_Slider->setEnabled(true);
        number_of_layers_Slider->setGeometry(QRect(130, 20, 271, 20));
        number_of_layers_Slider->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
"  height: 8px;\n"
"  margin: 2px 0;\n"
"\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 3px;\n"
"\n"
" }\n"
"\n"
"QSlider::handle:horizontal {\n"
"  width: 10px;\n"
"  margin: -6px 0; \n"
"\n"
"  background : #403F40;\n"
"  background : rgba(64, 63, 64, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 3px;\n"
"}"));
        number_of_layers_Slider->setMinimum(1);
        number_of_layers_Slider->setValue(1);
        number_of_layers_Slider->setOrientation(Qt::Horizontal);
        number_of_layers_spinBox = new QSpinBox(widget_1);
        number_of_layers_spinBox->setObjectName(QString::fromUtf8("number_of_layers_spinBox"));
        number_of_layers_spinBox->setGeometry(QRect(410, 10, 61, 31));
        number_of_layers_spinBox->setFont(font1);
        number_of_layers_spinBox->setStyleSheet(QString::fromUtf8(" QSpinBox {\n"
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
        number_of_layers_spinBox->setMinimum(1);
        label_for_version = new QLabel(widget_1);
        label_for_version->setObjectName(QString::fromUtf8("label_for_version"));
        label_for_version->setGeometry(QRect(10, 275, 60, 15));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("OCR A Extended")});
        font2.setPointSize(8);
        label_for_version->setFont(font2);
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
        pushButton_of_delete = new QPushButton(widget_1);
        pushButton_of_delete->setObjectName(QString::fromUtf8("pushButton_of_delete"));
        pushButton_of_delete->setGeometry(QRect(20, 180, 81, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("OCR A Extended")});
        font3.setPointSize(14);
        pushButton_of_delete->setFont(font3);
        pushButton_of_delete->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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
        pushButton_of_add = new QPushButton(widget_1);
        pushButton_of_add->setObjectName(QString::fromUtf8("pushButton_of_add"));
        pushButton_of_add->setGeometry(QRect(20, 220, 81, 31));
        pushButton_of_add->setFont(font3);
        pushButton_of_add->setToolTipDuration(-1);
        pushButton_of_add->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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
        widget_bg_for_ground = new QWidget(widget_1);
        widget_bg_for_ground->setObjectName(QString::fromUtf8("widget_bg_for_ground"));
        widget_bg_for_ground->setGeometry(QRect(130, 60, 340, 230));
        widget_bg_for_ground->setStyleSheet(QString::fromUtf8("QWidget#widget_bg_for_ground\n"
"{   background : #313032;\n"
"  background : rgba(49, 48, 50, 1);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 6px;\n"
"}\n"
""));
        widget_ground = new QWidget(widget_bg_for_ground);
        widget_ground->setObjectName(QString::fromUtf8("widget_ground"));
        widget_ground->setGeometry(QRect(10, 10, 320, 210));
        widget_ground->setStyleSheet(QString::fromUtf8("  background: url(:/images/ground.png);\n"
"  border-style : Solid;\n"
"  border-color : #000000;\n"
"  border-color : rgba(0, 0, 0, 1);\n"
"  border-width : 3px;\n"
"  border-radius : 9px;"));

        retranslateUi(secondwindow);
        QObject::connect(number_of_layers_Slider, &QSlider::valueChanged, number_of_layers_spinBox, &QSpinBox::setValue);
        QObject::connect(number_of_layers_spinBox, &QSpinBox::valueChanged, number_of_layers_Slider, &QSlider::setValue);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QDialog *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_of_save->setToolTip(QCoreApplication::translate("secondwindow", "Button to save everything to file 1.txt", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushButton_of_save->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushButton_of_save->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushButton_of_save->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushButton_of_save->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        pushButton_of_save->setText(QCoreApplication::translate("secondwindow", "Save", nullptr));
        number_of_layers_label->setText(QCoreApplication::translate("secondwindow", "TextLabel", nullptr));
        height_label->setText(QCoreApplication::translate("secondwindow", "TextLabel", nullptr));
        width_label->setText(QCoreApplication::translate("secondwindow", "TextLabel", nullptr));
        label_for_version->setText(QCoreApplication::translate("secondwindow", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_of_delete->setToolTip(QCoreApplication::translate("secondwindow", "Button, remove the last layer with all content", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_of_delete->setText(QCoreApplication::translate("secondwindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_of_add->setToolTip(QCoreApplication::translate("secondwindow", "Button to add an extra layer at the end", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_of_add->setText(QCoreApplication::translate("secondwindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
