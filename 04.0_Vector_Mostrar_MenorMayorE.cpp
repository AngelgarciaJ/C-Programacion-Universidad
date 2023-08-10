/* programa prog04*/
/* ingrese n numeros en un vector, mostrar el numero menor y numero mayor */

#include <stdio.h>

int main() {
    int n, i, mayor, menor;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    int vector[n];

    // Ingresar los números en el vector
    for (i = 0; i < n; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    // Encontrar el mayor y menor
    mayor = vector[0];
    menor = vector[0];

    for (i = 1; i < n; i++) {
        if (vector[i] > mayor) {
            mayor = vector[i];
        }

        if (vector[i] < menor) {
            menor = vector[i];
        }
    }

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);

    return 0;
}
