#pragma once
#ifndef _MPU6050H_
#define _MPU6050H_

#include <Arduino.h>
#include<Wire.h>

class MPU6050 {
      private:
            // Variables
            const int MPU_addr = 0x68;  // I2C address of the MPU-6050
            #pragma region  Coords TimeMode
            int GyroXMinTimeMode = 10;
            int GyroXMaxTimeMode = 20;
            int GyroYMinTimeMode = 10;
            int GyroYMaxTimeMode = 20;
            int GyroZMinTimeMode = 10;
            int GyroZMaxTimeMode = 20;
            #pragma endregion
            #pragma region  Coords TempMode
            int GyroXMinTempMode = 10;
            int GyroXMaxTempMode = 20;
            int GyroYMinTempMode = 10;
            int GyroYMaxTempMode = 20;
            int GyroZMinTempMode = 10;
            int GyroZMaxTempMode = 20;
            #pragma endregion
            #pragma region  Coords EqualizerMode
            int GyroXMinEqualizerMode = 10;
            int GyroXMaxEqualizerMode = 20;
            int GyroYMinEqualizerMode = 10;
            int GyroYMaxEqualizerMode = 20;
            int GyroZMinEqualizerMode = 10;
            int GyroZMaxEqualizerMode = 20;
            #pragma endregion
            #pragma region  Coords HourglassMode
            int GyroXMinHourglassMode = 10;
            int GyroXMaxHourglassMode = 20;
            int GyroYMinHourglassMode = 10;
            int GyroYMaxHourglassMode = 20;
            int GyroZMinHourglassMode = 10;
            int GyroZMaxHourglassMode = 20;
#pragma endregion
           
            void Update();

      public:
            // Variables
            int AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
            int currentMode;  // 0 = Clocmode // 1 = Timer

            // Functions
            MPU6050() {}
            void Init();
            int getMode();

};
#endif