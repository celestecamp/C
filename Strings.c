#include <stdio.h>
#include <stdlib.h>

int main() {

    char cadena[5]; // siempre poner un espacio más. al final de todo string hay un caracter \0.
    scanf("%s", cadena); // sin el & porque un vector ya tiene un espacio de memoria, un puntero. El & se usa para rbindarle una dirección de memoria a la variable.

    printf("\nLa palabra almacenada en cadena es: %s", cadena);

    // char cadena[] = "hola"; para darle valor ya de entrada.

    system("pause");
    return 0;
}