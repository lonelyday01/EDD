#include <iostream>

using namespace std;

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
		cout << "ingresa la dimension de la primera matriz: ";
		cin >> f1;
		cout << "ingrese la dimension de la segunda matriz: ";
		cin >> f2;
		if (f1!=f2)
			cout << "No se puede calcular, error de dimensiones, las matrices tienen que ser cuadraticas (4x4,5x5,etc)"<<endl;
		else
		{
			cout <<"Llenar la primera matriz"<<endl;
			llenar_datos(matriz1,f1);
			cout <<"Llenar la segunda matriz"<<endl;
			llenar_datos(matriz2,f2);
			cout<<endl<<"Las matrices ingresadas son: "<<endl;
			mostrar(matriz1,f1);
			cout <<endl;
			mostrar(matriz2,f2);
			cout <<endl;
			cout <<endl<< "La multiplicacion de las matrices ingresadas es: "<<endl;
			multiplicar(matriz1, matriz2,f1);
			cout<<endl;
			
		}
		cout << "¿Desea ingresar otras matrices? (S/N): ";
		cin >> s;
	}
	while(s=='s' || s== 'S');
	return 0;
}
void llenar_datos(float matriz[][99],int f1)
{
	int f=0,c=0;
        for (f=0;f<f1;f++)
                for (c=0;c<f1;c++)
                        cin >> matriz[f][c];
}
void mostrar(float matriz[][99],int f1)
{
	int f=0,c=0;
        for (f=0;f<f1;f++)
        {
		cout << "[";
                for (c=0;c<f1;c++)
                        cout<< matriz[f][c] << ",";
                cout<<"]" << endl;
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
