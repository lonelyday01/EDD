#ifndef _NODO_H_
#define _NODO_H_
struct nodo
{
	int dato;
	struct nodo *ant;
	struct nodo *sig;
};
typedef nodo *NODO;
#endif