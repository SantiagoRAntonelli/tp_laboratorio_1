/*
 * Validaciones.c
 *
 *  Created on: Apr 14, 2022
 *      Author: santy
 */

#include "Validaciones.h"

int getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado)
{
	int rtn = 1;
	float auxiliarFloat; //buffer
	int retornoScanf;
	//Revisar que todos los datos esten bien.
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroingresado != NULL && reintentos >= 0)
	{
		printf("\n%s", mensaje);
		retornoScanf = scanf("%f", &auxiliarFloat);
		do
		{
			if (retornoScanf !=1 || auxiliarFloat > maximo || auxiliarFloat < minimo)
			{
				printf("\n%s", mensajeError);
				retornoScanf = scanf("%f", &auxiliarFloat);
				reintentos--;
			}
			else
			{
				reintentos = 0;
				*pNumeroingresado = auxiliarFloat;
				rtn = 0;
			}
		}
		while(reintentos>0);
	}
	return rtn;
}
