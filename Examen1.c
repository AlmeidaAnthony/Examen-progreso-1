//Inicio de codigo//
#include<stdio.h>
// Esta es la función que calcula las estadísticas (media, máximo, mínimo) de una lista de números enteros
void calcular_estadisticas(int numeros[], int n, float *media, int *maximo, int *minimo) {
    // Definimos una variable para guardar la suma de todos los números en la lista
    int suma = 0;
    // Inicializamos los valores máximo y mínimo con el primer número de la lista
    *minimo = numeros[0];
    *maximo = numeros[0];
    // bucle for
    for (int i = 0; i < n; i++) {
        // Sumamos el número actual al total
        suma += numeros[i];
        // Si el número actual es menor que el mínimo, lo actualizamos
        if (numeros[i] < *minimo) {
            *minimo = numeros[i];
        }
        // Si el número actual es mayor que el máximo, lo actualizamos
        if (numeros[i] > *maximo) {
            *maximo = numeros[i];
        }
    }
    // Calculamos la media dividiendo la suma por la longitud de la lista (n)
    *media = (float) suma / n;
}

//Inicio de main
int main(int argc, char const *argv[])
{
    
    return 0;
}
