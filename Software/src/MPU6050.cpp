#include "MPU6050.h"

void MPU6050::Init(int MPU_addr){
    MPU_addr = MPU_addr;
    Wire.begin();
    Wire.beginTransmission(MPU_addr);
    Wire.write(0x6B);                       // PWR_MGMT_1 register
    Wire.write(0);                          // Set to zero (wakes up the MPU-6050)
    Wire.endTransmission(true);
    Serial.begin(9600);
}

void MPU6050::Update(){
    Wire.beginTransmission(MPU_addr);
    Wire.write(0x3B);                                    // starting with register 0x3B (ACCEL_XOUT_H)
    Wire.endTransmission(false);
    AcX = Wire.read()<<8|Wire.read();                    // 0x3B (ACCEL_XOUT_H) & 0x3C (ACCEL_XOUT_L)    
    AcY = Wire.read()<<8|Wire.read();                    // 0x3D (ACCEL_YOUT_H) & 0x3E (ACCEL_YOUT_L)
    AcZ = Wire.read()<<8|Wire.read();                    // 0x3F (ACCEL_ZOUT_H) & 0x40 (ACCEL_ZOUT_L)
    Tmp = Wire.read()<<8|Wire.read();                    // 0x41 (TEMP_OUT_H) & 0x42 (TEMP_OUT_L)
    Tmp = Tmp / 340.00 + 36.53;                          // Equation for temperature in degrees C from datasheet
    GyX = Wire.read()<<8|Wire.read();                    // 0x43 (GYRO_XOUT_H) & 0x44 (GYRO_XOUT_L)
    GyY = Wire.read()<<8|Wire.read();                    // 0x45 (GYRO_YOUT_H) & 0x46 (GYRO_YOUT_L)
    GyZ = Wire.read()<<8|Wire.read();                    // 0x47 (GYRO_ZOUT_H) & 0x48 (GYRO_ZOUT_L)
}

void MPU6050::CheckFunction(){
    Update();                                  // Update values
    if ((GyX == 40 ) && (GyY == 40 ) && (GyZ == 40)){
    }
    
}

void setMode(MPU6050::ClockModes clockModeRec){
    // TODO: Make setter
}

MPU6050::ClockModes MPU6050::getMode(){
    return clockMode;
}