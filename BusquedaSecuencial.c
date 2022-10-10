#include <stdio.h> // Manipulación de entrada/salida de datos.
#include <stdlib.h> // Biblioteca estándar de propósito general (gestión de memoria, control de procesos, etc.)

int busquedaSecuencial(int[], int, int);

int main() {

    int numeros[] = {6, 11, 7, 3, 5, 8, 9, 2, 1, 3};
    int buscado, posicion;

    printf("Ingrese un numero a buscar dentro del vector: ");
    scanf("%i", &buscado);

    posicion = busquedaSecuencial(numeros, buscado, 10);

    if (posicion < 10) printf("El numero que ha ingresado esta en la posicion %i.\n", posicion+1); // +1 para q se entienda. Si empieza en 0 el usuario se puede descolocar.
    else printf("El numero que ha ingresado no se encuentra dentro del arreglo");

    system("pause");
    return 0;
}

int busquedaSecuencial(int arreglo[], int elemento, int cantidad){
    int i = 0;

    while (arreglo[i] != elemento && i < cantidad){
        i++;
    } // while pq no sabemos cuántas veces se va a repetir.

    return i;
}