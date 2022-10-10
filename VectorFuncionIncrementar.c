#include <stdlib.h>
#include <stdio.h>

void incrementarVector(int [], int); // en el prototipo no se pone el nombre de los parámtros, solo el tipo.

int main() {

    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    incrementarVector(vector, 5);

    printf("El valor de la posicion 0 es: %d \n", vector[0]);

    system("pause");
    return 0;
}

void incrementarVector(int v[], int longitud){

    for (int contador = 0; contador < longitud; contador++){
        v[contador]++; // con vectores, cuando se modifican en una func. tmb se modifican en todo el código, a dif de las variables.
    }

}