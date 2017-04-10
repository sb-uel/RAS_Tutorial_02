#ifndef __DEBUG_H
#define __DEBUG_H

#include <Arduino.h>

// DEFINES
#define DEBUG 		Serial.println
#define DEBUG_LN 	DEBUG("\n")

// PROTOTIPOS
int debugSensor(int n_test);
int debugMotor();

#endif
