// Teniendo un vector de tamaño N (N es par) hacer un algoritmo que permita
// intercambiar todos los elementos de la primera mitad, con los elementos de
// la segunda mitad.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Ingrese la longitud del vector: ");
    scanf("%i", &n);
    // para comprobar que sea par como dice la consigna:
    while (n % 2 != 0) {
        
        printf("Incorrecto. Vuelva a ingresar la longitud del vector: ");
        scanf("%i", &n);
        
    }

    int vector[n], contador, j, aux;

    for (contador = 0; contador < n; contador++) {
        
        printf("Ingrese el valor numero %i:", contador + 1);
        scanf("%i", &vector[contador]);

    }

    for (contador = 0; contador < (n / 2); contador++) { // /2 para que solo cuente la primera mitad
        
        j = n - (contador + 1);
        aux = vector[contador];
        vector[contador] = vector[j];
        vector[j] = aux;

    } 

    printf("El vector queda: ");

    for(contador = 0; contador < n; contador++){
        
        printf("%i - ", vector[contador]);

    }

    system("pause");
    return 0;
}