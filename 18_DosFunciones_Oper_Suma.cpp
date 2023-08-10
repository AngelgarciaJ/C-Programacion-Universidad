// programa prog18.cpp
// dos funcioens, operacion de la suma

#include <stdio.h>

void ingresar(int *num1, int *num2) {
    printf("Ingresa dos numeros: ");
    scanf("%d %d", num1, num2);
}

int sumar(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    ingresar(&num1, &num2);
    printf("El resultado de la suma es: %d\n", sumar(num1, num2));
    return 0;
}
