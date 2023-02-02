
/* UNIVERSIDAD DEL VALLE DE GUATEMALA
 * DEPARTAMENTO DE INGENIERIA ELCTRONICA & MECATRONICA
 * CURSO: ELECTRONICA DIGITAL 2
 * LABORATORIO No.1
 * 
 * File:   ADC_LIB.h
 * Author: BRAYAN GABRIEL GIRON GARCIA
 *
 * Created on January 20, 2023
 */


#ifndef ADC_LIB_H
#define	ADC_LIB_H

//-----------------------------------------------------------------------------------------------------------------------------------
// DIRECTIVAS DEL COPILADOR
//-----------------------------------------------------------------------------------------------------------------------------------

#ifndef _XTAL_FREQ 
#define _XTAL_FREQ 8000000  /* ESPECIFICAMOS LA FRECUENCIA DE RELOJ,
                               PARA PODER USAR LOS DELAY EN EL PROGRAMA.*/
#endif

//------------------------------------------------------------------------------------------------------------------------------------------------
// LIBRERIAS
//------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdint.h>
#include <xc.h>
#include "ADC_LIB.h"

//***********************************************************************************************************************************************
// Prototipo de la funcion para configurar e inicializar modulo ADC
// Parametros: Seleccion de reloj (FOSC/2, FOSC/8, FOSC/32 Frc), voltajes de ref externo o internos
// y seleccion de canales
// Esta libreria configura las interrupciones del ADC
// Revisar pagina 99 del manual del pic
//***********************************************************************************************************************************************

//______________________________________________________________________________
// PROTOTIPOS DE FUNCIONES
//______________________________________________________________________________

void adc_init (uint8_t adc_cs, uint8_t vref_plus, uint8_t vref_minus);
void adc_start (uint8_t channel);
uint16_t adc_read (void);


#endif	/* ADC_CONFIG_H */

//______________________________________________________________________________
//______________________________________________________________________________



