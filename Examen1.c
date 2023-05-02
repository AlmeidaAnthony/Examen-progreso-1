//Inicio de codigo//
#include<stdio.h>
void calcular_estadisticas(int numeros[], int n, float *media, int *maximo, int *minimo) {
    int i;
    int suma = 0;

    // Inicializar los valores mínimo y máximo como el primer número de la lista
    *minimo = numeros[0];
    *maximo = numeros[0];

    // Sumar todos los números
    for (i = 0; i < n; i++) {
        suma += numeros[i];

        // Si el número actual es mayor que el valor máximo actual, actualizar el valor máximo
        if (numeros[i] > *maximo) {
            *maximo = numeros[i];
        }

        // Si el número actual es menor que el valor mínimo actual, actualizar el valor mínimo
        if (numeros[i] < *minimo) {
            *minimo = numeros[i];
        }
    }

    // Calcular la media dividiendo la suma por el número de elementos
    *media = (float)suma / n;
}
//Inicio de main
int main(int argc, char const *argv[])
{
    int i, n;
    int numeros[100];
    float media;
    int maximo, minimo;

    // Pedir al usuario el número de elementos que quiere ingresar
    printf("Ingrese el numero de elementos: ");
    scanf("%d", &n);

    // Pedir al usuario los números que quiere ingresar
    printf("Ingrese %d numeros separados por espacios: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcular la media, el valor máximo y el valor mínimo usando la función
    calcular_estadisticas(numeros, n, &media, &maximo, &minimo);

    // Mostrar los resultados al usuario
    printf("Media: %.2f\n", media);
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);

    return 0;
}
