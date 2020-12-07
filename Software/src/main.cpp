#include <Arduino.h>
#include "TimeHandler.h"
#include "WiFiManager.h"
#include "NixieDriver.h"
#include "MPU6050.h"

#define LEFTTUBEPIN 10
#define RIGHTTUBEPIN 10

TimeHandler _TimeHandler;
WiFiManager _WifiManager;
NixieDriver _clockTubes;

MPU6050 _gyro;

void setup(){
  Serial.begin(9600);
  _TimeHandler.Init();
  _WifiManager.Init();
  _clockTubes.Init(LEFTTUBEPIN,RIGHTTUBEPIN);

}

void loop(){
  switch (_gyro.getMode()){
    case 0:
      Serial.println("TimeMode");
      _clockTubes.SetValue(0);
      break;
    case 1:
      Serial.println("thermometerMode");
      _clockTubes.SetValue(1);
      break;
    case 2:
      Serial.println("timerMode");
      _clockTubes.SetValue(2);
      break;
    case 3:
      Serial.println("equalizerMode");
      _clockTubes.SetValue(3);
      break;
    case 4:
      Serial.println("Idle mode");
      _clockTubes.SetValue(5);
  }
  delay(1000);
}