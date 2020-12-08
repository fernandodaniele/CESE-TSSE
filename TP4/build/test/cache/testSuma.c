#include "build/temp/_testSuma.c"
#include "suma.h"
#include "unity.h"
void test_suma_normal(void) {

   int suma;



   suma = 5;

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((acumular(&suma, 3))), (

  ((void *)0)

  ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((8)), (UNITY_INT)((suma)), (

  ((void *)0)

  ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_INT);

}

void test_suma_limite_superior(void) {

   int suma;



   suma = 0x7FFFFFFE;

   UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((acumular(&suma, 3))), (

  ((void *)0)

  ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0x7FFFFFFF)), (UNITY_INT)((suma)), (

  ((void *)0)

  ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

}

void test_suma_limite_inferior(void) {

   int suma;



   suma = 0x80000001;

   UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((acumular(&suma, -3))), (

  ((void *)0)

  ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)(((signed int)0x80000000)), (UNITY_INT)((suma)), (

  ((void *)0)

  ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_INT);

}
