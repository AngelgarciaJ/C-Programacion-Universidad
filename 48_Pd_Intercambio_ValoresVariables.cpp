// programa 48
// programacion dinamica. 
// dos numeros reales asiganados. 
// usar direccion de memoria para el intercambio de valores. 


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

// Función para intercambiar los valores de dos variables
void intercambio(float*, float*);

int main() {
    float num1 = 20.8, num2=6.78;
    
    cout << "El primer valor numbers es: "<<num1<<endl;
    cout << "El segundo valor numbers es: "<<num2<<endl;
    
    intercambio(&num1, &num2); // Llamada a la función intercambio
    
    cout << "\n\nDespués del intercambio:\n";
    cout << "Valor del primer numero: " << num1 << endl;
    cout << "Valor del segundo numero: " << num2 << endl;
    
    getch(); // Espera a que se presione una tecla
    return 0;
}

// Implementación de la función intercambio
void intercambio(float *dirNum1, float *dirNum2) {
    float aux;
    
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}
