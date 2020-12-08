/*
 * menu.h
 *
 *  Created on: 20 ago. 2020
 *      Author: fernando
 */

#ifndef MISPROGRAMAS_PDM_TP_FINAL_INC_MENU_H_
#define MISPROGRAMAS_PDM_TP_FINAL_INC_MENU_H_

// Funciones de la MEF
void errorMEF( void );
void iniciarMEF( void );
void actualizarMEF(int opcion );

// Nombres de los estados de la MEF
typedef enum{
   PANTALLA_A,
   PANTALLA_B,
   PANTALLA_B1,
   PANTALLA_B2,
   PANTALLA_B3,
   PANTALLA_C,
   PANTALLA_D,
   PANTALLA_D1,
   PANTALLA_D2,
   PANTALLA_D3,
   PANTALLA_E,
} pantalla_t;

#endif /* MISPROGRAMAS_PDM_TP_FINAL_INC_MENU_H_ */
