// programa 32 
// 

/*
#include <iostream>
using namespace std;

void pedirDatos(int vec[], int& tam);
int calcularSuma(int vec[], int tam);

int main() {
    int vec[100], tam;

    pedirDatos(vec, tam);

    cout << "Suma de elementos del vector: " << calcularSuma(vec, tam) << endl;

    cin.get(); // Esperar entrada del usuario antes de cerrar la ventana de la consola
    return 0;
}

void pedirDatos(int vec[], int& tam) {
    cout << "Ingrese numero de elementos: ";
    cin >> tam;
    
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese numero: ";
        cin >> vec[i];
    }
}

int calcularSuma(int vec[], int tam) {
    int suma = 0;
    
    for (int i = 0; i < tam; i++) {
        suma += vec[i];
    }
    
    return suma;
}
*/

// Prueba de escritorio

/*
#include <iostream>
#include <iomanip>
using namespace std;

void pedirDatos(int vec[], int& tam);
int calcularSuma(int vec[], int tam);

int main() {
    int vec[100], tam;

    pedirDatos(vec, tam);

    int suma = 0;

    cout << setw(5) << "n" << setw(7) << "tam" << setw(7) << "i" << setw(8) << "vec[i]" << setw(10) << "suma" << endl;
    cout << "------------------------------------" << endl;

    for (int i = 0; i < tam; i++) {
        suma += vec[i];
        
        cout << setw(5) << i + 1 << setw(7) << tam << setw(7) << i << setw(8) << vec[i] << setw(10) << suma << endl;
    }

    cout << "------------------------------------" << endl;
    cout << setw(5) << "" << setw(7) << "" << setw(7) << "" << setw(8) << "Suma:" << setw(10) << suma << endl;

    cin.get(); // Esperar entrada del usuario antes de cerrar la ventana de la consola
    return 0;
}

void pedirDatos(int vec[], int& tam) {
    cout << "Ingrese numero de elementos: ";
    cin >> tam;
    
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese numero: ";
        cin >> vec[i];
    }
}
*/

#include <iostream>
#include <iomanip>
using namespace std;

void pedirDatos(int vec[], int& tam);
int calcularSuma(int vec[], int tam);

int main() {
    int vec[100], tam;

    pedirDatos(vec, tam);

    int suma = 0;

    cout << setw(5) << "n" << setw(7) << "tam" << setw(7) << "i" << setw(8) << "vec[i]" << setw(15) << "Suma parcial" << endl;
    cout << "-------------------------------------------" << endl;

    for (int i = 0; i < tam; i++) {
        suma += vec[i];

        cout << setw(5) << i + 1 << setw(7) << tam << setw(7) << i << setw(8) << vec[i] << setw(15) << suma << endl;
    }

    cout << "-------------------------------------------" << endl;
    cout << setw(5) << "" << setw(7) << "" << setw(7) << "" << setw(8) << "Suma total:" << setw(15) << suma << endl;

    cin.get(); // Esperar entrada del usuario antes de cerrar la ventana de la consola
    return 0;
}

void pedirDatos(int vec[], int& tam) {
    cout << "Ingrese numero de elementos: ";
    cin >> tam;

    for (int i = 0; i < tam; i++) {
        cout << "Ingrese numero: ";
        cin >> vec[i];
    }
}

/*
*/

