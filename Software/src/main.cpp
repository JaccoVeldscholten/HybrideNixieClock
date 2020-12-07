#include <Arduino.h>
#include "MPU6050.h"
#include "WiFiHandler.h"
#include "TimeHandler.h"

MPU6050 gyro;
WifiHandler wifiHandler;
TimeHandler timeHandler;

void setup(){
  Serial.begin(9600);
  gyro.Init();
  wifiHandler.Init();
  timeHandler.Init();
  
}

void loop(){
  timeHandler.UpdateTime();

  //Serial.print("De tijd is:");
  //Serial.println(timeHandler.GetTime());

  
  switch( gyro.getMode()){
    case 0:
      //Serial.println("Mode Time");
      break;
    case 1:
     // Serial.println("Mode TempMode");
      break;
    case 2:
     // Serial.println("Equalizer Mode ");
      break;
    case 3:
     // Serial.println("Hourglass Mode");
      break;
    default: 
     // Serial.println("Idle");
     break;
  }

/*
  Serial.print("AcX = "); Serial.print(gyro.AcX);
  Serial.print(" | AcY = "); Serial.print(gyro.AcY);
  Serial.print(" | AcZ = "); Serial.print(gyro.AcZ);
  Serial.print(" | Tmp = "); Serial.print(gyro.Tmp/340.00+36.53);  //equation for temperature in degrees C from datasheet
  Serial.print(" | GyX = "); Serial.print(gyro.GyX);
  Serial.print(" | GyY = "); Serial.print(gyro.GyY);
  Serial.print(" | GyZ = "); Serial.println(gyro.GyZ);

*/
  wifiHandler.BrowserHandler();
}