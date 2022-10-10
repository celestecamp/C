#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int contador;
    int vector[] = {1, 2, 3};

    for (contador = 0; contador < 3; contador++) {
        printf("%i, ", *(vector+contador)); // vec[0 --> *(vec+0)] para acceder a la posición 0.
    }

    system("pause");
    return 0;
}
