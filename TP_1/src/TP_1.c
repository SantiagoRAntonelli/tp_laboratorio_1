/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Calculos.h"

#define PORCENTAJE_DEBITO -10
#define PORCENTAJE_CREDITO 25
#define BITCOIN 4606954.55

int input_getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado);
void imprirresultados(float ValorDebitoL,float ValorCreditoL,float ValorBitcoinL,float PrecioxKmL,float ValorDebitoA,float ValorCreditoA,float ValorBitcoinA,float PrecioxKmA,float DiferenciaPrecio);
int getKm(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *NumeroIngresado);
float Reglade3(float porcentaje,float valor);
float cambiodedivisa(float valordecambio, float valor);

int main(void) {

	setbuf(stdout,NULL);
	//int opcion;
	float Km=7090;
	float KmVerificado;
	float PrecioAereolineas=162965;
	float PrecioLatam=159339;
	float PrecioxKmA;
	float PrecioxKmL;
	float ValorDebitoA;
	float ValorCreditoA;
	float ValorBitcoinA;
	float ValorDebitoL;
	float ValorCreditoL;
	float ValorBitcoinL;
	float DiferenciaPrecio;

	//do{
	//	printf("1.Ingresar Kilómetros\n2. Ingresar Precio de Vuelos:\n3. Calcular todos los costos:\n4. Informar Resultados\n5. Carga forzada de datos\n6. Salir");
	//	scanf("%d",opcion);
	//	switch(opcion){
	//	case 1:
	//		break;
	//	case 2:
	//		break;
	//	case 3:
	//		break;
	//	case 4:
	//		break;
	//	case 5:
	//		break;
	//	}
	//}while(opcion!=6);

	KmVerificado=input_getFloat("\n Ingrese la cantidad de kilometros: ",3,0,11135,"\nValor fuera de rango\n",&Km);
	if(KmVerificado==-1){
		puts("Error en la carga de datos");
		return 0;
	}


	printf("Ingrese el valor del vuelo por Aereolineas\n");
		scanf("%f", &PrecioAereolineas);
	printf("Ingrese el valor del vuelo por Latam\n");
		scanf("%f", &PrecioLatam);

	//Aereolineas
	ValorDebitoA=Reglade3(PORCENTAJE_DEBITO,PrecioAereolineas);
	ValorCreditoA=Reglade3(PORCENTAJE_CREDITO,PrecioAereolineas);
	ValorBitcoinA=cambiodedivisa(BITCOIN, PrecioAereolineas);
	PrecioxKmA=PrecioAereolineas/KmVerificado;


	//Latam
	ValorDebitoL=Reglade3(PORCENTAJE_DEBITO,PrecioLatam);
	ValorCreditoL=Reglade3(PORCENTAJE_CREDITO,PrecioLatam);
	ValorBitcoinL=cambiodedivisa(BITCOIN, PrecioLatam);
	PrecioxKmL=PrecioLatam/KmVerificado;


	DiferenciaPrecio=PrecioxKmA-PrecioxKmL;

	imprirresultados(ValorDebitoL,ValorCreditoL,ValorBitcoinL,PrecioxKmL,ValorDebitoA,ValorCreditoA,ValorBitcoinA,PrecioxKmA,DiferenciaPrecio);

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

int getKm(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *NumeroIngresado){
	float valor;
	float valoraValorar;
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && NumeroIngresado != NULL && reintentos > 0){
		printf("%s", mensaje);
		valoraValorar=scanf("%f",&valor);
		do{
			if(valoraValorar != 1 || valor > maximo || valor < minimo){
							printf("%s",mensajeError);
							valoraValorar = scanf("%f",&valor);
							reintentos--;

						}
		}while (reintentos>0);
		if(reintentos==0){
			valor=-1;
		}
	}
	return valor;
}

void imprirresultados(float ValorDebitoL,float ValorCreditoL,float ValorBitcoinL,float PrecioxKmL,float ValorDebitoA,float ValorCreditoA,float ValorBitcoinA,float PrecioxKmA,float DiferenciaPrecio){
	printf("\n");
		printf("Resultados\n");
	printf("\n");
		printf("Latam:\n");
	printf("\n");
		printf("a) Precio con tarjeta de débito: $%.2f\n",ValorDebitoL);
		printf("b) Precio con tarjeta de crédito: $%.2f\n",ValorCreditoL);
		printf("c) Precio pagando con bitcoin: $%f\n",ValorBitcoinL," BTC");
		printf("d) Precio unitario: $%.2f\n",PrecioxKmL);
	printf("\n");
		printf("Aerolíneas:\n");
	printf("\n");
		printf("a) Precio con tarjeta de débito: $%.2f\n",ValorDebitoA);
		printf("b) Precio con tarjeta de crédito: $%.2f\n",ValorCreditoA);
		printf("c) Precio pagando con bitcoin: $%f\n",ValorBitcoinA," BTC");
		printf("d) Precio unitario: $%.2f\n",PrecioxKmA);
	printf("\n");
		printf("La diferencia de precio es : %.2f\n",DiferenciaPrecio);
}
int input_getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado)
{
	int rtn = 0;
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
				rtn = 1;
			}
		}
		while(reintentos>0);
	}
	return rtn;
}
