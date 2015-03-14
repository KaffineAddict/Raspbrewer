#include <wiringPi.h>
#include <stdio.h>

int initBrew(void) {
    if(wiringPiSetup() == -1){ 
        printf("setup wiringPi failed !\n");
        return 0;
    }
    return 1; 
}

void initRelay(int pin) {
    printf("Setting up relay pin on wiringPi pin: %d\n", pin);
    pinMode(pin, OUTPUT);
}