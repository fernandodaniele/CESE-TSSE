#include <string.h>
#include "fff.h"
#include "Mockpantalla.h"

DEFINE_FAKE_VOID_FUNC0(iniciarPantalla);
DEFINE_FAKE_VOID_FUNC1(muestraPantalla, pantalla_t);

void Mockpantalla_Init(void)
{
    FFF_RESET_HISTORY();
    RESET_FAKE(iniciarPantalla)
    RESET_FAKE(muestraPantalla)
}
void Mockpantalla_Verify(void)
{
}
void Mockpantalla_Destroy(void)
{
}
