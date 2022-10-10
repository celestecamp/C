// Intercambiar los valores de 2 variables con una función.

#include <stdio.h>
#include <stdlib.h>

void cambio (int *a, int *b, int c);

int main(){

    int x, y, z;

        x = 5;
        y = 10;

        z = 20; // z es para mostrar lo que pasa si no ponemos * y &

    cambio (&x, &y, z);

    printf("El valor actual de x es %i, el valor actual de y es %i, y el de z es %i. \n", x, y, z);

    system ("pause");
    return 0;
}

void cambio (int *a, int *b, int c) { // a = &x y por tanto *a será lo mismo que x.
   
    int aux;
        
        aux = *a;
        *a = *b;
        *b = aux;

        c = 100; // no cambia su valor porque z y c no comparten el mismo espacio de memoria.
}  