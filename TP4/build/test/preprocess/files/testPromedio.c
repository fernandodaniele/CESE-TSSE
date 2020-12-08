#include "build/temp/_testPromedio.c"
#include "promedio.h"
#include "Mocksuma.h"
#include "unity.h"
int auxiliar_acumular(int * acumulado, int operando) {

   *acumulado += operando;

   return 0;

}





void test_promedio_normal(void) {

   int datos[] = {1, 2, 3};

   int resultado;



   acumular_fake.custom_fake = auxiliar_acumular;

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((promediar(datos, 3, &resultado))), (

  ((void *)0)

  ), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((resultado)), (

  ((void *)0)

  ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

}



void test_promedio_error_inferior(void) {

   int datos[] = {1, 2, 3};

   int resultado;



   acumular_fake.return_val = -1;

   UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((promediar(datos, 3, &resultado))), (

  ((void *)0)

  ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_INT);

}



void test_promedio_error_superior(void) {

   int datos[] = {1, 2, 3};

   int resultado;



   acumular_fake.return_val = -1;

   UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((promediar(datos, 3, &resultado))), (

  ((void *)0)

  ), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_INT);

}
