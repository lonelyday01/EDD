# include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo arbol;
    int valor;
    inicializar_lista(&arbol);

    printf("Ingresa los caracteres e Introduce -1 para finalizar\n");

    while(valor!= -1){
        scanf("%d", &valor);
        if (valor != -1){
            insertar(&arbol, valor);
        }
    }
    imprimir(&arbol);
}
