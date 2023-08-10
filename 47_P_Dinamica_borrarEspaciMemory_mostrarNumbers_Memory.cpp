// programa 47
// programacion dinamica
// quiero que se muestre la direcion de memoria mas

#include <iostream>
#include <conio.h>

using namespace std;

void pedirNotas(); // Solicita al usuario el número de calificaciones y las notas correspondientes
void mostrarNotas(); // Muestra por pantalla las notas ingresadas por el usuario

int numCalif; // Almacena el número de calificaciones
int* calif; // Puntero para almacenar las notas

int main()
{
    pedirNotas(); // Llama a la función para solicitar las notas
    mostrarNotas(); // Llama a la función para mostrar las notas

    delete[] calif; // Libera la memoria asignada al vector de notas

    getch(); // Espera la entrada del usuario antes de finalizar
    return 0;
}

void pedirNotas()
{
    cout << "Ingrese el numero de calificaciones: ";
    cin >> numCalif;

    calif = new int[numCalif]; // Crea el arreglo dinámico para almacenar las notas

    for (int i = 0; i < numCalif; i++)
    {
        cout << "Ingrese una nota: ";
        cin >> calif[i];
    }
}

void mostrarNotas()
{
    cout << "\n\nMostrando notas del usuario: \n";
    for (int i = 0; i < numCalif; i++)
    {
        cout << "Valor ingresado: " << *calif << endl;
        cout << "Posicion de memoria: " << calif++<< endl;
    }
    //calif++;
}




/*
void mostrarNotas()
{
    cout << "Notas ingresadas:" << endl;
    for (int i = 0; i < numCalif; i++)
    {
        cout << "Nota: " << calif[i] << ", Direccii	n de memoria: " << &calif[i] << endl;
    }
}
*/



