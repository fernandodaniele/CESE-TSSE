#include <string.h>
#include "fff.h"
#include "Mockled.h"

DEFINE_FAKE_VOID_FUNC1(prenderLed, char);
DEFINE_FAKE_VOID_FUNC1(apagarLed, char);
DEFINE_FAKE_VOID_FUNC1(invertirLed, char);

void Mockled_Init(void)
{
    FFF_RESET_HISTORY();
    RESET_FAKE(prenderLed)
    RESET_FAKE(apagarLed)
    RESET_FAKE(invertirLed)
}
void Mockled_Verify(void)
{
}
void Mockled_Destroy(void)
{
}
