// Introducir una frase como cadena de caracteres (string)

#include <stdio.h>
#include <stdlib.h>

int main () {

    char vector[13]; //si queres 12 elementos tenes que poner 13, siempre poner uno más

    printf("Introduce una frase: ");
    //no usar scanf ya que solo toma una palabra y corta en el espacio.
    //gets(vector); su uso está muy desaconsejado. puedegenerar overflow.
    fgets(vector, 13, stdin); //stdin le indica que tiene q recoger los elementos introducidos x teclado.

    printf("%s\n", vector);

    system("pause");
    return 0;
}