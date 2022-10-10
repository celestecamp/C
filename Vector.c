#include <stdio.h>
#include <stdlib.h>

// array = estructura que almacena varias variables del mismo tipo.

int main () {

    int vector[] = {3, 5, 8, 7, 9}; 
    
        printf("el valor de la posicion 0 es: %i. \n", vector[0]);

    int contador;
    
        for (contador = 0; contador < 5; contador++)
        {
            printf("%i, ", vector[contador]);
        }

    system ("pause");
    return 0;
}