#include <stdio.h>


void llenar_datos(float matriz[][99],int f1);
void mostrar(float matriz[][99],int f1);
void multiplicar(float matriz1[][99], float matriz2[][99],int f1);
int f1,f2;
float matriz1[99][99],matriz2[99][99],resultado[99][99];

int  main()
{
	char s;
	do
	{
		int f1,f2;
		float matriz1[99][99],matriz2[99][99];
		printf("ingresa la dimension de la primera matriz: ");
		scanf("%d", &f1);
		printf("ingrese la dimension de la segunda matriz: ");
		scanf("%d", &f2);
		if (f1!=f2)
			printf("No se puede calcular, error de dimensiones, las matrices tienen que ser cuadraticas (4x4,5x5,etc)\n");
		else
		{
			printf("Llenar la primera matriz\n");
			llenar_datos(matriz1,f1);
			printf("Llenar la segunda matriz\n");
			llenar_datos(matriz2,f2);
			printf("\nLas matrices ingresadas son: \n");
			mostrar(matriz1,f1);
			printf("\n");
			mostrar(matriz2,f2);
			printf("\n\nLa multiplicacion de las matrices ingresadas es: \n");
			multiplicar(matriz1, matriz2,f1);
			printf("\n");
			
		}
		printf("¿Desea ingresar otras matrices? (S/N): ");
		scanf("%s", &s);
	}
	while(s=='s' || s== 'S');
	return 0;
}
void llenar_datos(float matriz[][99],int f1)
{
	int f=0,c=0;
        for (f=0;f<f1;f++)
                for (c=0;c<f1;c++)
                        scanf("%f", &matriz[f][c]);
}
void mostrar(float matriz[][99],int f1)
{
	int f=0,c=0;
        for (f=0;f<f1;f++)
        {
		printf ("[");
                for (c=0;c<f1;c++)
                        printf("%.2f,",matriz[f][c]);
                printf("]\n");
        }
}

void multiplicar(float matriz1[][99], float matriz2[][99],int f1)
{
	int f,c,k;
	for (f=0;f<f1;f++)
	{
		for (c=0;c<f1;c++)
		{
			resultado[f][c]=0;
			for (k=0;k<f1;k++)
				{
					resultado[f][c]=(matriz1[f][k]*matriz2[k][c])+resultado[f][c];
				}
		}
	}
	mostrar(resultado,f1);
}
