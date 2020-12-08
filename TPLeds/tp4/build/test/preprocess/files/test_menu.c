#include "build/temp/_test_menu.c"
#include "build/test/mocks/mock_led.h"
#include "build/test/mocks/mock_pantalla.h"
#include "src/menu.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"








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



void test_uno (void)

{



    actualizarMEF(1);



    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((prenderLed_fake.call_count)), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

}
