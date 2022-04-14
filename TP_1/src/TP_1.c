/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define porcentajedebito -10
#define porcentajecredito 25
#define bitcoin 4606954.55

float Reglade3(float porcentaje,float valor);
float cambiodedivisa(float valordecambio, float valor);

int main(void) {

	setbuf(stdout,NULL);

	float Km;
	float PrecioAereolineas;
	float PrecioLatam;
	float PrecioxKmA;
	float PrecioxKmL;
	float ValorDebitoA;
	float ValorCreditoA;
	float ValorBitcoinA;
	float ValorDebitoL;
	float ValorCreditoL;
	float ValorBitcoinL;
	float DiferenciaPrecio;

	printf("Ingrese la cantidad de kilometros\n");
		scanf("%f", &Km);
	printf("Ingrese el valor del vuelo por Aereolineas\n");
		scanf("%f", &PrecioAereolineas);
	printf("Ingrese el valor del vuelo por Latam\n");
		scanf("%f", &PrecioLatam);

	//Aereolineas
	ValorDebitoA=Reglade3(porcentajedebito,PrecioAereolineas);
	ValorCreditoA=Reglade3(porcentajecredito,PrecioAereolineas);
	ValorBitcoinA=cambiodedivisa(bitcoin, PrecioAereolineas);
	PrecioxKmA=PrecioAereolineas/Km;


	//Latam
	ValorDebitoL=Reglade3(porcentajedebito,PrecioLatam);
	ValorCreditoL=Reglade3(porcentajecredito,PrecioLatam);
	ValorBitcoinL=cambiodedivisa(bitcoin, PrecioLatam);
	PrecioxKmL=PrecioLatam/Km;


	DiferenciaPrecio=PrecioxKmA-PrecioxKmL;


	printf("\n");
	printf("Resultados\n");
	printf("\n");
	printf("Latam:\n");
	printf("\n");
	printf("a) Precio con tarjeta de débito: %.2f\n",ValorDebitoL);
	printf("b) Precio con tarjeta de crédito: %.2f\n",ValorCreditoL);
	printf("c) Precio pagando con bitcoin : %f\n",ValorBitcoinL);
	printf("d) Precio unitario: %.2f\n",PrecioxKmL);
	printf("\n");
	printf("Aerolíneas:\n");
	printf("\n");
	printf("a) Precio con tarjeta de débito:  %.2f\n",ValorDebitoA);
	printf("b) Precio con tarjeta de crédito: %.2f\n",ValorCreditoA);
	printf("c) Precio pagando con bitcoin : %f\n",ValorBitcoinA);
	printf("d) Precio unitario:  %.5f\n",PrecioxKmA);
	printf("\n");
	printf("La diferencia de precio es : %.2f\n",DiferenciaPrecio);

	return EXIT_SUCCESS;
}


float Reglade3(float porcentaje,float valor){
	float resultado;
	resultado=valor*(porcentaje+100)/100;
	return resultado;

}

float cambiodedivisa(float valordecambio, float valor){
	float resultado;
	resultado=valor/valordecambio;
	return resultado;
}
