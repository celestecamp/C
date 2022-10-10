// Introducir elementos a un vector con una función.

#include <stdio.h>
#include <stdlib.h>

void funcion (int a[]);
void imprimir (int x[]);

int main () {

    int vector[2];

    funcion (vector);
    imprimir (vector); //p mostrar los resultados en pantalla.


    system("pause");
    return 0;
}

void funcion (int a[]) {
    int contador;

    for (contador = 0; contador < 2; contador++){ // siempre el contador en la condición es menor que el número de elementos.
        printf("introduce un valor para el vector: ");
        scanf("%i", &a[contador]);
    }
}

void imprimir(int x[]) {
    int contador;

    for (contador = 0; contador < 2; contador++){
        printf("%i, ", x[contador]);
    }

    printf("\n");
}