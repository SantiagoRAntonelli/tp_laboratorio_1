/*
 * FuncionesTP1.c
 *
 *  Created on: Apr 14, 2022
 *      Author: santy
 */

#include "FuncionesTP1.h"

/// @fn void imprimirresultados(float, float, float, float, float, float, float, float, float, float, float, float)
/// @brief imprime planilla de resultados
///
/// @param ValorDebitoL (Valor de la variable ValorDebitoL)
/// @param ValorCreditoL (Valor de la variable ValorCreditoL)
/// @param ValorBitcoinL (Valor de la variable ValorBitcoinL)
/// @param PrecioxKmL (Valor de la variable PrecioxKmL)
/// @param ValorDebitoA (Valor de la variable ValorDebitoA)
/// @param ValorCreditoA (Valor de la variable ValorCreditoA)
/// @param ValorBitcoinA (Valor de la variable ValorBitcoinA)
/// @param PrecioxKmA (Valor de la variable PrecioxKmA)
/// @param DiferenciaPrecio (Valor de la variable DiferenciaPrecio)
/// @param PrecioAereolineas (Valor de la variable PrecioAereolineas)
/// @param PrecioLatam (Valor de la variable PrecioLatam)
/// @param Km (Valor de la variable Km)
void imprimirresultados(float ValorDebitoL,float ValorCreditoL,float ValorBitcoinL,float PrecioxKmL,float ValorDebitoA,float ValorCreditoA,float ValorBitcoinA,float PrecioxKmA,float DiferenciaPrecio,float PrecioAereolineas,float PrecioLatam,float Km)
{
	printf("\n");
		printf("Resultados:\n");
	printf("\n");
		printf("Kilometros Ingresados: %.2f\n", Km);
	printf("\n");
		printf("Precio Latam: $%.2f\n",PrecioLatam);
	printf("\n");
		printf("a) Precio con tarjeta de débito: $%.2f\n",ValorDebitoL);
		printf("b) Precio con tarjeta de crédito: $%.2f\n",ValorCreditoL);
		printf("c) Precio pagando con bitcoin: %f BTC\n",ValorBitcoinL);
		printf("d) Precio unitario: $%.2f\n",PrecioxKmL);
	printf("\n");
		printf("Precio Aerolíneas Argentinas: $%.2f\n",PrecioAereolineas);
	printf("\n");
		printf("a) Precio con tarjeta de débito: $%.2f\n",ValorDebitoA);
		printf("b) Precio con tarjeta de crédito: $%.2f\n",ValorCreditoA);
		printf("c) Precio pagando con bitcoin: %f BTC\n",ValorBitcoinA);
		printf("d) Precio unitario: $%.2f\n",PrecioxKmA);
	printf("\n");
		printf("La diferencia de precio es : %.2f\n",DiferenciaPrecio);
	printf("\n");
}

/// @fn void SetTo0(float*, float*, float*, float*, float*, float*, float*, float*, float*, float*, float*, float*)
/// @brief Resetea las variables en 0
///
/// @param pValorDebitoL (Valor de la variable ValorDebitoL)
/// @param pValorCreditoL (Valor de la variable ValorCreditoL)
/// @param pValorBitcoinL (Valor de la variable ValorBitcoinL)
/// @param pPrecioxKmL (Valor de la variable PrecioxKmL)
/// @param pValorDebitoA (Valor de la variable ValorDebitoA)
/// @param pValorCreditoA (Valor de la variable ValorCreditoA)
/// @param pValorBitcoinA (Valor de la variable ValorBitcoinA)
/// @param pPrecioxKmA (Valor de la variable PrecioxKmA)
/// @param pDiferenciaPrecio (Valor de la variable DiferenciaPrecio)
/// @param pPrecioAereolineas (Valor de la variable PrecioAereolineas)
/// @param pPrecioLatam (Valor de la variable PrecioLatam)
/// @param pKm (Valor de la variable Km)
void SetTo0(float *pValorDebitoL,float *pValorCreditoL,float *pValorBitcoinL,float *pPrecioxKmL,float *pValorDebitoA,float *pValorCreditoA,float *pValorBitcoinA,float *pPrecioxKmA,float *pDiferenciaPrecio,float *pPrecioAereolineas,float *pPrecioLatam,float *pKm)
		{
		*pKm=0;
		*pPrecioAereolineas=0;
		*pPrecioLatam=0;
		*pPrecioxKmA=0;
		*pPrecioxKmL=0;
		*pValorDebitoA=0;
		*pValorCreditoA=0;
		*pValorBitcoinA=0;
		*pValorDebitoL=0;
		*pValorCreditoL=0;
		*pValorBitcoinL=0;
		*pDiferenciaPrecio=0;
		}
