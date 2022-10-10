// Son 2 o más estructuras estáticas de igual longitud donde existe una correspondencia semántica entre
// los valores situados en una misma posición en cada una de las estructuras.

// Los elementos con el mismo índice se corresponden con el del otro vector.

#include <stdio.h>
#include <stdlib.h>

int const MAX = 10;

int main(){

    int vectorLegajos[MAX];
    int vectorNotas[MAX];

    int i, elemento, elemento2;

    for (i = 0; i < 5; i++){

        printf("Ingrese el legajo %i: ", i);
        scanf("%i", &elemento);
        vectorLegajos[i] = elemento;

        printf("Ingrese la nota %i: ", i);
        scanf("%i", &elemento2);
        vectorNotas[i] = elemento2;

    }

    for (int i = 0; i < 5; i++){
        
        printf("Legajo %i -> \t", i);
        printf("%i ", vectorLegajos[i]);
        printf("Nota %i -> \t", i);
        printf("%i ", vectorNotas[i]);
        printf("\n");
    }

    int notaMayor = -1;
    int legajoMayor;

    for (i = 0; i < 5; i++){
        if (vectorNotas[i] > notaMayor){
            notaMayor = vectorNotas[i];
            legajoMayor = vectorLegajos [i];
        }
    }

    printf("La nota mayor fue %i del legajo %i", notaMayor, legajoMayor);

    system("pause");
    return 0;
}