// Ordenar un vector de 10 enteros de menor a mayor mediante una función.

#include <stdio.h>
#include <stdlib.h>

void ordenar (int a[]);
void imprimir (int x[]);

int main () {

    int vector[10] = {7, 5, 8, 9, 6, 4, 2, 1, 3, 0};

    ordenar(vector);
    imprimir(vector);

    system("pause");
    return 0;
}

void ordenar (int a[]){
    int contador, cont2, aux;

    for (contador = 0; contador < 10; contador++){
        for (cont2 = contador; cont2 < 10; cont2++){
            if (a[contador] > a[cont2]) {
                aux = a[contador];
                a[contador] = a[cont2];
                a[cont2] = aux;
            }
        }
    }
}

void imprimir (int x[]){
    int contador;

    for (contador = 0; contador < 10; contador++){
        printf("%i, ", x[contador]);
    }
    printf("\n");
}