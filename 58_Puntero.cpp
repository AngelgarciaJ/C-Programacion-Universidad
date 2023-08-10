// programa 58: 
// suma de dos matrices dinamicas

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void sumarMatrices(int **, int **, int, int);
void mostrarMatriz(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, nfilas, ncol;

int main() {
    pedirDatos();
    sumarMatrices(puntero_matriz1, puntero_matriz2, nfilas, ncol);
    mostrarMatriz(puntero_matriz1, nfilas, ncol);

    // Liberar memoria de matriz1
    for (int i = 0; i < nfilas; i++) {
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1;

    // Liberar memoria de matriz2
    for (int i = 0; i < nfilas; i++) {
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz2;

    getch();
    return 0;
}

void pedirDatos() {
    cout << "Ingrese el numero de filas: ";
    cin >> nfilas;
    cout << "Ingrese el número de columnas: ";
    cin >> ncol;

    // Asignar memoria para matriz1
    puntero_matriz1 = new int *[nfilas];
    for (int i = 0; i < nfilas; i++) {
        puntero_matriz1[i] = new int[ncol];
    }

    // Asignar memoria para matriz2
    puntero_matriz2 = new int *[nfilas];
    for (int i = 0; i < nfilas; i++) {
        puntero_matriz2[i] = new int[ncol];
    }

    cout << "\nIngrese los datos para la matriz1:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << "Ingrese el numero [" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz1 + i) + j);
        }
    }

    cout << "\nIngrese los datos para la matriz2:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << "Ingrese el numero [" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz2 + i) + j);
        }
    }
}

void sumarMatrices(int **matriz1, int **matriz2, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            *(*(matriz1 + i) + j) += *(*(matriz2 + i) + j);
        }
    }
}

void mostrarMatriz(int **matriz, int filas, int columnas) {
    cout << "\nSuma de las matrices:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << "\n";
    }
}
