/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "frc/WPILib.h"
#include "rev/CANSparkMax.h"
#include "robotIO.h"

using namespace frc;
using namespace std;

    Joystick * m_stick = new Joystick(3);
    Joystick * m_partner = new Joystick(4);

    bool buttonOne;
    bool buttonTwo;
    bool buttonThree;
    bool buttonFour;
    bool buttonFive;
    bool buttonSix;
    bool buttonSeven;
    bool buttonEight;
    double yAxis;
    double xAxis;
    double axisFour;
    double axisFive;
    double axisFivePartner;
    bool buttonOnePartner;
    bool buttonFourPartner;
    bool buttonFivePartner;
    bool buttonSixPartner;
    bool buttonTwoPartner;
    double YPartner;
    bool buttonFourPressed;
    bool buttonOnePressed;
    bool buttonThreePartner;
    bool buttonEightPartner;
    double axisFourPartner;
    bool buttonSevenPartner;
    
robotIO::robotIO() {
    Joystick * m_stick = new Joystick(3);
    Joystick * m_partner = new Joystick(4);
}
bool robotIO::getButtonOne(){
    buttonOne = m_stick->GetRawButton(1);
    return buttonOne;
}

bool robotIO::getButtonTwo(){
    buttonTwo = m_stick->GetRawButton(2);
    return buttonTwo;
}

bool robotIO::getButtonThree(){
    buttonThree = m_stick->GetRawButton(3);
    return buttonThree;
}

bool robotIO::getButtonFour(){
    buttonFour = m_stick->GetRawButton(4);
    return buttonFour;
}

bool robotIO::getButtonFive(){
    buttonFive = m_stick->GetRawButton(5);
    return buttonFive;
}

bool robotIO::getButtonSix(){
    buttonSix = m_stick->GetRawButton(6);
    return buttonSix;
}

bool robotIO::getButtonSeven(){
    buttonSeven = m_stick->GetRawButton(7);
    return buttonSeven;
}

bool robotIO::getButtonEight(){
    buttonEight = m_stick->GetRawButton(8);
    return buttonEight;
}

double robotIO::getY(){
    yAxis = m_stick->GetY();
    return yAxis;
}

double robotIO::getX(){
    xAxis = m_stick->GetX();
    return xAxis;
}

double robotIO::getAxisFive(){
    axisFive = m_stick->GetRawAxis(5);
    return axisFive;
}

double robotIO::getAxisFour(){
    axisFour = m_stick->GetRawAxis(4);
    return axisFour;
}

bool robotIO::getButtonOnePartner(){
    buttonOnePartner = m_partner->GetRawButton(1);
    return buttonOnePartner;
}

bool robotIO::getButtonFourPartner(){
    buttonFourPartner = m_partner->GetRawButton(4);
    return buttonFourPartner;
}

bool robotIO::getButtonFivePartner(){
    buttonFivePartner = m_partner->GetRawButton(5);
    return buttonFivePartner;
}

bool robotIO::getButtonSixPartner(){
    buttonSixPartner = m_partner->GetRawButton(6);
    return buttonSixPartner;
}

double robotIO::getYPartner(){
    YPartner = m_partner->GetY();
    return YPartner;
}

bool robotIO::getButtonTwoPartner(){
    buttonTwoPartner = m_partner->GetRawButton(2);
    return buttonTwoPartner;
}

bool robotIO::getButtonFourPressed(){
    buttonFourPressed = m_stick->GetRawButtonPressed(4);
    return buttonFourPressed;
}

bool robotIO::getButtonOnePressed(){
    buttonOnePressed = m_stick->GetRawButtonPressed(1);
    return buttonOnePressed;
}

bool robotIO::getButtonThreePartner(){
    buttonThreePartner = m_partner->GetRawButton(3);
    return buttonThreePartner;
}

double robotIO::getAxisFivePartner(){
    axisFivePartner = m_partner->GetRawAxis(5);
    return axisFivePartner;
}

bool robotIO::getButtonEightPartner(){
    buttonEightPartner = m_partner->GetRawButton(8);
    return buttonEightPartner;
}

bool robotIO::getButtonSevenPartner(){
    buttonSevenPartner = m_partner->GetRawButton(7);
    return buttonSevenPartner;
}

double robotIO::getAxisFourPartner(){
    axisFourPartner = m_partner->GetRawAxis(4);
    return axisFourPartner;
}