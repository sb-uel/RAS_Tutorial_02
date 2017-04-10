// INCLUDES
#include "motors.h"
#include "debug.h"
#include <Arduino.h>

// Funcao:    motorInit()
// Descricao: Incializa os pinos dos motores.
void motorInit(){
}

// Funcao:    motorAllDisable()
// Descricao: Desliga os dois motores.
void motorAllDisable(){
}

// Funcao:    motorOn(int motor1, int motor2)
// Descricao: Liga os motores. Os parametros passados representam
//            o sentido de rotacao dos motores (MOTOR_FRENTE ou
//            MOTOR_TRAS).
void motorOn(int motor1, int motor2){
}

/*Lembrar de ver o MANUAL_CALIBRACAO*/
// void motorCalibra(){
// 	_biasMotor1 = MANUAL_CALIBRACAO == 1?(float)map(analogRead(POT_MOTOR1), 0, 1023, 0, 100)/100.0 : 1;
// 	_biasMotor2 = MANUAL_CALIBRACAO == 1?(float)map(analogRead(POT_MOTOR2), 0, 1023, 0, 100)/100.0 : 1;
// }
