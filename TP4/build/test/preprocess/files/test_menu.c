#include "build/temp/_test_menu.c"
#include "Mockled.h"
#include "Mockpantalla.h"
#include "menu.h"
#include "unity.h"








static pantalla_t estadoPantalla;

static 

      _Bool 

           estadoLed;



void muestraPantallaAux(pantalla_t pant)

{

    estadoPantalla = pant;

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

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(1);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B1)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

}



void test_L2 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(1);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(2);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B2)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_INT);

}



void test_L3 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(1);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(3);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B3)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_INT);

}



void test_L4 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(1);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_B)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(86), UNITY_DISPLAY_STYLE_INT);

}



void test_L5 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    prenderLed_fake.custom_fake = prenderLedAux;

    apagarLed_fake.custom_fake = apagarLedAux;

    actualizarMEF(2);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_C)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((estadoLed)), (

   ((void *)0)

   ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((estadoLed)), (

   ((void *)0)

   ), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_INT);

}



void test_L6 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(3);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(1);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D1)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_INT);

}



void test_L7 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(3);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(2);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D2)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_INT);

}



void test_L8 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    prenderLed_fake.custom_fake = prenderLedAux;

    apagarLed_fake.custom_fake = apagarLedAux;

    actualizarMEF(3);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(134), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(3);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D3)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(136), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((estadoLed)), (

   ((void *)0)

   ), (UNITY_UINT)(137), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(139), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((estadoLed)), (

   ((void *)0)

   ), (UNITY_UINT)(140), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(142), UNITY_DISPLAY_STYLE_INT);

}



void test_L9 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(3);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_D)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(149), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(151), UNITY_DISPLAY_STYLE_INT);

}



void test_L10 (void)

{

    muestraPantalla_fake.custom_fake = muestraPantallaAux;

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_E)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_INT);

    actualizarMEF(4);

    UnityAssertEqualNumber((UNITY_INT)((PANTALLA_A)), (UNITY_INT)((estadoPantalla)), (

   ((void *)0)

   ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_INT);

}
