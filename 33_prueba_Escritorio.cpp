// 33 
// prueba de escritorio 

#include <iostream>
#include <iomanip>
using namespace std;

void pedirDatos(int vec[], int& tam);
int calcularSumaCuadrados(int vec[], int tam);

int main() {
    int vec[100], tam;

    pedirDatos(vec, tam);

    int suma = calcularSumaCuadrados(vec, tam);

    cout << setw(5) << "n" << setw(7) << "tam" << setw(7) << "i" << setw(8) << "vec[i]" << setw(15) << "Suma cuadrado parcial" << endl;
    cout << "-------------------------------------------" << endl;

    int sumaParcial = 0;
    for (int i = 0; i < tam; i++) {
        sumaParcial += vec[i] * vec[i];

        cout << setw(5) << i + 1 << setw(7) << tam << setw(7) << i << setw(8) << vec[i] << setw(15) << sumaParcial << endl;
    }

    cout << "-------------------------------------------" << endl;
    cout << setw(5) << "" << setw(7) << "" << setw(7) << "" << setw(8) << "Suma cuadrado total:" << setw(15) << sumaParcial << endl;

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

int calcularSumaCuadrados(int vec[], int tam) {
    int suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += vec[i] * vec[i];
    }

    return suma;
}
