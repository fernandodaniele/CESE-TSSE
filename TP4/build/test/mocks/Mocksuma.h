#ifndef Mocksuma_H
#define Mocksuma_H

#include "fff.h"
#include "fff_unity_helper.h"
#include "suma.h"


DECLARE_FAKE_VALUE_FUNC2(int, acumular, int*, int);

void Mocksuma_Init(void);
void Mocksuma_Verify(void);
void Mocksuma_Destroy(void);

#endif // Mocksuma_H
