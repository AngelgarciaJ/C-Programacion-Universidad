// programa 53.ccp
// n valores a un vector
// mostrar mediana uso de direcciones de memoria

#include <iostream>

// Función para ingresar los datos del vector
void pedirDatos(int **vector, int *nElementos);

// Función para ordenar el vector en orden ascendente
void ordenarVector(int *vector, int nElementos);

// Función para calcular la mediana del vector
float calcularMediana(int *vector, int nElementos);

using namespace std;

int main() {
    int *elemento;
    int nElementos;

    // Pedir al usuario los datos del vector
    pedirDatos(&elemento, &nElementos);

    // Ordenar el vector en orden ascendente
    ordenarVector(elemento, nElementos);

    // Calcular la mediana del vector
    float mediana = calcularMediana(elemento, nElementos);

    // Mostrar la mediana en pantalla
    cout << "La mediana del vector es: " << mediana << endl;

    // Liberar la memoria del vector
    delete[] elemento;

    return 0;
}

void pedirDatos(int **vector, int *nElementos) {
    // Solicitar al usuario el tamaño del vector
    cout << "Ingrese el tamaño del vector: ";
    cin >> *nElementos;

    // Asignar memoria dinámica para el vector
    *vector = new int[*nElementos];

    // Solicitar al usuario los elementos del vector
    for (int i = 0; i < *nElementos; i++) {
        cout << "Ingrese el numero [" << i << "]: ";
        cin >> (*vector)[i];
    }
}

void ordenarVector(int *vector, int nElementos) {
    // Algoritmo de ordenamiento de burbuja para ordenar el vector
    int aux;
    for (int i = 0; i < nElementos; i++) {
        for (int j = 0; j < nElementos - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

float calcularMediana(int *vector, int nElementos) {
    float mediana;

    // Si el número de elementos es par, se promedian los dos valores centrales
    if (nElementos % 2 == 0) {
        int mitad = nElementos / 2;
        mediana = (vector[mitad - 1] + vector[mitad]) / 2.0;
    }
    // Si el número de elementos es impar, se toma el valor central
    else {
        int mitad = nElementos / 2;
        mediana = vector[mitad];
    }

    return mediana;
}
