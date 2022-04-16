/*
 * Calculos.c
 *
 *  Created on: Apr 13, 2022
 *      Author: santy
 */
#include "Calculos.h"

/// @fn float Reglade3(float, float, float*)
/// @brief Esta funcion realiza un regla de 3 siemple
///
/// @param porcentaje (Valor de aumento o reduccion)
/// @param valor (Valor al cual aplicar el aumento o reduccion)
/// @param presultado (resultado)
/// @return (0=Operacion exitosa)
float Reglade3(float porcentaje,float valor,float *presultado){
	*presultado=valor*(porcentaje+100)/100;
	return 0;

}
/// @fn float cambiodedivisa(float, float, float*)
/// @brief Cambio de divisa de pesos a Bitcoin
///
/// @param valordecambio (Valor de cambio)
/// @param valor (valor inicial)
/// @param presultado (resultado)
/// @return 0=Operacion exitosa
float cambiodedivisa(float valordecambio, float valor,float *presultado){
	*presultado=valor/valordecambio;
	return 0;
}
/// @fn float Division(float, float, float*)
/// @brief Realiza una division simple)
///
/// @param valor1 (Divisor)
/// @param valor2 (Dividendo)
/// @param presultado (Resultado)
/// @return 0=Operacion exitosa
float Division(float valor1,float valor2,float *presultado){
	*presultado=valor1/valor2;
	return 0;
}
/// @fn float Resta(float, float, float*)
/// @brief Resta simple entre 2 valores
///
/// @param valor1 (Valor al que le resto)
/// @param valor2 (Valor que resta)
/// @param presultado (Resultado)
/// @return 0=Operacion exitosa
float Resta(float valor1,float valor2,float *presultado){
	*presultado=valor1-valor2;
	return 0;
}
