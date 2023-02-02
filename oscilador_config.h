/* UNIVERSIDAD DEL VALLE DE GUATEMALA
 * DEPARTAMENTO DE INGENIERIA ELCTRONICA & MECATRONICA
 * CURSO: ELECTRONICA DIGITAL 2
 * LABORATORIO No.1
 * 
 * File:   oscilador_config.h
 * Author: BRAYAN GABRIEL GIRON GARCIA
 *
 * Created on January 23, 2023
 */


#ifndef OSCILADOR_CONFIG_H
#define	OSCILADOR_CONFIG_H


//------------------------------------------------------------------------------------------------------------------------------------------------
// LIBRERIAS
//------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdint.h>
#include <xc.h>
#include "oscilador_config.h"

//******************************************************************************
// Prototipo de la funcion para inicializar Oscilador Interno
// Parametros: Opci�n de la frecuencia a utilizar ver pag 62 del manual
//******************************************************************************

//______________________________________________________________________________
// PROTOTIPOS DE FUNCIONES
//______________________________________________________________________________

void int_osc_MHz (uint8_t frec);


#endif	/* OSCILADOR_CONFIG_H */

//______________________________________________________________________________
//______________________________________________________________________________



