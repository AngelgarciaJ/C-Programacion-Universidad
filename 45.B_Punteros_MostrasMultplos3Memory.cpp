// 45.b
// --  45 -- 

/*
#include <stdio.h>

const int MAX_NUMEROS = 100; // Tamaño máximo del array

int main() {
    int n;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    if (n > MAX_NUMEROS) {
        printf("La cantidad de numeros excede el tamano mmximo permitido.\n");
        return 1; // Terminar el programa con un código de error
    }

    int numeros[MAX_NUMEROS];
    int* dir_numeros = numeros;

    for (int i = 0; i < n; i++) {
        printf("Ingrese numero[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros multiplos de 3:\n");
    for (int i = 0; i < n; i++) {
        if (*dir_numeros % 3 == 0) {
            printf("Numero: %d\n", *dir_numeros);
            printf("Direccion de memoria: %u\n", dir_numeros);
        }
        dir_numeros++;
    }

    return 0;
}

# papa -- 5 soles
*/


/* float	
#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    int* numeros = new int[n];
    int* dir_numeros;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese numero [" << i << "] : ";
        cin >> numeros[i];
    }

    dir_numeros = numeros; // Primera posición de memoria

    for (int i = 0; i < n; i++) {
        int num_entero = static_cast<int>(*dir_numeros); // Convertir a entero
        if (num_entero % 3 == 0) {
            cout << "\nEl numero " << *dir_numeros << " es multiplo de 3" << endl;
            cout << "Direccion de memoria (cout): " << dir_numeros << endl;
         	printf("Direccion de memoria (printf): %d",dir_numeros);

        }
        dir_numeros++; // Avanza a la siguiente posición de memoria
    }

    delete[] numeros; // Liberar la memoria asignada
	getch();
    return 0;
}

*/

/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    double* numeros = new double[n];
    double* dir_numeros;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese numero[" << i << "]: ";
        cin >> numeros[i];
    }

    dir_numeros = numeros; // Primera posición de memoria

    for (int i = 0; i < n; i++) {
        int num_entero = static_cast<int>(*dir_numeros); // Convertir a entero
        if (num_entero % 3 == 0) {
            cout << "\nEl numero " << *dir_numeros << " es múltiplo de 3" << endl;
            cout << "Direccion de memoria (cout): " << dir_numeros << endl;
            printf("Direccion de memoria (printf): %u\n", (void*)dir_numeros);
        }
        dir_numeros++; // Avanza a la siguiente posición de memoria
    }

    delete[] numeros; // Liberar la memoria asignada

    return 0;
}

*/
#include <iostream>

int main() {
    std::cout << "El tamaño de un int es: " << sizeof(double) << " bytes" << std::endl;
    return 0;
}
