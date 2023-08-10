// programa 59
// ingreso de dos matrices (n filas y n columnas)
// mostrar la multiplicacion (funciones- direcciones de memoria)

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void multiplicarMatrices(int **, int **, int **, int, int, int);
void mostrarMatriz(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, **resultado_matriz, nfilas1, ncol1, nfilas2, ncol2;

int main() {
    pedirDatos();
    multiplicarMatrices(puntero_matriz1, puntero_matriz2, resultado_matriz, nfilas1, ncol1, ncol2);
    mostrarMatriz(resultado_matriz, nfilas1, ncol2);

    // Liberar memoria de matriz1
    for (int i = 0; i < nfilas1; i++) {
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1;

    // Liberar memoria de matriz2
    for (int i = 0; i < nfilas2; i++) {
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz2;

    // Liberar memoria de matriz resultado
    for (int i = 0; i < nfilas1; i++) {
        delete[] resultado_matriz[i];
    }
    delete[] resultado_matriz;

    getch();
    return 0;
}

void pedirDatos() {
    cout << "Ingrese el número de filas de la matriz 1: ";
    cin >> nfilas1;
    cout << "Ingrese el número de columnas de la matriz 1: ";
    cin >> ncol1;
    cout << "Ingrese el número de filas de la matriz 2: ";
    cin >> nfilas2;
    cout << "Ingrese el número de columnas de la matriz 2: ";
    cin >> ncol2;

    // Verificar si las matrices son multiplicables
    if (ncol1 != nfilas2) {
        cout << "No se pueden multiplicar las matrices. Las dimensiones no son válidas.";
        exit(0);
    }

    // Asignar memoria para matriz1
    puntero_matriz1 = new int *[nfilas1];
    for (int i = 0; i < nfilas1; i++) {
        puntero_matriz1[i] = new int[ncol1];
    }

    // Asignar memoria para matriz2
    puntero_matriz2 = new int *[nfilas2];
    for (int i = 0; i < nfilas2; i++) {
        puntero_matriz2[i] = new int[ncol2];
    }

    // Asignar memoria para matriz resultado
    resultado_matriz = new int *[nfilas1];
    for (int i = 0; i < nfilas1; i++) {
        resultado_matriz[i] = new int[ncol2];
    }

    cout << "\nIngrese los datos para la matriz1:\n";
    for (int i = 0; i < nfilas1; i++) {
        for (int j = 0; j < ncol1; j++) {
            cout << "Ingrese el numero [" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz1 + i) + j);
        }
    }

    cout << "\nIngrese los datos para la matriz2:\n";
    for (int i = 0; i < nfilas2; i++) {
        for (int j = 0; j < ncol2; j++) {
            cout << "Ingrese el numero [" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz2 + i) + j);
        }
    }
}

void multiplicarMatrices(int **matriz1, int **matriz2, int **resultado, int filas1, int columnas1, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            *(*(resultado + i) + j) = 0;
            for (int k = 0; k < columnas1; k++) {
                *(*(resultado + i) + j) += *(*(matriz1 + i) + k) * *(*(matriz2 + k) + j);
            }
        }
    }
}

void mostrarMatriz(int **matriz, int filas, int columnas) {
    cout << "\nMultiplicacin de las matrices:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << "\n";
    }
}
