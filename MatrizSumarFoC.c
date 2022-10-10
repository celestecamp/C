#include <stdio.h>
#include <stdlib.h>

int sumarFila(int[3][2], int, int);
int sumarColumna (int[3][2], int, int);

int main () {
    
    int matriz[3][2];

    // FILA 0
    matriz[0][0] = 5;
    matriz[0][1] = 8;

    //FILA 1
    matriz[1][0] = 7;
    matriz[1][1] = 20;

    // FILA 2
    matriz[2][0] = 30;
    matriz[2][1] = 25;

    int resultado = sumarFila(matriz, 0, 2);
    int resultadoColum = sumarColumna(matriz, 0, 3);

    printf("La suma de los valores de la fila 0 es: %d \n", resultado);
    printf("La suma de los valores de la columna 0 es: %d \n", resultadoColum);

    system("pause");
    return 0;
}

int sumarFila (int matriz[3][2], int numFila, int cantColumnas){

    int sumatoria = 0;

    for(int numColumna = 0; numColumna < cantColumnas; numColumna++){
        sumatoria = sumatoria + matriz[numFila][numColumna];
    }

    return sumatoria;

}

int sumarColumna (int matriz[3][2], int numColumna, int cantFilas){

    int sumatoria = 0;

    for(int numFila = 0; numFila < cantFilas; numFila++){
        sumatoria = sumatoria + matriz[numFila][numColumna];
    }

    return sumatoria;

}