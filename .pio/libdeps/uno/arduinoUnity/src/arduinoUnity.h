extern "C" {
    void export_char(int a) {
        Serial.print(char(a));
        //Serial.printf("%s\n", char(a));
    }
    void export_flush(void) {
        Serial.flush();
    }
    void export_start(unsigned int baudrate) {
        Serial.begin(baudrate);
        delay(5000); // Give time to connect to serial
    }

    void export_complete(void) {
        Serial.flush();
        Serial.end();
    }
}

#include<unity.h>
