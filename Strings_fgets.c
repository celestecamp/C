#include <stdio.h>
#include <stdlib.h>

int main() {

    char nombreApellido[30];
    char estadoCivil[30];

    printf("\n>> Ingrese el nombre y apellido: ");
    fgets(nombreApellido, 30, stdin);

    fflush(stdin); // para que, si te pasas de 30 caracteres (28), no se sobreescriba el siguiente fgets.

    printf("\n>> Ingrese el estado civil: ");
    fgets(estadoCivil, 30, stdin);

    printf("\n\nDatos ingresados: ");
    printf("\n\nNombre y apellido: %s", nombreApellido);
    printf("\nEstado civil: %s \n", estadoCivil);

    system("pause");
    return 0;
}