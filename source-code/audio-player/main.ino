#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

static const uint8_t PIN_MP3_TX = 2;
static const uint8_t PIN_MP3_RX = 3;

SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);
DFRobotDFPlayerMini player;

void setup() {
  Serial.begin(38400);  
  softwareSerial.begin(9600);

  if (player.begin(softwareSerial)) {
    Serial.println("DFPlayer OK");
  } else {
    Serial.println("DFPlayer FAIL");
  }
  player.volume(30);
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();
    Serial.println(receivedChar);
    if (receivedChar == '1') {
      player.play(1);
    }
    else if (receivedChar == '2') {
      player.play(2);
    }
    else if (receivedChar == '3') {
      player.play(3);
    }
    else if (receivedChar == '4') {
      player.play(4);
    }
    else if (receivedChar == '5') {
      player.play(5);
    }
    else if (receivedChar == '6') {
      player.play(6);
    }
    else if (receivedChar == '7') {
      player.play(7);
    }
    else if (receivedChar == '8') {
      player.play(8);
    }
  }
}
