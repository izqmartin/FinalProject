#include "Config.h"
#ifndef _Comunicacion_h
#define _Comunicacion_h

//Definicion estados MEF
#define uint8_t STATUS_MEF;
#define MEF_WAIT 0x01
#define MEF_START 0x02
#define MEF_FUNCTION 0x03
#define MEF_N_BYTES 0x04
#define MEF_DATA 0x05           
#define MEF_TIME_OUT 0x06
#define MEF_ERROR 0x07

//Definiciones Trama de datos
#define FRAME_START 0xAA

//Definicion variables
static uint8_t nBytes;







#endif