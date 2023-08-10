// prgrama prog14.cpp 
// ingrese de tres numeros y calcular el valor absoluto

#include <stdio.h>

/* Prototipo de la funcion */
int abs_int(int num);

int main() {
    int a;
    float b;
    double c;

    printf("Ingrese un entero, un flotante y un double: ");
    scanf("%d %f %lf", &a, &b, &c);

    /* Calcula el valor absoluto de cada número utilizando la función abs_int */
    int abs_a = abs_int(a);
    float abs_b = abs_int(b);
    double abs_c = abs_int(c);

    printf("El valor absoluto de %d es %d\n", a, abs_a);
    printf("El valor absoluto de %f es %f\n", b, abs_b);
    printf("El valor absoluto de %lf es %lf\n", c, abs_c);

    return 0;
}

/* Implementación de la función abs_int */
int abs_int(int num) {
    return (num < 0) ? -num : num;
}

