
/* UNIVERSIDAD DEL VALLE DE GUATEMALA
 * DEPARTAMENTO DE INGENIERIA ELCTRONICA & MECATRONICA
 * CURSO: ELECTRONICA DIGITAL 2
 * LABORATORIO No.2
 * 
 * File:   UASART_LIB.h
 * Author: BRAYAN GABRIEL GIRON GARCIA
 *
 * Created on January 31, 2023, 4:26 PM
 */

#ifndef UASART_LIB_H
#define	UASART_LIB_H

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
#include "UASART_LIB.h"
#include <stdio.h>

//***********************************************************************************************************************************************
// Prototipo de las funcion para configurar e inicializar el envio y recepcion 
// de datos a traves del modulo UART.
// Funcion de envio de caracteres y lectura de datos. 
//***********************************************************************************************************************************************

//______________________________________________________________________________
// PROTOTIPOS DE FUNCIONES
//______________________________________________________________________________

void UART_RX_CONFIG(uint16_t BAUDRATE);
void UART_TX_CONFIG(uint16_t BAUDRATE);
void UART_WRITE_CHAR(char CHARACTER);
void UART_WRITE_STRING(char *MENSAJE);

void putch(char daT);

void UART_READ_CHAR (void);


#endif	/* UASART_LIB_H */

//______________________________________________________________________________
//______________________________________________________________________________
