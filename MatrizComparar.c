// Comparar 2 matrices.

#include <stdio.h>
#include <stdlib.h>

void introduce(int[][2]);
void compara(int[][2], int[][2]);

int main () {

    int m1[2][2];
    int m2[2][2];

    introduce (m1); 
    introduce (m2);   

    compara (m1, m2);

    system("pause");
    return 0;
}

void introduce (int m[][2]){
    int i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Valor[%i][%i]: ", i+1, j+1);
            scanf("%i", &m[i][j]);
        }
    }
}

void compara (int m1[][2], int m2[][2]){
    int i, j, aux = 0;

    for (i = 0; i < 2 && aux == 0; i++){
        for (j = 0; j < 2 && aux == 0; j++){
            if(m1[i][j] != m2[i][j]){
                aux = 1;
            }
        }
    }

    if (aux == 0){
        printf("Ambas matrices son iguales. \n");
    }

    else{
        printf("Las matrices NO son iguales.");
    }
}