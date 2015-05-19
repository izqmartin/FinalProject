#include "ConfigJM16.h"


#ifndef _Config_h
#define _Config_h


//Definicion de tipos de datos
#define uint8_t byte
#define uint16_t word

//Definicion estados globales
#define STATUS_START 0xB0
#define STATUS_RESET 0xB1
#define STATUS_STAND-BY 0xB2

//Definiciones 
extern uint8_t GLOBAL_STATUS;

//Buffer de salida
#define BUFFEROUT_LENGTH 30
extern uint8_t BufferOut[BUFFEROUT_LENGTH];
//Buffer de entrada
#define BUFFERIN_LENGTH 30
extern uint8_t BufferIn[BUFFERIN_LENGTH];

//Punteros de lectura y escritura
extern uint8_t readPointerBufferOut;
extern uint8_t writePointerBufferOut;

#endif