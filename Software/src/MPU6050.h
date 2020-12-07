#pragma once
#ifndef _MPU6050H_
#define _MPU6050H_

#include <Arduino.h>
#include<Wire.h>

class MPU6050 {

      public:
            // Integers
            int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
            enum ClockModes{timeMode,thermometerMode,timerMode,equalizerMode,idleMode};

            // Functions
            MPU6050() {}
            void Init(int MPU_addr);
            void CheckFunction();
            void setMode();
            ClockModes getMode();

      private:
            int MPU_addr;
            void Update();
            ClockModes clockMode;

};
#endif