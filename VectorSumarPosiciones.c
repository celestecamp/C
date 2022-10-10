// Sumar las posiciones de un vector.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vector[3];
    int suma;

    for (int contador = 0; contador < 3; contador++) {
       
        printf("Ingrese el valor en la posicion %d:", contador + 1);
        scanf("%d", &vector[contador]);

        suma = suma + vector[contador];
    }

    printf("La suma de los valores es: %d \n", suma);

    system("pause");
    return 0;
}