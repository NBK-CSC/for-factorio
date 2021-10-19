#ifndef LAMPBUTTON_H
#define LAMPBUTTON_H

#include <QPushButton>
class LampButton
{
private:
    QPushButton* _buttonLamp;
    QString* _codedState;

public: 
    static const QString ZeroCodedState;

    LampButton();
    LampButton(QPushButton*);
    void SetButtonLamp(QPushButton*);
    QPushButton* GetButtonLamp();
    void SetCodedState(QString);
    QString* GetCodedState();
};

#endif // LAMPBUTTON_H
