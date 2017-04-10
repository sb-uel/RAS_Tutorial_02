#ifndef __SENSOR_H
#define __SENSOR_H

// INCLUDES

#include "filter.h"
#include <Ultrasonic.h>

// DEFINES
/*Intervalo da thread do sensor*/
#define INTERVAL_SENSOR 40

/*Constantes do Ultrassom*/
#define PIN_TRIGGER 4
#define PIN_ECHO 	5

/*Constantes referentes a distancia*/
#define MAX_DIST 10
#define MIN_DIST 25

// GLOBAIS

static Ultrasonic ultrasonic(PIN_TRIGGER, PIN_ECHO);
static float distancias[] = {MIN_DIST};
static float distancia	  = 0;

// PROTOTIPOS

void sensorInit();

float getSensor();

#endif
