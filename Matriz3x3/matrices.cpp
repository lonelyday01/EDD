#include <iostream>

using namespace std;

void llenar_datos(int matriz[][3]);

void mostrar(int matriz[][3]);

void multiplicar(int matriz1[][3], int matriz2[][3]);

int matriz[3][3], resultado[3][3],suma[3][3];

int main()
{
	int matriz1[3][3],matriz2[3][3];
	cout <<"Llenar la primera matriz de 3x3"<<endl;
	llenar_datos(matriz1);
	cout <<"Llenar la segunda matriz de 3x3"<<endl;
	llenar_datos(matriz2);
	cout <<"Las matrices ingresadas son: " << endl;
	mostrar(matriz1);
	cout <<endl;
	mostrar(matriz2);
	cout <<endl<< "La multiplicacion de las matrices ingresadas es: "<<endl;
	multiplicar(matriz1, matriz2);
	mostrar(resultado);
	return 0;
}
void llenar_datos(int matriz[][3])
{
	int f=0,c=0;
        for (f=0;f<3;f++)
                for (c=0;c<3;c++)
                        cin >> matriz[f][c];
}
void mostrar(int matriz[][3])
{
	int f=0,c=0;
        for (f=0;f<3;f++)
        {
		cout << "[";
                for (c=0;c<3;c++)
                        cout<< matriz[f][c] << ",";
                cout<<"]" << endl;
        }
}

void multiplicar(int matriz1[][3], int matriz2[][3])
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
