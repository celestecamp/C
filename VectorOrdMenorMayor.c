#include <stdio.h>
#include <stdlib.h>

void ordenar(int [], int);

int main() {
 
    int vector[] = {3, 1, 4, 2, 5};

    printf("Vector antes de ser ordenado:");
    for (int contador = 0; contador < 5; contador++){
        printf("%d \n", vector[contador]);
    }

    ordenar(vector, 5);


    // printeamos cada posicion para chequear q esté bien
    printf("Vector ordenado:");
    for (int contador = 0; contador < 5; contador++){
        printf("%d \n", vector[contador]);
    }

    system("pause");
    return 0;
}

void ordenar (int vector[], int tamVector){
    int ordenado;

    do {

        ordenado = 1;

        for (int contador = 0; contador < tamVector - 1; contador++) // no incluye el 4 pq estaria comparando una posicion 4 con una 5 q no existe.
        {
            if (vector[contador] > vector[contador + 1]){
                int aux = vector[contador];
                vector[contador] = vector[contador + 1];
                vector[contador + 1] = aux;
                ordenado = 0;
            }
        }
    
    } while (ordenado == 0);
}