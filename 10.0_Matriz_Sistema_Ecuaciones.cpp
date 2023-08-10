/* programa prog10.cpp*/
// resolver el sistema de ecuaciones lineales en C 

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    int n, i, j, k;
    float A[50][100], x[50], R[50], p1, p2;

    // Pedir el tamaño de la matriz al usuario
    printf("..Matriz de n*n...");
    printf("\nIngrese <n>: ");
    scanf("%d", &n);

    // Pedir los coeficientes de las variables y los términos constantes
    printf("Ingrese los coeficientes de las variables en la matriz:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
        printf("b[%d]: ", i);
        scanf("%f", &A[i][n+1]); // la última columna corresponde a la columna de términos constantes
    }

    // Imprimir la matriz aumentada
    printf("\nMatriz aumentada:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n+1; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n");
    }

    // Aplicar el método de eliminación gaussiana
    for (i = 1; i <= n; i++) {
        if (A[i][i] == 0) {
            p1 = 0;
            for (j = i+1; j <= n; j++) {
                if (A[j][i] != 0) {
                    for (k = 1; k <= n+1; k++) {
                        p2 = A[i][k];
                        A[i][k] = A[j][k];
                        A[j][k] = p2;		
                    }
                    p1 = 1;
                    break;
                }
            }
            if (p1 == 0) {
                printf("\n No se puede resolver con este metodo.");
                getch();
                exit(0);
            }  	
        }

        p1 = A[i][i];
        for (j = 1; j <= n+1; j++) {
            A[i][j] = A[i][j] / p1;
        }
        for (k = 1; k <= n; k++) {
            if (i != k) {
                p1 = A[k][i];
                for (j = 1; j <= n+1; j++) {
                    A[k][j] = A[k][j] - A[i][j] * p1;
                }
            }
        }
    }

    // Imprimir la solución
    printf("\nsi hubo, :");
    printf("\nLa solucion es:\n");
    for (i = 1; i <= n; i++) {
        printf("x[%d] = %.3f\n", i, A[i][n+1]);
    }

    system("pause");
    return 0;
}









// Opcional

/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 3, i, j, k;
    float A[50][100], p1, p2;

    printf("Sistema de ecuaciones:\n");
    printf(" x + z = 3\n");
    printf("4x + 2y + 2z = 7\n");
    printf("2x + 3y + 3z = 9\n");

    // Llenar la matriz con los coeficientes del sistema de ecuaciones
    A[1][1] = 1; 
    A[1][2] = 0;
    A[1][3] = 1;
    A[1][4] = 3;

    A[2][1] = 4;
    A[2][2] = 2;
    A[2][3] = 2;
    A[2][4] = 7;

    A[3][1] = 2;
    A[3][2] = 3;
    A[3][3] = 3;
    A[3][4] = 9;

    // Mostrar la matriz de entrada
    printf("\nMatriz aumentada:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n+1; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n");
    }

    // Realizar operaciones para encontrar la inversa
    for (i = 1; i <= n; i++) {
        if (A[i][i] == 0) {
            p1 = 0;
            for (j = i+1; j <= n; j++) {
                if (A[j][i] != 0) {
                    for (k = 1; k <= n+1; k++) {
                        p2 = A[i][k];
                        A[i][k] = A[j][k];
                        A[j][k] = p2;
                    }
                    p1 = 1;
                    break;
                }
            }
            if (p1 == 0) {
                printf("\n No existe inversa..");
                getchar();
                exit(0);
            }
        }

        p1 = A[i][i];
        for (j = 1; j <= n+1; j++) {
            A[i][j] = A[i][j] / p1;
        }
        for (k = 1; k <= n; k++) {
            if (i != k) {
                p1 = A[k][i];
                for (j = 1; j <= n+1; j++) {
                    A[k][j] = A[i][j] * (-p1) + A[k][j];
                }
            }
        }
    }

    // Mostrar la matriz inversa
    printf("\nLa matriz inversa es:\n");
    for (i = 1; i <= n; i++) {
        for (j = n+2; j <= n*2+1; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}

*/
