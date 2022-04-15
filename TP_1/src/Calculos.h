/*
 * Calculos.h
 *
 *  Created on: Apr 13, 2022
 *      Author: santy
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
#include <stdio.h>
#include <stdlib.h>

int input_getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado);
void imprirresultados(float ValorDebitoL,float ValorCreditoL,float ValorBitcoinL,float PrecioxKmL,float ValorDebitoA,float ValorCreditoA,float ValorBitcoinA,float PrecioxKmA,float DiferenciaPrecio);
int getKm(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *NumeroIngresado);
float Reglade3(float porcentaje,float valor);
float cambiodedivisa(float valordecambio, float valor);


#endif /* CALCULOS_H_ */
