#pragma once
#ifndef _WIFIHANGLERH_
#define _WIFIHANGLERH_

#include <Arduino.h>
#include <DNSServer.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <WiFiClient.h>

#include "WebPage.h"           // Website

class WifiHandler {
  
  private:
    const char *ssid     = "Spinburg";
    const char *password = "SpInBuRgF364F3F9A6";


  public:
      WifiHandler() {}
      void Init();
      void BrowserHandler();
};
#endif