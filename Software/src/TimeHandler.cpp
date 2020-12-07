#include "TimeHandler.h"

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

void TimeHandler::Init(){
	Serial.println("Test");
}

void TimeHandler::UpdateTime(){
	timeString = timeClient.getFormattedTime();
	hours = timeClient.getHours();
	minutes = timeClient.getMinutes();
	seconds = timeClient.getSeconds();
}

String TimeHandler::GetTime(){
	return timeString;
}

int TimeHandler::GetHours(){
	return hours;
}

int TimeHandler::GetMinutes(){
	return minutes;
}