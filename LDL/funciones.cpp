#include "funciones.h"
#include <iostream>
//#include <conio.h>

using namespace std;

int vacia(NODO &L)
{
	if (L == NULL)
		return 1;
	return 0;
}
void inicializar(NODO &L)
{
	L = NULL;
	cout << "lista inicializada";
}
int recorrido(NODO L)
{
	if (vacia(L))
		return 0;
	NODO N = L;
	int c = 1;
	while (N->sig != NULL)
	{
		N = N->sig;
		c++;
	}
	return c;
}
void mostrar(NODO &L)
{
	NODO N = L;
	if (vacia(L))
		cout << "Lista vacia!";
	else
	{
		while (N != NULL)
		{
			cout << N->dato << "->";
			N = N->sig;
			if (N == NULL)
				cout << "NULL";
		}
		cout << "\n";
		cout << "\n Numero de nodos: " << recorrido(L)<<endl;
		cin.ignore(1024, '\n');
		cin.get();
	}

}
void insertar_inicio(int x, NODO &L)
{
	NODO N;
	N = L;
	if (vacia(L))
	{
		L = new nodo;
		L->dato = x;
		L->sig = NULL;
		L->ant = NULL;
	}
	else
	{
		N = new nodo;
		N->dato = x;
		N->sig = L;
		N->ant = NULL;
		L->ant = N;
		L = N;
	}
	cout << "\n\n";

}
void eliminar_inicio(NODO &L)
{
	NODO N;
	N = L;
	if (vacia(L))
		cout << "Lista vacia!";
	else
	{
		L = L->sig;
		delete N;
		cout << "Dato eliminado\n\n";
		mostrar(L);
	}
}
void insertar_medio(int x, NODO &L)
{
	NODO AUX = L, AUX2 = L, N = L;
	int c, i;
	if (vacia(L))
	{
		L = new nodo;
		L->dato = x;
		L->sig = NULL;
		L->ant = NULL;
	}
	else
	{
		c = recorrido(L);
		for (i = 1; i<(c / 2); i++)
			AUX = AUX->sig;
		AUX2 = AUX->sig;
		N = new nodo;
		N->dato = x;
		if (c>1)
			AUX2->ant = N;
		N->sig = AUX2;
		N->ant = AUX;
		AUX->sig = N;
	}
	cout << "\n\n";
}

void eliminar_medio(NODO &L)
{
	NODO AUX = L, AUX2 = L;
	int c, i;
	if (vacia(L))
		cout << "lista vacia!";
	else
	{
		c = recorrido(L);
		if (c == 1)
		{
			delete L;
			L = NULL;
			cout << "Dato eliminado\n\n";
			mostrar(L);
		}
		else
		{
			for (i = 1; i<(c / 2); i++)
				AUX = AUX->sig;
			AUX2 = AUX->sig;
			AUX->sig = AUX2->sig;
			delete AUX2;
			cout << "Dato eliminado\n\n";
			mostrar(L);

		}
	}
}

void insertar_final(int x, NODO &L)
{
	NODO AUX = L, N = L;
	if (vacia(L))
	{
		L = new nodo;
		L->dato = x;
		L->ant = NULL;
		L->sig = NULL;
	}
	else
	{
		while (AUX->sig != NULL)
			AUX = AUX->sig;
		N = new nodo;
		N->dato = x;
		AUX->sig = N;
		N->sig = NULL;
		N->ant = AUX;
	}
	cout << "\n\n";
}

void eliminar_final(NODO &L)
{
	NODO AUX = L, AUX2 = L;
	int i, c;
	if (vacia(L))
		cout << "lista vacia!";
	else
	{
		i = recorrido(L);
		if (i == 1)
		{
			delete L;
			L = NULL;
			cout << "Dato eliminado\n\n";
			mostrar(L);
		}
		else
		{
			for (c = 1; c<(i - 1); c++)
				AUX = AUX->sig;
			AUX2 = AUX->sig;
			AUX->sig = NULL;
			delete AUX2;
			cout << "Dato eliminado\n\n";
			mostrar(L);
		}
	}
}

int buscar(int x, NODO &L)
{
	NODO N = L;
	int c,i;
	i = recorrido(L);
	if (vacia(L))
	{
		cout << "lista vacia!";
	}

	else
	{
		for (c = 1; c <= i; c++)
		{
			if (N->dato == x)
			{
				cout << "El dato se encuentra en la lista" << endl;
				mostrar(L);
				return 1;
				break;
			}
			if (N->dato != x && c == i)
			{
				cout << "El dato no se encuentra en la lista" << endl;
				return 0;
			}
			N = N->sig;
		}	
	}
	return 0;
}

void insertar_despues(int x, NODO &L, int y)
{
	NODO N = L, AUX = L,AUX2=L;
	if (vacia(L))
		cout << "lista vacia!";
	else
	{
		while (AUX->sig->dato != x)
			AUX = AUX->sig;
		AUX = AUX->sig;
		AUX2 = AUX->sig;
		N = new nodo;
		N->dato = y;
		AUX->sig = N;
		N->sig = AUX2;
		AUX2->ant = N;
		N->ant = AUX;
		mostrar(L);

	}
}

void insertar_antes(int x, NODO &L, int y)
{
	NODO N = L, AUX = L, AUX2 = L;
	if (vacia(L))
		cout << "lista vacia!";
	else
	{
		while (AUX->sig->dato != x)
			AUX = AUX->sig;
		AUX2 = AUX->sig;
		N = new nodo;
		N->dato = y;
		AUX->sig = N;
		N->sig = AUX2;
		AUX2->ant = N;
		N->ant = AUX;
		mostrar(L);
	}
}

void mostrar_invertida(NODO &L)
{
	NODO N = L;
	int i,c;
	if (vacia(L))
		cout << "Lista vacia!";
	else
	{
		i = recorrido(L);
		for (c = 1; c < i; c++)
			N = N->sig;
		while (N != NULL)
		{
			cout << N->dato << "->";
			N = N->ant;
			if (N == NULL)
				cout << "NULL";
		}
		cout << "\n";
		cout << "\n Numero de nodos: " << recorrido(L) << endl;
		cin.ignore(1024, '\n');
		cin.get();
	}
}
