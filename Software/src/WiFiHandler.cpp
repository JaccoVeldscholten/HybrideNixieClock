#include "WiFiHandler.h"

ESP8266WebServer server(80);        //Server on port 80



void HandleRoot() {
    server.send(200, "text/html", MAIN_page);      //Send web page
}

void WifiHandler::Init(){
    WiFiManager wifiManager;
    wifiManager.autoConnect("Hybrid Nixie Clock");

    // Running the webserver
    server.on("/", HandleRoot);
    server.begin();
}

void WifiHandler::BrowserHandler(){
    server.handleClient();          //Handle client requests
}