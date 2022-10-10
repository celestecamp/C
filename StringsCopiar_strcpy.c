// strcpy(str_destino, str_origen);
// importante: se debe validar que el tamaño de str_destino sea suficiente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string1[20];
    char string2[10];

    printf("Ingrese una palabra: ");
    scanf("%s", string1);

    int longitud = strlen(string1);
    
    if (longitud < 10){
        strcpy(string2, string1); // si string2 ya tenía algo almacenado, se sobreescribe.
        printf("\nString1: %s", string1);
        printf("\nString2: %s\n", string2);
    }
    else{
        printf("No se puede copiar.\n");
    }

    // se puede usar para asignarle al vector un string.
    // strcpy(string1, "hola");

    system("pause");
    return 0;
}