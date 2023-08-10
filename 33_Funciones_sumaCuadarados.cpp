// program 33 

#include <stdio.h>

void pedirDatos(int vec[], int* tam);
int calcularSuma(int vec[], int tam);

int main() {
    int vec[100], tam;

    pedirDatos(vec, &tam);

    printf("Suma de los cuadrados de los elementos del vector: %d\n", calcularSuma(vec, tam));

    return 0;
}

void pedirDatos(int vec[], int* tam) {
    printf("Ingrese el numero de elementos: ");
    scanf("%d", tam);

    for (int i = 0; i < *tam; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &vec[i]);
    }
}

int calcularSuma(int vec[], int tam) {
    int suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += vec[i] * vec[i];
    }

    return suma;
}
