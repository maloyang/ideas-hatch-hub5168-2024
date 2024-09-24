#include <NTPClient.h>
#include <WiFi.h>
#include <WiFiUdp.h>

char ssid[] = "Malo7s";
char pass[] = "0928380233";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

void setup() {
    Serial.begin(115200);

    WiFi.begin(ssid, pass);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

  timeClient.begin();
}

void loop() {
    timeClient.update();

    Serial.println(timeClient.getFormattedTime());

    delay(1000);
}
