// programa 56
/* matriz dionamica: ingresar datos y mostrar

*/

#include <iostream>

using namespace std;

void pedirDatos();
void mostrarMatriz(int**, int, int);

int **puntero_matriz, nfilas, ncol;

int main() {
    pedirDatos();
    mostrarMatriz(puntero_matriz, nfilas, ncol);

    for (int i = 0; i < nfilas; i++)
        delete[] puntero_matriz[i];
    delete[] puntero_matriz;

    return 0;
}

void pedirDatos() {
    cout << "Ingrese el numero de filas: ";
    cin >> nfilas;
    cout << "Ingrese el numero de columnas: ";
    cin >> ncol;

    puntero_matriz = new int*[nfilas];
    for (int i = 0; i < nfilas; i++) {
        puntero_matriz[i] = new int[ncol];
    }

    cout << "\nIngrese los datos para la matriz:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << "Ingrese el numero [" << i << "][" << j << "]: ";
            cin >> puntero_matriz[i][j];
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nfilas, int ncol) {
    cout << "\nImpresion de la matriz:\n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            //cout << puntero_matriz[i][j] << " "; - no usar
            cout << *(*(puntero_matriz+i)+j) << " ";
		}
        cout << "\n";
    }
}
