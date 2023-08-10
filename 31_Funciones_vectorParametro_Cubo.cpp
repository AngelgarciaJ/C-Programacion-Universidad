// prgrama 31 
// paso de parametros de tipo vector 
// cuadrado de los elementos del vecto

#include <stdio.h>

void calcularCubo(int vector[], int n) {
    for (int i = 0; i < n; i++) {
        vector[i] = vector[i] * vector[i] * vector[i];
    }
}

void mostrarValores(int vector[], int n) {
    printf("Valores calculados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n];
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    calcularCubo(vector, n);
    mostrarValores(vector, n);

    return 0;
}
