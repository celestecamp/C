#include <stdio.h>
#include <stdlib.h>

float calcularMaximo(float[], int);
float calcularMinimo(float[], int);

int main ()
{

    float temperaturas[10] = {20.1, 22.8, 17.5, 30, 18};

    float maximo = calcularMaximo(temperaturas, 5);

    float minimo = calcularMinimo(temperaturas, 5);

    printf("La temperatura maxima es: %f \n", maximo);
    printf("La temperatura minima es: %f \n", minimo);

    system("pause");
    return 0;
}


float calcularMaximo(float vector[], int cantElementos)
{
    float maximoActual;

    for (int contador = 0; contador < cantElementos; contador++)
    {
        if (contador == 0)
        {
            maximoActual = vector[0];
        }

        else
        {
            if (vector[contador] > maximoActual)
            {
                maximoActual = vector[contador];
            }
        }
        
    }

    return maximoActual;
}

float calcularMinimo (float vector[], int cantElem)
{

    float minimoActual;

    for (int contador = 0; contador < cantElem; contador++)
    {
        if (contador == 0)
        {
            minimoActual = vector[contador];
        }
        else
        {
            if (vector[contador] < minimoActual)
            {
                minimoActual = vector[contador];
            }
        }
    }

    return minimoActual;
}

