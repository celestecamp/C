// Contar cantidad de vocales, cantidad total de letras, cantidad de consonantes.
// Reemplazar las vocales por "x".
// Convertir mayusculas a minusculas.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int cantVocales = 0, cantLetras;
    char palabra[20];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    for (int i = 0; palabra[i] != '\0'; i++){
        
        printf("\n%c", palabra[i]); // c pq imprimis solo un caracter del vector string.
        
        int letraMinuscula = tolower(palabra[i]); // convierte a minúscula. mayúscula: toupper()

        if (letraMinuscula == 'a' || letraMinuscula == 'e' || letraMinuscula == 'i' || letraMinuscula == 'o' || letraMinuscula == 'u'){
            cantVocales++;
            palabra[i] = 'x';
        }

    }

    cantLetras = strlen(palabra);

    int cantConsonantes = cantLetras - cantVocales;

    printf("\n\nLa cantidad de letras de la palabra %s es: %d", palabra, cantLetras);
    printf("\n\nLa cantidad de consonantes de la palabra %s es: %d", palabra, cantConsonantes);
    printf("\n\nLa cantidad de vocales de la palabra %s es: %d\n\n", palabra, cantVocales);

    system("pause");
    return 0;
}