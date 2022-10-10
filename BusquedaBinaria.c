// Se usa cuando el vector está ORDENADO.
// Se compara con el elemento central del vector.
// Si el elemento a buscar es mayor al central, se toma solo la mitad superior.
// Si el elemento a buscar es menor al central, se toma solo el bloque inferior.
// Se vuelve a analizar en el medio del bloque anteriormente indicado y se repite el proceso hasta que no se pueda más.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // permite trabajar con datos BOOLEANOS.

int busquedaBinaria(int[], int, int);

int main(){

    int numeros[] = {2, 4, 5, 6, 8, 10, 11, 12, 14, 18};
    int buscado, posicion, cantidad = 10;

    printf("Ingrese un numero a buscar dentro del vector: ");
    scanf("%i", &buscado);

    posicion = busquedaBinaria(numeros, buscado, cantidad);

    if (posicion < cantidad) printf("El numero que ha ingresado esta en la posicion %i.\n", posicion+1); // +1 para q se entienda. Si empieza en 0 el usuario se puede descolocar.
    else printf("El numero que ha ingresado no se encuentra dentro del arreglo.\n");

    system("pause");
    return 0;
}

int busquedaBinaria(int arreglo[], int elemento, int cantidad){

    int inferior, superior, centro, resultado; // el resultado es la posición donde está el elemento.
    bool encontrado = false;
    inferior = 0;
    superior = cantidad - 1;
    resultado = cantidad; // si el resultado al final sigue siendo 10, es pq no encontró ninguno.

    while ((inferior <= superior) && (!encontrado)){ // !: negación de encontrado. Negación de false == true.

        centro = (inferior + superior) / 2;

        if (elemento == arreglo[centro]){
            resultado = centro;
            encontrado = true;
        }
        
        else{

            if (elemento > arreglo[centro]){
                inferior = centro + 1; // el 10 pasa a ser mi nuevo límite inferior. Es donde empieza la segunda mitad.
            }
            else {
                superior = centro - 1;
            }
            
        }
    }

    return resultado;
}