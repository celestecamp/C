// para declarar una matriz: int matriz[3][3] cant. defilas / cant de columnas.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int matriz[3][3];

    // FILA 0
    matriz[0][0] = 14;
    matriz[0][1] = 8;
    matriz[0][2] = 2;

    // FILA 1
    matriz[1][0] = 6;
    matriz[1][1] = 20;
    matriz[1][2] = 15;

    // FILA 2
    matriz[2][0] = 1;
    matriz[2][1] = 32;
    matriz[2][2] = 7;

    // printf (matriz[3][3]);

    // para recorrer la matriz 2 iteraciones (uno p/fila y otro p/columna):
    for (int contFila = 0; contFila < 3; contFila++) {
        
        for (int contColum = 0; contColum < 3; contColum++)
        {
            printf("Fila:\t%d \n", contFila);
            printf("Colu:\t%d \n", contColum);
            printf("Valor:\t%d \n\n", matriz[contFila][contColum]);
            
            // si en vez de printear quiero asignar valores, reemplazo printf (el último) por scanf:
            // printf("Ingrese un valor para la posición fila %d columna %d", contFila, contColumna);
            // scanf("&d", &matriz[contFila][contColum]);
        }

    }


    system("pause");
    return 0;
}