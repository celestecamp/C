#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char string1[30];

    printf("String1: ");
    fgets(string1, 30, stdin);

    int longitud = strlen(string1);
    string1[longitud-1] = '\0'; // cambias la anteúltima posición e indicas que ahi termina el string.

    int resultado = strcmp(string1, "hola"); // fgets siempre agrega un \n al final del string (además del \0).
    // "hola" no va a ser igual a "hola\n". para ello, eliminar la anteúltima posición (\n).

    if (resultado == 0) printf("Coinciden.\n");
    else printf("No coinciden.\n");

    system("pause");
    return 0;
}