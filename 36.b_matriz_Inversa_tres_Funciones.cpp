// 36.b 
// tres funciones: ingresar matriz Anxn 
// calcular la inversa A-1nxn  y mostrar la inversa 


#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void ingresarMatrizCuadrada(float A[50][100], int n);
void calcularMatrizInversa(float A[50][100], int n);
void mostrarMatrizInversa(float A[50][100], int n);

int main(){
    float A[50][100];
    int n;
    system("cls");
    printf("...Matriz de nxn...\n");
    printf("Ingrese <A>: ");
    scanf("%d",&n);

    ingresarMatrizCuadrada(A, n);
    calcularMatrizInversa(A, n);
    mostrarMatrizInversa(A, n);

    system("pause");
    return 0;
}

void ingresarMatrizCuadrada(float A[50][100], int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
            if(i == j) {
                A[i][n + j] = 1;
            } else {
                A[i][n + j] = 0;
            }
        }
    }
}

void calcularMatrizInversa(float A[50][100], int n) {
    float p1, p2;
    for(int i = 1; i <= n; i++) {
        if(A[i][i] == 0) {
            p1 = 0;
            for(int j = i + 1; j <= n; j++) {
                if(A[j][i] != 0) {
                    for(int k = 1; k <= 2 * n; k++) {
                        p2 = A[i][k];
                        A[i][k] = A[j][k];
                        A[j][k] = p2;
                    }
                    p1 = 1;
                    break;
                }
            }
            if(p1 == 0) {
                printf("\nNO EXISTE ...\n");
                getch();
                exit(0);
            }
        }

        p1 = A[i][i];
        for(int j = 1; j <= 2 * n; j++) {
            A[i][j] = A[i][j] / p1;
        }
        for(int k = 1; k <= n; k++) {
            if(i != k) {
                p1 = A[k][i];
                for(int j = 1; j <= 2 * n; j++) {
                    A[k][j] = A[i][j] * (-p1) + A[k][j];
                }
            }
        }
    }
}

void mostrarMatrizInversa(float A[50][100], int n) {
    printf("\nMatriz inversa:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = n + 1; j <= 2 * n; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n");
    }
}

/*

// prueba 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void ingresarMatrizCuadrada(float A[50][100], int n);
void calcularMatrizInversa(float A[50][100], int n);
void mostrarMatrizInversa(float A[50][100], int n);

int main(){
    float A[50][100];
    int n;
    system("cls");
    printf("...Matriz de nxn...\n");
    printf("Ingrese <A>: ");
    scanf("%d",&n);

    ingresarMatrizCuadrada(A, n);
    calcularMatrizInversa(A, n);
    mostrarMatrizInversa(A, n);

    system("pause");
    return 0;
}

void ingresarMatrizCuadrada(float A[50][100], int n) {
    printf("Ingrese los elementos de la matriz:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
            if(i == j) {
                A[i][n + j] = 1;
            } else {
                A[i][n + j] = 0;
            }
        }
    }
    printf("\nMatriz ingresada:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }
}

void calcularMatrizInversa(float A[50][100], int n) {
    float p1, p2;
    for(int i = 1; i <= n; i++) {
        if(A[i][i] == 0) {
            p1 = 0;
            for(int j = i + 1; j <= n; j++) {
                if(A[j][i] != 0) {
                    for(int k = 1; k <= 2 * n; k++) {
                        p2 = A[i][k];
                        A[i][k] = A[j][k];
                        A[j][k] = p2;
                    }
                    p1 = 1;
                    break;
                }
            }
            if(p1 == 0) {
                printf("\nNO EXISTE ...\n");
                getch();
                exit(0);
            }
        }

        p1 = A[i][i];
        for(int j = 1; j <= 2 * n; j++) {
            A[i][j] = A[i][j] / p1;
        }
        printf("\nIteracion %d:\n", i);
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= 2 * n; j++) {
                printf("%.2f\t", A[i][j]);
            }
            printf("\n");
        }
        for(int k = 1; k <= n; k++) {
            if(i != k) {
                p1 = A[k][i];
                for(int j = 1; j <= 2 * n; j++) {
                    A[k][j] = A[i][j] * (-p1) + A[k][j];
                }
            }
        }
    }
}

void mostrarMatrizInversa(float A[50][100], int n) {
    printf("\nMatriz inversa:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = n + 1; j <= 2 * n; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n");
    }
}
*/