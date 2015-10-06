#include <iostream>

using namespace std;

int main()
{
	int taman=0,cont;
	int * puntero;
	cout<<"ingresa el tamaño del arreglo"<<endl;
	cin>>taman;
	int arreglo[taman];
	puntero = arreglo;
	*puntero=1;
	for (cont=0;cont < taman; cont ++)
	{
		puntero[cont]=&puntero++;
		cout<<arreglo[cont]<<endl;
	}
	return 0;
}
