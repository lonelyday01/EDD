#ifndef _FUNCIONES_H_
#define _FUNCIONES_H_
#include "NODO.h"

int vacia(NODO &L);

void inicializar(NODO &L);

int recorrido(NODO L);

void mostrar(NODO &L);

void insertar_inicio(int x, NODO &L);

void eliminar_inicio(NODO &L);

void insertar_medio(int x, NODO &L);

void eliminar_medio(NODO &L);

void insertar_final(int x, NODO &L);

void eliminar_final(NODO &L);

int buscar(int x, NODO &L);

void insertar_despues(int x, NODO &L, int y);

void insertar_antes(int x, NODO &L, int y);

void mostrar_invertida(NODO &L);

void ordenar_ascendente(NODO &L);

void ordenar_descendente(NODO &L);

#endif
