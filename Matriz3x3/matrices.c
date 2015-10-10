#include <stdio.h>

void llenar_datos(float matriz[][3]);

void mostrar(float matriz[][3]);

void multiplicar(float matriz1[][3], float matriz2[][3]);

float matriz[3][3], resultado[3][3];

int main()
{
	float matriz1[3][3],matriz2[3][3];
	printf("Llenar la primera matriz de 3x3\n");
	llenar_datos(matriz1);
	printf("Llenar la segunda matriz de 3x3\n");
	llenar_datos(matriz2);
	printf("Las matrices ingresadas son: \n");
	mostrar(matriz1);
	printf("\n");
	mostrar(matriz2);
	printf("\nLa multiplicacion de las matrices ingresadas es: \n");
	multiplicar(matriz1, matriz2);
	mostrar(resultado);
	return 0;
}
void llenar_datos(float matriz[][3])
{
	int f=0,c=0;
        for (f=0;f<3;f++)
                for (c=0;c<3;c++)
                        scanf("%f",&matriz[f][c]);
}
void mostrar(float matriz[][3])
{
	int f=0,c=0;
        for (f=0;f<3;f++)
        {
		printf("[");
                for (c=0;c<3;c++)
                        printf("%.2f ,",matriz[f][c]);
                printf("]\n");
        }
}

void multiplicar(float matriz1[][3], float matriz2[][3])
{
	int f=0,c=0,k=0;
	for (f=0;f<3;f++)
	{
		for (c=0;c<3;c++)
		{
			resultado[f][c]=0;
			for (k=0;k<3;k++)
				{
					resultado[f][c]=(matriz1[f][k]*matriz2[k][c])+resultado[f][c];
				}
		}
	}
}
