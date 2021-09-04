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
    QWidget *widget_bg_for_ground;
    QWidget *widget_ground;
    QLabel *clear_label_2;
    QPushButton *pushButton_of_clear;
    QLabel *clear_label_3;
    QPushButton *pushButton_of_delete;
    QLabel *clear_label_4;
    QPushButton *pushButton_of_add;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QString::fromUtf8("secondwindow"));
        secondwindow->setEnabled(true);
        secondwindow->resize(500, 380);
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
        widget_1->setGeometry(QRect(10, 10, 480, 360));
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
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
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
        widget_for_label->setGeometry(QRect(150, 50, 311, 51));
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
        number_of_layers_label->setGeometry(QRect(210, 10, 91, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        number_of_layers_label->setFont(font1);
        height_label = new QLabel(widget_for_label);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        height_label->setGeometry(QRect(110, 10, 91, 29));
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
        label_for_version->setGeometry(QRect(20, 330, 60, 15));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
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
        widget_bg_for_ground = new QWidget(widget_1);
        widget_bg_for_ground->setObjectName(QString::fromUtf8("widget_bg_for_ground"));
        widget_bg_for_ground->setGeometry(QRect(130, 120, 340, 230));
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
        clear_label_2 = new QLabel(widget_1);
        clear_label_2->setObjectName(QString::fromUtf8("clear_label_2"));
        clear_label_2->setGeometry(QRect(10, 70, 111, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(6);
        font3.setKerning(true);
        clear_label_2->setFont(font3);
        clear_label_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        clear_label_2->setFrameShadow(QFrame::Plain);
        clear_label_2->setScaledContents(false);
        clear_label_2->setWordWrap(true);
        pushButton_of_clear = new QPushButton(widget_1);
        pushButton_of_clear->setObjectName(QString::fromUtf8("pushButton_of_clear"));
        pushButton_of_clear->setGeometry(QRect(20, 100, 81, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setPointSize(14);
        pushButton_of_clear->setFont(font4);
        pushButton_of_clear->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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
        clear_label_3 = new QLabel(widget_1);
        clear_label_3->setObjectName(QString::fromUtf8("clear_label_3"));
        clear_label_3->setGeometry(QRect(10, 150, 111, 71));
        clear_label_3->setFont(font3);
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
        clear_label_3->setWordWrap(true);
        pushButton_of_delete = new QPushButton(widget_1);
        pushButton_of_delete->setObjectName(QString::fromUtf8("pushButton_of_delete"));
        pushButton_of_delete->setGeometry(QRect(20, 180, 81, 31));
        pushButton_of_delete->setFont(font4);
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
        clear_label_4 = new QLabel(widget_1);
        clear_label_4->setObjectName(QString::fromUtf8("clear_label_4"));
        clear_label_4->setGeometry(QRect(10, 230, 111, 81));
        clear_label_4->setFont(font3);
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
        clear_label_4->setWordWrap(true);
        pushButton_of_add = new QPushButton(widget_1);
        pushButton_of_add->setObjectName(QString::fromUtf8("pushButton_of_add"));
        pushButton_of_add->setGeometry(QRect(20, 270, 81, 31));
        pushButton_of_add->setFont(font4);
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
        clear_label_2->setText(QCoreApplication::translate("secondwindow", "<html><head/><body><p><span style=\" font-size:6pt;\">To clear this layer, click the &quot;Clear&quot; button.</span></p><p><br/></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_of_clear->setToolTip(QCoreApplication::translate("secondwindow", "Button, remove the last layer with all content", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_of_clear->setText(QCoreApplication::translate("secondwindow", "Clear", nullptr));
        clear_label_3->setText(QCoreApplication::translate("secondwindow", "<html><head/><body><p><span style=\" font-size:6pt;\">To remove the last layer, click the &quot;Delete&quot; button.</span></p><p><br/></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_of_delete->setToolTip(QCoreApplication::translate("secondwindow", "Button, remove the last layer with all content", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_of_delete->setText(QCoreApplication::translate("secondwindow", "Delete", nullptr));
        clear_label_4->setText(QCoreApplication::translate("secondwindow", "<html><head/><body><p><span style=\" font-size:6pt;\">To add an additional layer at the end, click the &quot;Add&quot; button.</span></p><p><br/></p></body></html>", nullptr));
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
