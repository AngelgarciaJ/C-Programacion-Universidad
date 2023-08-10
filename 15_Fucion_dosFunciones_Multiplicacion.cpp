// programa progr15.cpp
// usando dos funciones
// ingreso de datos y multiplicacion


#include <iostream>
#include <conio.h>

using namespace std;

// Prototipos de las funciones
void pedirDatos();
void mult(float x, float y);

float num1, num2;

int main() {
    pedirDatos();
    mult(num1, num2);
    getch();
    return 0;
}

void pedirDatos() {
    cout << "Ingresa dos numeros: ";
    cin >> num1 >> num2;
}

void mult(float x, float y) {
    float multiplicacion = x * y;
    cout << "La multiplicacion es: " << multiplicacion << endl;
}
