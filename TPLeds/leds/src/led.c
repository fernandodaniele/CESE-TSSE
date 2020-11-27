//Inclusiones de archivos y librerías
#include "led.h"
//#include "errores.h"

//Definiciones y macros
#define LSB 1
#define LED_OFFSET 1

//Definición de variables privadas
static uint16_t * address;
static uint16_t state;
static LedError_t ErrorRecord;

//Definición de funciones

//Función para modicar todos los leds a la vez
static void LedsHardwareUpdate(void) {
   *address = state;
}

//Función para enmascarar un led
uint16_t LedToMasK (uint8_t led)
{
    if (led >16)
    {
        ErrorRecord();
        return 0;
    }
    return (LSB << (led-LED_OFFSET));
}

//Funcion para crear una instancia de 16 leds
void LedsCreate(uint16_t* puerto, LedError_t handler)
{
    address = puerto;
    ErrorRecord = handler;
    *address = LEDS_ALL_OFF;
}

//Funcion para preder un led
void LedOn(uint8_t led)
{
    *address |= LedToMasK(led);
}

//Funcion para apagar un led
void LedOff(uint8_t led)
{
    *address &= ~LedToMasK(led);
}

//Funcion para prender todos los leds
void LedsAllOff(void) {
   state = LEDS_ALL_OFF;
   LedsHardwareUpdate();   
};

//Funcion para apagar todos los leds
void LedsAllOn(void) {
   state = LEDS_ALL_ON;
   LedsHardwareUpdate();   
}

//Funcion para leer el state de un led
bool LedState(uint8_t led){
    if(*address == (LSB << (led-LED_OFFSET)))
    {
        return LED_ON;
    }
    else
    {
        return LED_OFF;
    }
}