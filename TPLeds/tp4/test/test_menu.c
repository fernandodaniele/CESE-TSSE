/*
*
*/
#include <unity.h>
#include "menu.h"
#include "mock_pantalla.h"
#include "mock_led.h"
#include <stdbool.h>

static pantalla_t estadoPantalla;
static bool estadoLed;

void muestraPantallaAux(pantalla_t pant)
{
    estadoPantalla  = pant;
}

void prenderLedAux(char letra)
{
    if(letra == 'v')
    {
        estadoLed = 1;
    }
}

void apagarLedAux(char letra)
{
    if(letra == 'v')
    {
        estadoLed = 0;
    }
}

void setUp (void)
{
    iniciarMEF();
    estadoLed = 0;
    estadoPantalla = PANTALLA_A;   
}

void test_uno (void)
{
    //muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(1);
    //TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    TEST_ASSERT_EQUAL(1, prenderLed_fake.call_count);
}