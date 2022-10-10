// strcat(str_destino, str_origen);
// Se debe validar que el tamaño de str_destino sea suficiente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nombre[20];
    char apellido[10];

    printf("String1: ");
    scanf("%s", nombre);

    printf("String2: ");
    scanf("%s", apellido);

    int longitudNombre = strlen(nombre);
    int longitudApellido = strlen(apellido);

    if (longitudNombre + longitudApellido < 19) {
        strcat(nombre, " "); // un espacio para q las dos palabras queden separadas.
        strcat(nombre, apellido);
        printf("\n%s", nombre);
    }
    else{
        printf("\nNo se pudo concatenar\n");
    }

    system("pause");
    return 0;
}