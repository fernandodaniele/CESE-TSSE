#include "build/temp/_testOperaciones.c"
#include "promedio.h"
#include "suma.h"
#include "unity.h"
void test_promedio_normal(void) {

   int datos[] = {1,2,3,4,5};

   int resultado;



   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((promediar(datos, 5, &resultado))), (

  ((void *)0)

  ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((resultado)), (

  ((void *)0)

  ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_INT);

}
