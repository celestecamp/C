// Introducir valores numéricos en un array mediante punteros.

#include <stdio.h>
#include <stdlib.h>

void funcion(int *vector);
void leer(int *vec);

int main () {

    int vector[3];

    funcion(vector);
    leer(vector);

    system("pause");
    return 0;
}

void funcion(int *vector) {
    int contador;

    for(contador = 0; contador < 3; contador++) {
        printf("introduce un valor para la posicion %i: ", contador+1);
        scanf("%i", (vector+contador));
    }
}

void leer(int *vector){
    int contador;

    for(contador = 0; contador < 3; contador++){
        printf("%i ", *(vector+contador));
    }
}