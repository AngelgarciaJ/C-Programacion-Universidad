// programa 02.cpp 
/*  asignar 5 elementos a un vector de datos, mostrar la suma de sus elementos */

#include <stdio.h>

int main() {
    int vector[5];
    int i, suma = 0;

    // Pedir al usuario que ingrese 5 valores
    printf("Ingrese 5 valores:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vector[i]);
    }

    // Sumar los elementos del vector
    for (i = 0; i < 5; i++) {
        suma = suma + vector[i];
    }

    // Mostrar la suma de los elementos en pantalla
    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}


/*
Prueba de escritorio

la prueba de escritorio para el siguiente vector:

[ 2, 5, 1, 8, 3 ]
Se define el vector y se inicializan las variables "i" y "suma" en cero.
Se pide al usuario que ingrese los 5 valores del vector:

Ingrese 5 valores:
2
5
1
8
3
Se recorre el vector y se suma cada elemento a la variable "suma":

i = 0, vector[i] = 2, suma = 2
i = 1, vector[i] = 5, suma = 7
i = 2, vector[i] = 1, suma = 8
i = 3, vector[i] = 8, suma = 16
i = 4, vector[i] = 3, suma = 19

Se muestra el resultado de la suma en pantalla:
La suma de los elementos es: 19

*/



