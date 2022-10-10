#include <stdio.h>
#include <stdlib.h>

float calcuPromedio(float[], int);

int main () {
    float notas[10];

    notas[0] = 7.5;
    notas[1] = 5;
    notas[2] = 10;
    notas[3] = 9.5;
    notas[4] = 2;
    
    float promedio = calcuPromedio(notas, 5); // !!! me olvido de esto, hacer una nueva variable. sino no da

    printf("El promedio es: %f. \n", promedio);

    system("pause");
    return 0;
}

float calcuPromedio (float vector[], int longitud){
    float suma = 0, promedio;

    for (int contador = 0; contador < longitud; contador++){
        suma = suma + vector[contador];
    }

    promedio = suma / longitud;

    return promedio;
}