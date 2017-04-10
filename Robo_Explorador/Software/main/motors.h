#ifndef __MOTORS_H
#define __MOTORS_H

// DEFINES
#define MOTOR1_EN 	10
#define MOTOR2_EN 	11

#define MOTOR1_E 	2
#define MOTOR1_D 	3

#define MOTOR2_E 	6
#define MOTOR2_D 	7

/*Constantes BIAS (pot)*/
#define POT_MOTOR1 A0
#define POT_MOTOR2 A1

/*Calibracao manual*/
#define MANUAL_CALIBRACAO 0

/*Constante Velocidade*/
#define MAX_VEL 200 //limite (255)

/*Constantes Direcao*/
#define MOTOR_FRENTE 1
#define MOTOR_TRAS -1


/*Variaveis Globais*/
//float _biasMotor1, _biasMotor2;

// PROTOTIPOS
void motorInit();

void motorCalibra();

void motorAllDisable();

void motorOn(int motor1, int motor2);

#endif
