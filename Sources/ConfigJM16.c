#include "ConfigJM16.h"
 


/**
@brief Inicializa los registros del microcontrolador
*/

void InicializacionComunicacion(void){ 

 // SCI1C2=0X00;

  SCI1S2=0x00;  //Configura el bit rate del SCI
  clockRegister(0x00,0x0A);
  
  SCI1C1=0x00;  
  SCI1C3=0x00;  //sin paridad, 8 bits de datos, 1 bit de stop, sin control de error
  SCI1C2=0x2C;
  (void)(SCI1S1); //borra posibles flags activados 
 
  

  return;
}