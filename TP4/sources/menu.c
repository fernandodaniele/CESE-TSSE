/*
 * menu.c
 *
 *  Created on: 20 ago. 2020
 *      Author: fernando
 */
#include "menu.h"
#include "pantalla.h"
#include "led.h"

// Variable para el estado actual
pantalla_t pantalla;

// Función para controlar errores de la MEF (Error handler)
void errorMEF( void )
{
   pantalla = PANTALLA_A;
   muestraPantalla(pantalla);
}

// Función para iniciar la MEF
void iniciarMEF( void )
{
   pantalla = PANTALLA_A;   // Set initial state
   muestraPantalla(pantalla);
}

// Función para actualizar la MEF
void actualizarMEF( int opcion )
{
   switch( pantalla ){
      case PANTALLA_A:
    	  switch (opcion){
             case 1:
            	 pantalla = PANTALLA_B;
            	 break;
             case 2:
            	 pantalla = PANTALLA_C;
                prenderLed('v');
                 break;
             case 3:
            	 pantalla = PANTALLA_D;
                 break;
             case 4:
            	 pantalla = PANTALLA_E;
                 break;
             default:
            	 pantalla = PANTALLA_A;
            	 break;
    	  }
        muestraPantalla(pantalla);
    	  break;

      case PANTALLA_B:
         switch (opcion){
            case 1:
               pantalla = PANTALLA_B1;
               break;
            case 2:
               pantalla = PANTALLA_B2;
               break;
            case 3:
               pantalla = PANTALLA_B3;
               break;
            case 4:
               pantalla = PANTALLA_A;
               break;
            default:
               pantalla = PANTALLA_B;
               break;
    	   }
         muestraPantalla(pantalla);
    	   break;

      case PANTALLA_B1:
         if(opcion==4){
            pantalla = PANTALLA_B;
    	   }
         muestraPantalla(pantalla); 
    	   break;

      case PANTALLA_B2:
    	   if(opcion==4){
            pantalla = PANTALLA_B;
    	   }
         muestraPantalla(pantalla); 
    	   break;

      case PANTALLA_B3:
    	   if(opcion==4){
            pantalla = PANTALLA_B;
    	   }
         muestraPantalla(pantalla);
    	   break;

      case PANTALLA_C:
         
    	   if(opcion==4){
    	      pantalla = PANTALLA_A;
    		   apagarLed('v');
    	   }
         muestraPantalla(pantalla);
    	   break;

      case PANTALLA_D:
         switch (opcion){
            case 1:
               pantalla = PANTALLA_D1;
               break;
            case 2:
               pantalla = PANTALLA_D2;
               break;
            case 3:
               pantalla = PANTALLA_D3;
               prenderLed('v');
               break;
            case 4:
               pantalla = PANTALLA_A;
               break;
            default:
               pantalla = PANTALLA_D;
               break;
    	   }
    	   muestraPantalla(pantalla);
         break;

      case PANTALLA_D1:
         if(opcion==4){
            pantalla = PANTALLA_D;
    	   }
         muestraPantalla(pantalla); 
    	   break;

      case PANTALLA_D2:
    	   if(opcion==4){
            pantalla = PANTALLA_D;
    	   }
         muestraPantalla(pantalla);
    	   break;

      case PANTALLA_D3:
    	   if(opcion==4){
            pantalla = PANTALLA_D;
            apagarLed('v');
    	   }
         muestraPantalla(pantalla); 
    	   break;

      case PANTALLA_E:
    	   if(opcion==4){
            pantalla = PANTALLA_A;
    	   }
    	   muestraPantalla(pantalla);
         break;

      default:
    	 errorMEF();
    	 break;
   }
}