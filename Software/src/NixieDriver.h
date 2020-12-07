#pragma once
#ifndef _NIXIEDRIVERH_
#define _NIXIEDRIVERH_
#include <Arduino.h>

class NixieDriver {
  
  private:
    int leftTube;
    int rightTube;
  public:
      NixieDriver() {}
      void Init(int leftTube, int rightTube);
      void SetValue(int mode);
};
#endif