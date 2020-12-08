#include <string.h>
#include "fff.h"
#include "Mocksuma.h"

DEFINE_FAKE_VALUE_FUNC2(int, acumular, int*, int);

void Mocksuma_Init(void)
{
    FFF_RESET_HISTORY();
    RESET_FAKE(acumular)
}
void Mocksuma_Verify(void)
{
}
void Mocksuma_Destroy(void)
{
}
