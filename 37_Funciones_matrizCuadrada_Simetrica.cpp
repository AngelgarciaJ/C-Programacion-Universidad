// 37 
// dos funciones : 
/* ingresar datos matriz n*n 
verificar si la matriz ingresada es simetrica 
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void ingresarMatrizCuadrada(float A[50][100], int n);
void verificarSimetria(float A[50][100], int n);

int main() {
    float A[50][100];
    int n;
    system("cls");
    printf("...Matriz de nxn...\n");
    printf("Ingrese <A>: ");
    scanf("%d", &n);

    ingresarMatrizCuadrada(A, n);
    verificarSimetria(A, n);

    system("pause");
    return 0;
}

void ingresarMatrizCuadrada(float A[50][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
}

void verificarSimetria(float A[50][100], int n) {
    bool simetrica = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                simetrica = false;
                break;
            }
        }
        if (!simetrica) {
            break;
        }
    }

    if (simetrica) {
        printf("La matriz es simetrica.\n");
    } else {
        printf("La matriz no es simetrica.\n");
    }
}









// usando bool : true - false
/*
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void ingresarMatrizCuadrada(float A[50][100], int n);
bool esMatrizSimetrica(float A[50][100], int n);

int main() {
    float A[50][100];
    int n;
    system("cls");
    printf("...Matriz de nxn...\n");
    printf("Ingrese <A>: ");
    scanf("%d", &n);

    ingresarMatrizCuadrada(A, n);

    

    system("pause");
    return 0;
}

void ingresarMatrizCuadrada(float A[50][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
}

bool esMatrizSimetrica(float A[50][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                return false;
            }
        }
    }
    return true;
}
*/