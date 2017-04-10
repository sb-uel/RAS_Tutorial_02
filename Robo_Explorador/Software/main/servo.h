#ifndef __SERVO_H
#define __SERVO_H

// INCLUDE
#include <Servo.h>

// DEFINES
/*Constantes Servo*/
#define SERVO_PIN		9

/*Constantes Thread*/
#define INTERVAL_SERVO 	100

/*Constantes Gerais Posicao*/
#define SERVO_RIGHT		170
#define SERVO_LEFT		10
#define SERVO_NORMAL	87

// GLOBAIS
static Servo servo;
static int servoStatus;

// PROTOTIPOS

void servoInit();
void servoAttach(int posicao);

#endif
