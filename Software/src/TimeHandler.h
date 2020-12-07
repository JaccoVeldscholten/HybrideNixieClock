#ifndef _TIMEHANDLERH_
#define _TIMEHANDLERH_

#include <WiFiUdp.h>
#include <NTPClient.h>

const long utcOffsetInSeconds = 3600;

class TimeHandler {
  
  private:
    String timeString = "10:00";
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    
    
  public:
      TimeHandler() {}
      void Init();
      void UpdateTime();
      String GetTime();
      int GetHours();
      int GetMinutes();
      int GetSeconds();
};
#endif