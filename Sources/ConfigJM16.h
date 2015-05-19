#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */

#ifndef _Config_h
#define _Config_h

//Declaraciones

#define dataRegister SCI1D
#define clockRegister(x,y) (SCI1BDL=y,SCI1BDH=x);


//Funciones
void InicializacionComunicacion(void);



#endif