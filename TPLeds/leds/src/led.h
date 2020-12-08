//Inclusiones de archivos y librerías
#include <stdint.h>
#include <stdbool.h>

//Tipos de datos y de funciones
typedef void (*LedError_t)(void);

//Prototipo de funciones
void LedsCreate(uint16_t* puerto, LedError_t handler);  //Funcion para crear una instancia de 16 leds

void LedOn(uint8_t led);    //Funcion para preder un led

void LedOff(uint8_t led);   //Funcion para apagar un led

void LedsAllOn(void);       //Funcion para prender todos los leds

void LedsAllOff(void);      //Funcion para apagar todos los leds

bool LedState(uint8_t led); //Funcion para leer el estado de un led