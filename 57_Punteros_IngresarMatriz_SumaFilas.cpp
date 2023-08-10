// programa 57.ccp
// ingresar una matriz nfilas y ncolumnas
// mostrar la suma de cada fila

#include <iostream>

using namespace std;

void pedirDatos(); // Prototipo de función para ingresar los datos de la matriz
void mostrarMatriz(int**, int, int); // Prototipo de función para mostrar la matriz
void mostrarSumaFilas(int**, int, int); // Prototipo de función para mostrar la suma de cada fila

int **puntero_matriz, nfilas, ncol; // Declaración de variables globales

int main() {
    pedirDatos(); // Llamada a la función para ingresar los datos de la matriz
    mostrarMatriz(puntero_matriz, nfilas, ncol); // Llamada a la función para mostrar la matriz
    mostrarSumaFilas(puntero_matriz, nfilas, ncol); // Llamada a la función para mostrar la suma de cada fila

    for (int i = 0; i < nfilas; i++) // Liberación de la memoria asignada para cada fila
        delete[] puntero_matriz[i];
    delete[] puntero_matriz; // Liberación de la memoria asignada para el puntero de la matriz

    return 0;
}

void pedirDatos() {
    cout << "Ingrese el numero de filas: ";
    cin >> nfilas; // Se ingresa el número de filas
    cout << "Ingrese el número de columnas: ";
    cin >> ncol; // Se ingresa el número de columnas

    puntero_matriz = new int*[nfilas]; // Se crea un arreglo de punteros para las filas de la matriz
    for (int i = 0; i < nfilas; i++) {
        puntero_matriz[i] = new int[ncol]; // Se crea un arreglo para cada fila de la matriz
    }

    cout << "\nIngrese los datos para la matriz:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << "Ingrese el numero [" << i << "][" << j << "]: ";
            cin >> puntero_matriz[i][j]; // Se ingresan los elementos de la matriz
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nfilas, int ncol) {
    cout << "\nImpresion de la matriz:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << puntero_matriz[i][j] << " "; // Se muestra cada elemento de la matriz
        }
        cout << "\n"; // Se imprime una nueva línea después de cada fila
    }
}

void mostrarSumaFilas(int **puntero_matriz, int nfilas, int ncol) {
    cout << "\nSuma de cada fila:\n";
    for (int i = 0; i < nfilas; i++) {
        int suma = 0; // Variable para almacenar la suma de cada fila
        for (int j = 0; j < ncol; j++) {
            suma += puntero_matriz[i][j]; // Se suma cada elemento de la fila
        }
        cout << "Fila " << i + 1 << ": " << suma << endl; // Se muestra la suma de la fila
    }
}
