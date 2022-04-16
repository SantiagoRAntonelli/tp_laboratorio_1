/*
 * Validaciones.c
 *
 *  Created on: Apr 14, 2022
 *      Author: santy
 */

#include "Validaciones.h"
/// @fn int getFloat(char[], int, int, int, char[], float*)
/// @brief Validacion de un valor float
///
/// @param mensaje (Mensaje inicial)
/// @param reintentos (Cantidad de reintentos)
/// @param minimo (Valor minimo aceptable)
/// @param maximo (Valor maximo aceptable)
/// @param mensajeError (Mensaje de error)
/// @param pNumeroingresado (Valor ingresado a validar)
/// @return (0=Operacion exitosa)
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
/// @fn int getInt(char[], int, int, int, char[], int*)
/// @brief Validacion de un valor int
///
/// @param mensaje (Mensaje inicial)
/// @param reintentos (Cantidad de reintentos)
/// @param minimo (Valor minimo aceptable)
/// @param maximo (Valor maximo aceptable)
/// @param mensajeError (Mensaje de error)
/// @param pNumeroingresado (Valor ingresado a validar)
/// @return (0=Operacion exitosa)
int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroingresado)
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
