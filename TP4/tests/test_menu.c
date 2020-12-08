/*
*
*/
#include <unity.h>
#include "menu.h"
#include "Mockpantalla.h"
#include "Mockled.h"
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

void test_L1 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(1);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(1);
    TEST_ASSERT_EQUAL(PANTALLA_B1, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L2 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(1);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(2);
    TEST_ASSERT_EQUAL(PANTALLA_B2, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L3 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(1);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(3);
    TEST_ASSERT_EQUAL(PANTALLA_B3, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L4 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(1);
    TEST_ASSERT_EQUAL(PANTALLA_B, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L5 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    prenderLed_fake.custom_fake = prenderLedAux;
    apagarLed_fake.custom_fake = apagarLedAux;
    actualizarMEF(2);
    TEST_ASSERT_EQUAL(PANTALLA_C, estadoPantalla);
    TEST_ASSERT_EQUAL(1, estadoLed);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
    TEST_ASSERT_EQUAL(0, estadoLed);
}

void test_L6 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(3);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    actualizarMEF(1);
    TEST_ASSERT_EQUAL(PANTALLA_D1, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L7 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(3);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    actualizarMEF(2);
    TEST_ASSERT_EQUAL(PANTALLA_D2, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L8 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    prenderLed_fake.custom_fake = prenderLedAux;
    apagarLed_fake.custom_fake = apagarLedAux;
    actualizarMEF(3);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    actualizarMEF(3);
    TEST_ASSERT_EQUAL(PANTALLA_D3, estadoPantalla);
    TEST_ASSERT_EQUAL(1, estadoLed);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    TEST_ASSERT_EQUAL(0, estadoLed);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L9 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(3);
    TEST_ASSERT_EQUAL(PANTALLA_D, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}

void test_L10 (void)
{
    muestraPantalla_fake.custom_fake = muestraPantallaAux;
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_E, estadoPantalla);
    actualizarMEF(4);
    TEST_ASSERT_EQUAL(PANTALLA_A, estadoPantalla);
}