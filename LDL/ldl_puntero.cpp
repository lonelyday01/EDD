#include <iostream>
#include <cstdlib>
//#include <conio.h>
#include "funciones.h"
#include "NODO.h"

using namespace std;


int main()
{
	NODO L;
	int x, y, opc,opc2;
	inicializar(L);
	do
	{
		system("clear");
		cout << "\t\tM E N U\n\n";
		cout << "1-Insertar al inicio\n";
		cout << "2-Insertar en en medio\n";
		cout << "3-Insertar al final\n";
		cout << "4-Eliminar al inicio\n";
		cout << "5-Elimnar en en medio\n";
		cout << "6-Eliminar al final\n";
		cout << "7-Inicializar\n";
		cout << "8-Mostrar\n";
		cout << "9-Buscar\n";
		cout << "10-Insertar antes de...\n";
		cout << "11-Insertar despues de...\n";
		cout << "0-Salir\n";
		cout << "Elije una opcion---->>";
		cin >> opc;
		switch (opc)
		{
		case 1:
			do
			{
				system("clear");
				cout << "Ingresa el dato a insertar---->>";
				cin >> x;
				if (x != -1)
				{
					insertar_inicio(x, L);
					mostrar(L);
				}
				
			} while (x != -1);
			break;
		case 2:system("clear");
			cout << "Ingresa el dato a insertar---->>";
			cin >> x;
			insertar_medio(x, L);
			mostrar(L);
			break;
		case 3:system("clear");
			cout << "Ingresa el dato a insertar---->>";
			cin >> x;
			insertar_final(x, L);
			mostrar(L);
			break;
		case 4:system("clear");
			eliminar_inicio(L);
			break;
		case 5:system("clear");
			eliminar_medio(L);
			break;
		case 6:system("clear");
			eliminar_final(L);
			break;
		case 7:system("clear");
			inicializar(L); break;
		case 8:
			do
			{
				system("clear");
				cout << "1.-Mostrar Normal" << endl;
				cout << "2.-Mostrat invertido" << endl;
				cout << "0.-Atras" << endl;
				cout << "Seleccione una opcion-->> ";
				cin >> opc2;
				switch (opc2)
				{
				case 1:system("clear");
					mostrar(L);
					break;
				case 2:system("clear");
					mostrar_invertida(L);
					break;
				case 0: 
					break;
				default: 
					cout << "seleccione una opcion valida";
				}

			} while (opc2 != 0);
			break;
		case 9:
			cout << "Ingrese el dato a buscar" << endl;
			cin >> x;
			buscar(x, L);
			break;
		case 10:
			do
			{
				system("clear");
				cout << "Seleccione despues de que numero quiere ingresar: ";
				cin >> x;
				if (buscar(x, L) == 1)
				{
					cout << "Ingrese el numero a insertar antes del numero " << x << " :" << endl;
					cin >> y;
					insertar_antes(x, L, y);
				}
				else
					cout << "Ingrese otro numero" << endl;
				cin.ignore(1024, '\n');
				cin.get();
			} 
			while (buscar(x, L) == 0);
			break;
		case 11:
			do
			{
				system("clear");
				cout << "Seleccione despues de que numero quiere ingresar: ";
				cin >> x;
				if (buscar(x, L) == 1)
				{
					cout << "Ingrese el numero a insertar despues del numero " << x << " :" << endl;
					cin >> y;
					insertar_despues(x, L, y);
				}
				else
					cout << "Ingrese otro numero" << endl;
				cin.ignore(1024, '\n');
				cin.get();
			} while (buscar(x, L) == 0);
			break;
			
		case 0:break;
		}
		cin.ignore(1024, '\n');
		cin.get();
	} while (opc != 0);
}
