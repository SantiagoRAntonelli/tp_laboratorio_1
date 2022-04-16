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
#include "Calculos.h"
#include "Validaciones.h"
#include "FuncionesTP1.h"

#define PORCENTAJE_DEBITO -10
#define PORCENTAJE_CREDITO 25
#define BITCOIN 4606954.55
#define VALOR_MAX_VIAJE 1280150.20
#define DISTACIA_MAX_VIAJE 11135
#define REINTENTOS 3
#define MIN_DISTANCIA 29
#define MIN_COSTO 8867
#define KMDEFAULT 7090
#define VALORDEFAULTA 162965
#define VALORDEFAULTL 159339


int main(void) {

	setbuf(stdout,NULL);
	int opcion;
	float Km=0;
	int KmVerificado;
	float PrecioAereolineas=0;
	int PrecioA;
	float PrecioLatam=0;
	int PrecioL;
	float PrecioxKmA=0;
	float PrecioxKmL=0;
	float ValorDebitoA=0;
	float ValorCreditoA=0;
	float ValorBitcoinA=0;
	float ValorDebitoL=0;
	float ValorCreditoL=0;
	float ValorBitcoinL=0;
	float DiferenciaPrecio=0;

	do{
		getInt("1. Ingresar Kilómetros\n2. Ingresar Precio de Vuelos\n3. Calcular todos los costos\n4. Informar Resultados\n5. Carga forzada de datos\n6. Salir\n",REINTENTOS,1,6,"\nValor fuera de rango\n",&opcion);
		switch(opcion){
		case 1:
			KmVerificado= getFloat("\n Ingrese la cantidad de kilometros",REINTENTOS,MIN_DISTANCIA,DISTACIA_MAX_VIAJE,"\nValor fuera de rango\n",&Km);
				if(KmVerificado==1){
					puts("Error en la carga de datos");
				}
			break;
		case 2:

			PrecioA= getFloat("\nIngrese el valor del vuelo por Aereolineas",REINTENTOS,MIN_COSTO,VALOR_MAX_VIAJE,"\nValor fuera de rango\n",&PrecioAereolineas);
				if(PrecioA==1){
						puts("Error en la carga de datos");
					}
			PrecioL= getFloat("\nIngrese el valor del vuelo por Latam",REINTENTOS,MIN_COSTO,VALOR_MAX_VIAJE,"\nValor fuera de rango\n",&PrecioLatam);
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

				puts("Calculos realizados");

				//imprimirresultados(ValorDebitoL,ValorCreditoL,ValorBitcoinL,PrecioxKmL,ValorDebitoA,ValorCreditoA,ValorBitcoinA,PrecioxKmA,DiferenciaPrecio,PrecioAereolineas,PrecioLatam,Km);

				SetTo0(&ValorDebitoL, &ValorCreditoL, &ValorBitcoinL, &PrecioxKmL, &ValorDebitoA, &ValorCreditoA, &ValorBitcoinA, &PrecioxKmA, &DiferenciaPrecio, &PrecioAereolineas, &PrecioLatam, &Km);

			break;
		case 4:
			if(Km != 0 && PrecioAereolineas != 0 && PrecioLatam != 0 && DiferenciaPrecio != 0){
				imprimirresultados(ValorDebitoL,ValorCreditoL,ValorBitcoinL,PrecioxKmL,ValorDebitoA,ValorCreditoA,ValorBitcoinA,PrecioxKmA,DiferenciaPrecio,PrecioAereolineas,PrecioLatam,Km);
			}else{
				puts("\n\nERROR\n\nPrimero debe ingresar datos en las opciones 1 y 2 y ejecutar la opcion 3, o realize un carga forzada de datos\n\n");
			}
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

			imprimirresultados(ValorDebitoL,ValorCreditoL,ValorBitcoinL,PrecioxKmL,ValorDebitoA,ValorCreditoA,ValorBitcoinA,PrecioxKmA,DiferenciaPrecio,PrecioAereolineas,PrecioLatam,Km);

			SetTo0(&ValorDebitoL, &ValorCreditoL, &ValorBitcoinL, &PrecioxKmL, &ValorDebitoA, &ValorCreditoA, &ValorBitcoinA, &PrecioxKmA, &DiferenciaPrecio, &PrecioAereolineas, &PrecioLatam, &Km);


			break;
		}
	}while(opcion!=6);

	return EXIT_SUCCESS;
}








