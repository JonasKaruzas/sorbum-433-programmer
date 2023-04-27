#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);
   mySwitch.enableTransmit(10);
   mySwitch.setPulseLength(337);
   mySwitch.setRepeatTransmit(45);
}

char rx_byte = 0;

void loop() {
  if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();       // get the character

    if (rx_byte == '1') {      Serial.print("Number 1 received: ");
//mySwitch.send("100011010110101101100001"); //1 
//mySwitch.send("100111010110101101100001"); //2
//mySwitch.send("101011010110101101100001"); //3
//mySwitch.send("101111010110101101100001"); //4
//mySwitch.send("110011010110101101100001"); //5
//mySwitch.send("110111010110101101100001"); //6
//mySwitch.send("111011010110101101100001"); //7
//mySwitch.send("111111010110101101100001"); //8
//mySwitch.send("011111010110101101100001"); //9
//mySwitch.send("011011010110101101100001"); //10
//mySwitch.send("100011010110101101110001");
//mySwitch.send("100111010110101101110001");
//mySwitch.send("101011010110101101110001");
mySwitch.send("101111010110101101110001");
    }    if (rx_byte == '2') {      Serial.print("Number 2 received: ");
//mySwitch.send("100011010110101101100010"); //1
//mySwitch.send("100111010110101101100010"); //2
//mySwitch.send("101011010110101101100010"); //3
//mySwitch.send("101111010110101101100010"); //4
//mySwitch.send("110011010110101101100010"); //5
//mySwitch.send("110111010110101101100010"); //6
//mySwitch.send("111011010110101101100010"); //7
//mySwitch.send("111111010110101101100010"); //8
//mySwitch.send("011111010110101101100010"); //9
//mySwitch.send("011011010110101101100010"); //10
//mySwitch.send("100011010110101101110010");
//mySwitch.send("100111010110101101110010");
//mySwitch.send("101011010110101101110010");
mySwitch.send("101111010110101101110010");
    }    if (rx_byte == '3') {      Serial.print("Number 3 received: ");
//mySwitch.send("100011010110101101101000"); //1
//mySwitch.send("100111010110101101101000"); //2
//mySwitch.send("101011010110101101101000"); //3
//mySwitch.send("101111010110101101101000"); //4
//mySwitch.send("110011010110101101101000"); //5
//mySwitch.send("110111010110101101101000"); //6
//mySwitch.send("111011010110101101101000"); //7
//mySwitch.send("111111010110101101101000"); //8
//mySwitch.send("011111010110101101101000"); //9
//mySwitch.send("011011010110101101101000"); //10
//mySwitch.send("100011010110101101111000");
//mySwitch.send("100111010110101101111000");
//mySwitch.send("101011010110101101111000");
mySwitch.send("101111010110101101111000");

    }
  } 
}
