// Sumar diagonal principal de una matriz cuadrada (3x3).

#include <stdio.h>
#include <stdlib.h>

int sumarDiagonal (int[3][3], int);

int main () {

    int matriz[3][3];

    // FILA 0
    matriz[0][0] = 5;
    matriz[0][1] = 8;
    matriz[0][2] = 40;

    //FILA 1
    matriz[1][0] = 7;
    matriz[1][1] = 20;
    matriz[1][2] = 8;

    // FILA 2
    matriz[2][0] = 30;
    matriz[2][1] = 25;
    matriz[3][2] = 100;

    // Las posiciones diagonales de la matriz son las q tienen el mismo número tanto de columna como de fila.
    // Ej: [3][3], [0][0]

    int resultado = sumarDiagonal(matriz, 3);

    printf("La suma de los valores de la diagonal principal es %d.\n", resultado);

    system("pause");
    return 0;
}

int sumarDiagonal (int matriz[3][3], int tamMatriz){
    
    int sumatoria = 0;

    for (int i = 0; i < tamMatriz; i++){

        for (int j = 0; j < tamMatriz; j++){

            if (i == j){
                
                sumatoria = sumatoria + matriz[i][j];

            }

        }

    }

    return sumatoria;

}