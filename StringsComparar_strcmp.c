// posibles resultados de strcmp(str1, str2)
// 0: cadenas iguales. positivo: cadena1 mayor a cadena2. negativo: cadena2 mayor a cadena1.
// se puede comparar cadenas con distintas longitudes. compara hasta el \0.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char string1[] = "hola";
    char string2[] = "chau";

    int resultado = strcmp(string1, string2);

    if(resultado == 0){
        printf("Strings iguales\n");
    }
    else if(resultado > 0){
        printf("String1 mayor a string2\n"); // se refiere al orden alfabético. si son iguales pero una tiene una a y otra una e, la segunda es mayor.
    }
    else{
        printf("string2 mayor a string1.\n");
    }

    system("pause");
    return 0;
}