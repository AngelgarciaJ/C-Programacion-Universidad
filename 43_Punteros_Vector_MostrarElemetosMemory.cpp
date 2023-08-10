// programa 43
// vector de datos enteros
// mostrar elemento y direccion de memoria

#include <stdio.h>

int main() {
    int numeros[100];
    int num;
    int *dir_numeros;

    // Ingresar elementos del vector
    printf("Ingrese n datos: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Ingrese numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    dir_numeros = numeros;
    for (int i = 0; i < num; i++) {
        printf("Vector[%d] = %d\n", i, *dir_numeros++);
    }

    dir_numeros = numeros;
    for (int i = 0; i < num; i++) {
        printf("Posicion de memoria de %d es %u\n", numeros[i], (void *)dir_numeros++);
    }

    return 0;
}





/*
#include <stdio.h>

int main() {
    int n;
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &n);

    int vector[n];

    // Ingreso de los valores del vector
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // Mostrar los valores y las direcciones de memoria
    printf("Valores y direcciones de memoria del vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: %d\t Direccion de memoria: %u\n", i + 1, vector[i], &vector[i]);
    }

    return 0;
}
*/
