#pragma once
#ifndef _WIFIMANAGERH_
#define _WIFIMANAGERH_

#include <Arduino.h>
#include <ESP8266WiFi.h>

class WiFiManager {
  
  private:
    const char *ssid     = "Spinburg";
    const char *password = "SpInBuRgF364F3F9A6";

  public:
      WiFiManager() {}
      void Init();
};
#endif