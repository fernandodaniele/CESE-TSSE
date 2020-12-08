#ifndef Mockled_H
#define Mockled_H

#include "fff.h"
#include "fff_unity_helper.h"
#include "led.h"


DECLARE_FAKE_VOID_FUNC1(prenderLed, char);
DECLARE_FAKE_VOID_FUNC1(apagarLed, char);
DECLARE_FAKE_VOID_FUNC1(invertirLed, char);

void Mockled_Init(void);
void Mockled_Verify(void);
void Mockled_Destroy(void);

#endif // Mockled_H
