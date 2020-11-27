#include "build/temp/_test_led.c"
#include "src/led.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




uint16_t vLeds;





_Bool 

    errorInfo = 

                0

                     ;



void ErrorRecord(void)

{

    errorInfo = 

               1

                   ;

}



void setUp (void)

{

    errorInfo = 

               0

                    ;

    LedsCreate(&vLeds, ErrorRecord);

}





void test_LedsOffAfterCreate (void)

{

    uint16_t vLeds = 0xFFFF;

    LedsCreate(&vLeds, ErrorRecord);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0000)), (UNITY_INT)(UNITY_INT16)((vLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_HEX16);

}





void test_TurnOnfIndividualLed(void)

{

    LedOn(1);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1)), (UNITY_INT)(UNITY_INT16)((vLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_HEX16);

}





void test_TurnOffIndividualLed(void)

{

    LedOn(1);

    LedOff(1);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((vLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_HEX16);

}





void test_TurnOnOffIndividualLed(void)

{

    LedOn(3);

    LedOn(4);

    LedOff(3);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1<<3)), (UNITY_INT)(UNITY_INT16)((vLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_HEX16);

}





void test_TurnAllOn(void) {

   LedsAllOn();

   UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xFFFF)), (UNITY_INT)(UNITY_INT16)((vLeds)), (

  ((void *)0)

  ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_HEX16);

}





void test_TurnAllOff(void) {

   LedsAllOn();

   LedsAllOff();

   UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0000)), (UNITY_INT)(UNITY_INT16)((vLeds)), (

  ((void *)0)

  ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_HEX16);

}





void test_LedStateOff(void) {

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((LedState(4))), (

  ((void *)0)

  ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

}





void test_LedStateOn(void) {

   LedOn(3);

   UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((LedState(3))), (

  ((void *)0)

  ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_INT);

}





void test_LedInvalid(void)

{

    LedOn(17);

    do {if ((errorInfo)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(88)));}} while(0);

}
