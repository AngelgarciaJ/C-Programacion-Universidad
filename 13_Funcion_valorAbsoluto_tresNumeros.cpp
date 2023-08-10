//Programa prog13.cpp / /Plantillas de Funcion en C/

/* encuentra valor absoluto de un numero */

#include <stdio.h>
#include <math.h>

// Función para encontrar el valor absoluto de un número
double encontrarValorAbsoluto(double num) {
    return fabs(num);
}

int main() {
    int entero;
    float decimal;
    double doble;

    printf("Ingrese un numero entero: ");
    scanf("%d", &entero);

    printf("Ingrese un numero decimal: ");
    scanf("%f", &decimal);

    printf("Ingrese un numero de tipo double: ");
    scanf("%lf", &doble);

    // Llamada a la función para encontrar el valor absoluto de cada número
    double valorAbsolutoEntero = encontrarValorAbsoluto(entero);
    double valorAbsolutoDecimal = encontrarValorAbsoluto(decimal);
    double valorAbsolutoDoble = encontrarValorAbsoluto(doble);

    printf("El valor absoluto del numero entero %d es: %.2lf\n", entero, valorAbsolutoEntero);
    printf("El valor absoluto del numero decimal %.2f es: %.2lf\n", decimal, valorAbsolutoDecimal);
    printf("El valor absoluto del numero double %.2lf es: %.2lf\n", doble, valorAbsolutoDoble);

    return 0;
}


