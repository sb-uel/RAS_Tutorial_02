# RAS_Tutorial_02

Código básico desenvolvido pelos voluntários do RAS do RAMO ESTUDANTIL IEEE - UEL com o propósito de introduzir robótica aos novos membros.

# Visão Geral:

* `motor`: Funções e constantes referentes aos motores e drivers.

* `sensor`: Resposável por setar e receber valores do ambiente.

* `filter`: Filtros e processamento do robo.

* `servo`: Contém as funcionalidades referentes ao micro servos.

* `debug`: Contém funcionalidades de debuger Serial, buzzer e leds.


## Organizaçao

```
| Project/
|
| __README.md
|
| __ Hardware/
|	|__ notyet
|	 
| __ Software/
|	|__ External
|		|__ LEIA-ME
|		|__ Servo/
|		|__ Ultrasonic/		
|	|__ main.ino 	
|	|__ servo.cpp
|	|__ servo.h
|	|__ motor.cpp
|	|__ motor.h
|	|__ debug.cpp
|	|__ debug.h
|	|__ filter.cpp
|	|__ filter.h
|	|__ sensor.cpp
|	|__ sensor.h
|
| |__ Test/
|	|__ notyet
```

## Módulos

### motors:

* `motorInit()`: Inicializa o pinMode geral do motor.

* `motorOn(int, int)`: Aciona motores por PWM.

* `motorAllDisable()`: Desativa completamente ambos os motores.


### sensor:

* `getSensor()`: Retorna a objeto-robo.

* `sensorInit()`: Inicializa o pinMode geral dos sensores.

### filter:

* `filterSensor()`: Media Movel nos valores do sensor.


### servo:

* `servoAttach(int)`: Rotaciona servo de acordo com o parametro.

* `servoInit()`: Inicializa pinModes e ângulo do servo.

### debug:

* macros para facilitar debuggacao

* funções gerais de debuggacao


## PinOut
````
/*--------------------------------------*
*      PINOUT ROBO (Arduino)       	   *
*--------------MOTOR--------------------*
* Motor 1   - EN=~10, ESQ=2, DIR=3  	   *
* Motor 2   - EN=~11, ESQ=6, DIR=7  	   *
*-----------------SERVO-----------------*
* Servo     - PWM=~9        		   *
*-----------------SENSOR----------------*
* Ultrassom - TRIG=4, ECHO=5      	   *
*-------------POTENCIOMETRO-------------*
* Pot 1 = A0    -    Pot 2 = A1   	   *
*---------------------------------------*/
````

# Getting Started:

# Desenvolvedores
