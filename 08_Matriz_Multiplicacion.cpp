// programa prog08
// Multiplicacion de matrices

#include <stdio.h>

#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void multiplicarMatrices(int matrizA[MAX_FILAS][MAX_COLUMNAS], int matrizB[MAX_FILAS][MAX_COLUMNAS], int filasA, int columnasA, int columnasB, int matrizResultado[MAX_FILAS][MAX_COLUMNAS]) {
    int i, j, k;
    for (i = 0; i < filasA; i++) {
        for (j = 0; j < columnasB; j++) {
            matrizResultado[i][j] = 0;
            for (k = 0; k < columnasA; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void mostrarMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[MAX_FILAS][MAX_COLUMNAS];
    int matrizB[MAX_FILAS][MAX_COLUMNAS];
    int matrizResultado[MAX_FILAS][MAX_COLUMNAS];
    int filasA, columnasA, filasB, columnasB;
    int i, j;

    printf("Ingrese el numero de filas de la matriz A: ");
    scanf("%d", &filasA);
    printf("Ingrese el numero de columnas de la matriz A: ");
    scanf("%d", &columnasA);

    printf("Ingrese los elementos de la matriz A:\n");
    for (i = 0; i < filasA; i++) {
        for (j = 0; j < columnasA; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Ingrese el numero de filas de la matriz B: ");
    scanf("%d", &filasB);
    printf("Ingrese el numero de columnas de la matriz B: ");
    scanf("%d", &columnasB);

    printf("Ingrese los elementos de la matriz B:\n");
    for (i = 0; i < filasB; i++) {
        for (j = 0; j < columnasB; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    if (columnasA != filasB) {
        printf("No se puede realizar la multiplicacion de matrices. El numero de columnas de la matriz A debe ser igual al numero de filas de la matriz B.\n");
        return 0;
    }

    multiplicarMatrices(matrizA, matrizB, filasA, columnasA, columnasB, matrizResultado);

    printf("\nMatriz A:\n");
    mostrarMatriz(matrizA, filasA, columnasA);

    printf("\nMatriz B:\n");
    mostrarMatriz(matrizB, filasB, columnasB);

    printf("\nResultado de la multiplicacion:\n");
    mostrarMatriz(matrizResultado, filasA, columnasB);

    printf("\nResultado de la multiplicacion:\n");
    mostrarMatriz(matrizResultado, filasA, columnasB);

    return 0;
}

