// Calcular las probabilidades de que salgan cada uno de los números de un dado (6 lados) con un
// vector usando punteros. Calcular con 10000 iteraciones.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteo (int *vector);
void leer(int *vector);

int main() {

    int vector[] = {0, 0, 0, 0, 0, 0}; // el vector va a almacenar 6 contadores diferentes.

    sorteo (vector);
    leer(vector);

    system("pause");
    return 0;
}

void sorteo (int *vector) {
    srand (time(NULL)); //genera un número aleatorio.
    int contador, aux;

    for (contador = 0; contador < 10000; contador++) {
        aux = rand() % 6; //rand de random. %6 para que aparezcan 6 números (del 0 al 5).

        switch (aux) {
            case 0: {
                *(vector+aux) += 1;
                break;
            }
            case 1: {
                *(vector+aux) += 1;
                break;
            }
            case 2: {
                *(vector+aux) += 1;
                break;
            }
            case 3: {
                *(vector+aux) += 1;
                break;
            }
            case 4: {
                *(vector+aux) += 1;
                break;
            }
            case 5: {
                *(vector+aux) += 1;
                break;
            }
        }
    }
}

void leer(int *vector){
    int contador;
    float x;

    for(contador = 0; contador < 6; contador++) {
        x = (*(vector+contador)*100)/10000.; //un porcentaje es una regla de 3. *(vec+contador) x 100 dividido 10000 da la probabilidad.
        printf("La probabilidad de que el numero %i salga es de: %f. \n", contador+1, x);
    }
}