// programa prog11
// usar una funcion 
// encontrar el maximo de dos numeros

#include <stdio.h>

// Declaración de la función para encontrar el máximo
int encontrarMaximo(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int numero1, numero2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    // Llamada a la función para encontrar el máximo
    int maximo = encontrarMaximo(numero1, numero2);

    printf("El maximo entre %d y %d es: %d\n", numero1, numero2, maximo);

    return 0;
}

