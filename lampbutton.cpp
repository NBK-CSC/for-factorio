#include "lampbutton.h"

const QString LampButton::ZeroCodedState = QString("00000000000000000000000000000000");

LampButton::LampButton(){
    _buttonLamp=nullptr;
    _codedState=new QString (ZeroCodedState);
}

LampButton::LampButton(QPushButton* _buttonLamp)
{
    this->_buttonLamp=_buttonLamp;
    _codedState=new QString (ZeroCodedState);
}

void LampButton::SetButtonLamp(QPushButton* _buttonLamp){
    this->_buttonLamp=_buttonLamp;
}

QPushButton* LampButton::GetButtonLamp(){
    return  _buttonLamp ;
}

void LampButton::SetCodedState(QString _codedState){
    this->_codedState=new QString(_codedState);
}

QString* LampButton::GetCodedState(){
    return _codedState;
}
