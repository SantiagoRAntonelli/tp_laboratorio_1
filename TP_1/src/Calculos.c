/*
 * Calculos.c
 *
 *  Created on: Apr 13, 2022
 *      Author: santy
 */
#include "Calculos.h"

float Reglade3(float porcentaje,float valor,float *presultado){
	*presultado=valor*(porcentaje+100)/100;
	return 0;

}

float cambiodedivisa(float valordecambio, float valor,float *presultado){
	*presultado=valor/valordecambio;
	return 0;
}
float Division(float valor1,float valor2,float *presultado){
	*presultado=valor1/valor2;
	return 0;
}
float Resta(float valor1,float valor2,float *presultado){
	*presultado=valor1-valor2;
	return 0;
}
