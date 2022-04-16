/*
 * FuncionesTP1.c
 *
 *  Created on: Apr 14, 2022
 *      Author: santy
 */

#include "FuncionesTP1.h"


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

void SetTo0(float ValorDebitoL,float ValorCreditoL,float ValorBitcoinL,float PrecioxKmL,float ValorDebitoA,float ValorCreditoA,float ValorBitcoinA,float PrecioxKmA,float DiferenciaPrecio,float PrecioAereolineas,float PrecioLatam,float Km)
		{
		Km=0;
		PrecioAereolineas=0;
		PrecioLatam=0;
		PrecioxKmA=0;
		PrecioxKmL=0;
		ValorDebitoA=0;
		ValorCreditoA=0;
		ValorBitcoinA=0;
		ValorDebitoL=0;
		ValorCreditoL=0;
		ValorBitcoinL=0;
		DiferenciaPrecio=0;
		}
