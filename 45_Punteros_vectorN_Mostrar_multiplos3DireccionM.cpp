// PROGRAMA 45 
// ingresar n numeros 
// mostrar multiplos de 3 y direccion de memoria

/*
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int *numeros = new int[n];
    int  *dir_numeros = numeros;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese numero[" << i << "]: ";
        cin >> numeros[i];
    }

    cout << "Numeros multiplos de 3:" << endl;
    for (int i = 0; i < n; i++) {
        if (*dir_numeros % 3 == 0) {
            cout << "Numero: " << *dir_numeros << endl;
            cout << "Direccion de memoria: " << dir_numeros << endl;
        }
        dir_numeros++;
    }


    return 0;
}

*/



#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    float* numeros = new float[n];
    float* dir_numeros = numeros;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese número[" << i << "]: ";
        cin >> numeros[i];
    }

    cout << "Números múltiplos de 3:" << endl;
    for (int i = 0; i < n; i++) {
        if (fmod(*dir_numeros, 3) == 0) {
            cout << "Número: " << *dir_numeros << endl;
            cout << "Dirección de memoria: " << dir_numeros << endl;
        }
        dir_numeros++;
    }

    delete[] numeros;

    return 0;
}


