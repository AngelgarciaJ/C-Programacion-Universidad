// Programa 51
// ingreso de n valores a vector 
// Mostrar los datos ordenados utilizando direccion de momoria
// https://www.delftstack.com/es/tutorial/algorithm/bubble-sort/#:~:text=La%20ordenamiento%20de%20burbuja%20es%20un%20algoritmo%20de,su%20intercambio%20si%20est%C3%A1n%20en%20un%20orden%20incorrecto.


#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void ordenarBurbuja(int*, int); // Declaración de la función de ordenamiento de burbuja
void mostrarVector(int*, int); // Declaración de la función para mostrar el vector

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int* vector = new int[n]; // Creación del vector dinámico de tamaño n

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector[i]; // Lectura de los elementos del vector
    }

    ordenarBurbuja(vector, n); // Llamada a la función de ordenamiento de burbuja

    cout << "\nElementos ordenados:\n";
    mostrarVector(vector, n); // Llamada a la función para mostrar el vector ordenado

    delete[] vector; // Liberación de la memoria asignada dinámicamente

    getch();
    return 0;
}

void ordenarBurbuja(int* vector, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(vector + j) > *(vector + j + 1)) {
                int temp = *(vector + j); // Intercambio de elementos utilizando punteros
                *(vector + j) = *(vector + j + 1);
                *(vector + j + 1) = temp;
            }
        }
    }
}

void mostrarVector(int* vector, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(vector + i) << " "; // Mostrar los elementos del vector utilizando punteros
    }
    cout << endl;
}



/*
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Comparación de elementos adyacentes
            if (arr[j] > arr[j + 1]) {
                // Intercambio de elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Mostrar los elementos después de cada pasada
        printf("Pasada %d: ", i + 1);
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

int main() {
    const int nElementos = 10;
    int numeros[nElementos] = {7, 2, 9, 1, 5, 4, 8, 3, 6, 10};

    printf("Arreglo original: ");
    for (int i = 0; i < nElementos; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    bubbleSort(numeros, nElementos);

    printf("\nArreglo ordenado: ");
    for (int i = 0; i < nElementos; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
*/