// programa pgorg16.cpp
// dos funciones, la primera para ingresar datos (3) y la segunda hacer la multiplicacion

#include <stdio.h>

int num1, num2, num3; // Variables globales

void ingresar() {
    printf("Ingresa tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
} 
int multiplicar() {
    return num1 * num2 * num3;
}

int main() {
    ingresar();
    printf("El resultado de la multiplicacion es: %d\n", multiplicar());
    return 0;
}
