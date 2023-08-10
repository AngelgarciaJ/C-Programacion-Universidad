// programa 34 
//Programa prog34.cpp"/
//Paso de parametros de tipo vector de datos "/
/* devuelve elementos con signo cambiado */

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos(int vec[], int& tam);
void cambiarSigno(int vec[], int tam);
void mostrarVector(int vec[], int tam);

int main() {
    int vec[100];
    int tam;

    pedirDatos(vec, tam);
    cambiarSigno(vec, tam);
    mostrarVector(vec, tam);

    getch();
    return 0;
}

void pedirDatos(int vec[], int& tam) {
    cout << "Ingrese numero de datos: ";
    cin >> tam;

    for (int i = 0; i < tam; ++i) {
        cout << "Ingrese numero: ";
        cin >> vec[i];
    }
}

void cambiarSigno(int vec[], int tam) {
    for (int i = 0; i < tam; ++i) {
        vec[i] = -vec[i];
    }
}

void mostrarVector(int vec[], int tam) {
    cout << "\nMostrando elementos del vector:\n";
    for (int i = 0; i < tam; ++i) {
        cout << vec[i] << " ";
    }
}


