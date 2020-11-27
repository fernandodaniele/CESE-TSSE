/*
*   Se pueden prender y apagar múltiples leds
*   Se pueden prender todos los leds de una vez
*   Se pueden apagar todos lo leds de una vez
*   Se puede consultar el estado de un led
*   Revisar limites de los parámetros (1 y 16)
*   Revisar parámetros fuera de los límites
*/
#include <unity.h>
#include "led.h"
//#include "mock_errores.h"

uint16_t vLeds;

bool errorInfo = false;

void ErrorRecord(void)
{
    errorInfo = true;
}

void setUp (void)
{
    errorInfo = false;
    LedsCreate(&vLeds, ErrorRecord);    
}

// Después de la inicialización todos los LEDs deben quedar apagados.
void test_LedsOffAfterCreate (void)
{
    uint16_t vLeds = LEDS_ALL_ON;
    LedsCreate(&vLeds, ErrorRecord);
    TEST_ASSERT_EQUAL_HEX16 (LEDS_ALL_OFF,vLeds);
}

//Se puede prender un LED individual.
void test_TurnOnfIndividualLed(void)
{
    LedOn(1);
    TEST_ASSERT_EQUAL_HEX16 (LED_ON,vLeds);
}

//Se puede apagar un led individual
void test_TurnOffIndividualLed(void)
{
    LedOn(1);
    LedOff(1);
    TEST_ASSERT_EQUAL_HEX16 (LED_OFF,vLeds);
}

//Se pueden prender y apagar múltiples led
void test_TurnOnOffIndividualLed(void)
{
    LedOn(3);
    LedOn(4);
    LedOff(3);
    TEST_ASSERT_EQUAL_HEX16 (1<<3,vLeds);
}

//Se pueden prender todos los LEDs de una vez.
void test_TurnAllOn(void) {
   LedsAllOn();
   TEST_ASSERT_EQUAL_HEX16(LEDS_ALL_ON, vLeds);   
}

//Se pueden apagar todos los LEDs de una vez.
void test_TurnAllOff(void) {
   LedsAllOn();
   LedsAllOff();
   TEST_ASSERT_EQUAL_HEX16(LEDS_ALL_OFF, vLeds);
}

//Se puede consultar el estado de un LED apagado.
void test_LedStateOff(void) {
   TEST_ASSERT_EQUAL(LED_OFF, LedState(4));
}

//Se puede consultar el estado de un LED prendido.
void test_LedStateOn(void) {
   LedOn(3);
   TEST_ASSERT_EQUAL(LED_ON, LedState(3));
}

//Extra: Se verifica que no se pueda prender un led invalido
void test_LedInvalid(void)
{
    LedOn(17);
    TEST_ASSERT_TRUE(errorInfo);
}