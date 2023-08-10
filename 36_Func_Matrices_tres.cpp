// Tares 36. Realice un programa en C para ingresar valores a una matriz de pag (p filas y a columnas). 
//Utilizar tres funciones para mostrar sus valores, calcular los negativos de cada elemento y mostrar la matriz con elementos negativos

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void mostrarMatriz(float A[50][100], int m, int n);
void calcularNegativos(float A[50][100], int m, int n);
void mostrarNegativos(float A[50][100], int m, int n);

int main() {
    int m, n;
    system("cls");
    printf("...Matriz de m x n...\n");
    printf("Ingrese m: ");
    scanf("%d", &m);
    printf("Ingrese n: ");
    scanf("%d", &n);

    float A[50][100];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    mostrarMatriz(A, m, n);
    calcularNegativos(A, m, n);
    mostrarNegativos(A, m, n);

    return 0;
}

void mostrarMatriz(float A[50][100], int m, int n) {
    printf("\nMatriz ingresada:\n");
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%.0f\t", A[i][j]);
        }
        printf("\n");
    }
}

void calcularNegativos(float A[50][100], int m, int n) {
    printf("\nMatriz con elementos negativos:\n");
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            A[i][j] = -A[i][j];
            printf("%.0f\t", A[i][j]);
        }
        printf("\n");
    }
}

void mostrarNegativos(float A[50][100], int m, int n) {
    printf("\nElementos negativos:\n");
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] < 0) {
                printf("%.0f\t", A[i][j]);
            }
        }
    }
    printf("\n");
}