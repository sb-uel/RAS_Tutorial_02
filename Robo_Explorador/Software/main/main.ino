/*--------------------------------------*
*      PINOUT ROBO (Arduino)            *
*--------------MOTOR--------------------*
* Motor 1   - EN=~10, ESQ=2, DIR=3      *
* Motor 2   - EN=~11, ESQ=6, DIR=7      *
*-----------------SERVO-----------------*
* Servo     - PWM=~9                    *
*-----------------SENSOR----------------*
* Ultrassom - TRIG=4, ECHO=5            *
*-------------POTENCIOMETRO-------------*
* Pot 1 = A0    -    Pot 2 = A1         *
*---------------------------------------*/


/*Bibliotecas Externas*/
#include <Arduino.h>

/*Bibliotecas Internas*/
#include "motors.h"
#include "sensor.h"
#include "servo.h"
#include "debug.h"

/*Constantes e definioes*/
#define SERIAL_BAUD_RATE 	9600
#define TIME_TURN_SERVO	 	2000
#define TIME_TURN_MOTOR	 	500

/*Prototipos*/
void ini();
void run();

/*Implementacoes*/
void setup(){
	ini();
}

void loop(){
	 run();
}

/*Funcoes*/
void ini(){
	// Serial
	Serial.begin(SERIAL_BAUD_RATE);

	DEBUG("Inicializacao:");
  motorInit();
  sensorInit();
  servoInit();
}

void run(){
	float distL = 0.0, distR = 0.0;
}
