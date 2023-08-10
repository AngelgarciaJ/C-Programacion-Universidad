// 39 
// dos funciones : ingresar 
#include <iostream>
#include <conio.h>
using namespace std;

struct Alumno {
    char apellidos[30];
    float peso;
    float talla;
    int promedio_final;
} alumno1;

void pedirDatos();
void mostrarDatos(Alumno);

int main() {
    pedirDatos();
    mostrarDatos(alumno1);

    getch();
    return 0;
}

void pedirDatos() {
    cout << "Ingrese los apellidos del alumno: ";
    cin.getline(alumno1.apellidos, 30, '\n');

    cout << "Ingrese el peso del alumno: ";
    cin >> alumno1.peso;

    cout << "Ingrese la talla del alumno: ";
    cin >> alumno1.talla;

    cout << "Ingrese el promedio final del alumno: ";
    cin >> alumno1.promedio_final;
}

void mostrarDatos(Alumno alumno) {
    cout << "\n\nApellidos: " << alumno.apellidos << endl;
    cout << "Peso: " << alumno.peso << endl;
    cout << "Talla: " << alumno.talla << endl;
    cout << "Promedio final: " << alumno.promedio_final << endl;
}