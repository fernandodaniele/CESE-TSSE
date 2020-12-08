#ifndef Mockpantalla_H
#define Mockpantalla_H

#include "fff.h"
#include "fff_unity_helper.h"
#include "pantalla.h"


DECLARE_FAKE_VOID_FUNC0(iniciarPantalla);
DECLARE_FAKE_VOID_FUNC1(muestraPantalla, pantalla_t);

void Mockpantalla_Init(void);
void Mockpantalla_Verify(void);
void Mockpantalla_Destroy(void);

#endif // Mockpantalla_H
