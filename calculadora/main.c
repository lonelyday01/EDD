#include <stdio.h>
#include "funciones.h"


enum operaciones
{
	SALIR=0,
	SUMA,
	RESTA,
	MULTIPLICACION,
	DIVISION,
};
void introducir_datos(float *num1, float *num2)
{
	float num;
	printf("Introduce el primer numero: ");
	scanf ("%f",&num);
	*num1=num;
	printf("Introduce el primer numero: ");
	scanf ("%f",&num);
	*num2=num;
}
void imprimir_resultado(float res)
{
	printf("El resultado es: %f", res);
}
void imprimir_menu()
{
	printf("1.-Suma \n");
	printf("2.-Resta \n");
	printf("3.-Multiplicacion \n");
	printf("4.-Division \n");
	printf("0.-Salir \n");
	printf("Selecciona una opcion--> ");	
}
int main()
{
	float numero1,numero2,resultado;
	int opc;
	printf("Programa Calculadora \n");
	do
	{
		imprimir_menu();
		scanf("%d",&opc);
		switch (opc)
		{
			case SUMA:
				introducir_datos(&numero1, &numero2);
				resultado = suma(numero1, numero2);
				imprimir_resultado(resultado); 
				break;
			case RESTA:
				introducir_datos(&numero1, &numero2);
				resultado = resta(numero1, numero2);
				imprimir_resultado(resultado);
				break;
			case MULTIPLICACION:
				introducir_datos(&numero1, &numero2);
				resultado = multi(numero1, numero2);
				imprimir_resultado(resultado);
				break;
			case DIVISION:
				introducir_datos (&numero1, &numero2);
				resultado = divi(numero1,numero2);
				imprimir_resultado(resultado);
				break;
			case SALIR:
				break;
			default : 
				printf("Opcion no valida\n");
		}		

	}
	while (opc!=0);
	return 0;
}

