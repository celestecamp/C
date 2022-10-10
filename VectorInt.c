// Darle valor a un vector de 10 enteros y leerlos después.

#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int vector[10];
    int contador;

    for (contador = 0; contador < 10; contador++) {
        printf("Dale valor al vector en la posicion %i: ", contador);
        scanf ("%i", &vector[contador]);
    }

    for (contador = 0; contador < 10; contador++) { //para leerlos
        printf("%i, ", vector[contador]);
    }

    system("pause");
    return 0;
}