// programa 44 
// ingresar un array 10 valores, puntero 
// mostrar sus pares y direccion de memory 

#include <iostream>

using namespace std;

int main() {
    int numeros[10], *dir_numeros;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero[" << i << "]: ";
        cin >> numeros[i];
    }

    dir_numeros = numeros; // primera posicion de memoria

    for (int i = 0; i < 10; i++) {
        if (*dir_numeros % 2 == 0) {
            cout << "El numero " << *dir_numeros << " es par." << endl;
            cout << "Posicion de memoria: " << dir_numeros << endl;
        }
        dir_numeros++; // avanza a la siguiente posicion de memoria
    }

    return 0;
}
/**/




