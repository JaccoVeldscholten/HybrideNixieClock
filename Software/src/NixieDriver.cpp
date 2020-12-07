#include "NixieDriver.h"

void NixieDriver::Init(int leftTube, int rightTube){
    this->leftTube = leftTube;
    this->rightTube = rightTube;
    pinMode(leftTube, OUTPUT);
}

void NixieDriver::SetValue(int mode) {
    switch (mode)
    {
    case 1:
        digitalWrite(leftTube, HIGH);
        break;
    }
}



