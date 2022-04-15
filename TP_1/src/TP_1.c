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
#include "Validaciones.h"
#include "FuncionesTP1.h"

#define PORCENTAJE_DEBITO -10
#define PORCENTAJE_CREDITO 25
#define BITCOIN 4606954.55
#define VALOR_MAX_VIAJE 1280150.20
#define DISTACIA_MAX_VIAJE 11135
#define REINTENTOS 3
#define MIN 0
#define KMDEFAULT 7090
#define VALORDEFAULTA 162965
#define VALORDEFAULTL 159339


int main(void) {

	setbuf(stdout,NULL);
	int opcion;
	float Km;
	int KmVerificado;
	float PrecioAereolineas;
	int PrecioA;
	float PrecioLatam;
	int PrecioL;
	float PrecioxKmA;
	float PrecioxKmL;
	float ValorDebitoA;
	float ValorCreditoA;
	float ValorBitcoinA;
	float ValorDebitoL;
	float ValorCreditoL;
	float ValorBitcoinL;
	float DiferenciaPrecio;

	do{
		printf("1. Ingresar Kilómetros\n2. Ingresar Precio de Vuelos:\n3. Calcular todos los costos:\n4. Informar Resultados\n5. Carga forzada de datos\n6. Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			KmVerificado=input_getFloat("\n Ingrese la cantidad de kilometros: ",REINTENTOS,MIN,DISTACIA_MAX_VIAJE,"\nValor fuera de rango\n",&Km);
				if(KmVerificado==1){
					puts("Error en la carga de datos");
				}
			break;
		case 2:
			PrecioA=input_getFloat("\nIngrese el valor del vuelo por Aereolineas: ",REINTENTOS,MIN,VALOR_MAX_VIAJE,"\nValor fuera de rango\n",&PrecioAereolineas);
				if(PrecioA==1){
						puts("Error en la carga de datos");
					}
				PrecioL=input_getFloat("\nIngrese el valor del vuelo por Latam: ",REINTENTOS,MIN,VALOR_MAX_VIAJE,"\nValor fuera de rango\n",&PrecioLatam);
				if(PrecioL==1){
						puts("Error en la carga de datos");
					}
			break;
		case 3:
			//Aereolineas
				Reglade3(PORCENTAJE_DEBITO,PrecioAereolineas,&ValorDebitoA);
				Reglade3(PORCENTAJE_CREDITO,PrecioAereolineas,&ValorCreditoA);
				cambiodedivisa(BITCOIN, PrecioAereolineas,&ValorBitcoinA);
				Division(PrecioAereolineas,Km,&PrecioxKmA);


				//Latam
				Reglade3(PORCENTAJE_DEBITO,PrecioLatam,&ValorDebitoL);
				Reglade3(PORCENTAJE_CREDITO,PrecioLatam,&ValorCreditoL);
				cambiodedivisa(BITCOIN, PrecioLatam,&ValorBitcoinL);
				Division(PrecioLatam,Km,&PrecioxKmL);


				Resta(PrecioxKmA,PrecioxKmL,&DiferenciaPrecio);
			break;
		case 4:
			imprimirresultados(ValorDebitoL,ValorCreditoL,ValorBitcoinL,PrecioxKmL,ValorDebitoA,ValorCreditoA,ValorBitcoinA,PrecioxKmA,DiferenciaPrecio,PrecioAereolineas,PrecioLatam);
			break;
		case 5:
			Km=KMDEFAULT;
			PrecioAereolineas=VALORDEFAULTA;
			PrecioLatam=VALORDEFAULTL;
			//Aereolineas
				Reglade3(PORCENTAJE_DEBITO,PrecioAereolineas,&ValorDebitoA);
				Reglade3(PORCENTAJE_CREDITO,PrecioAereolineas,&ValorCreditoA);
				cambiodedivisa(BITCOIN, PrecioAereolineas,&ValorBitcoinA);
				Division(PrecioAereolineas,Km,&PrecioxKmA);


				//Latam
				Reglade3(PORCENTAJE_DEBITO,PrecioLatam,&ValorDebitoL);
				Reglade3(PORCENTAJE_CREDITO,PrecioLatam,&ValorCreditoL);
				cambiodedivisa(BITCOIN, PrecioLatam,&ValorBitcoinL);
				Division(PrecioLatam,Km,&PrecioxKmL);


				Resta(PrecioxKmA,PrecioxKmL,&DiferenciaPrecio);

				imprimirresultados(ValorDebitoL,ValorCreditoL,ValorBitcoinL,PrecioxKmL,ValorDebitoA,ValorCreditoA,ValorBitcoinA,PrecioxKmA,DiferenciaPrecio,PrecioAereolineas,PrecioLatam);
			break;
		}
	}while(opcion!=6);

	return EXIT_SUCCESS;
}








