// programa 27 
// asignacion de 3 valores 
// fucion de paso de parametros por referecnai 
// ordeanr de menor a mayor

/*
#include <stdio.h>

void ordenar_valores(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b, c;

    printf("Ingrese tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    ordenar_valores(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    return 0;
}
*/


/*
#include <stdio.h>

void ordenar_valores(int *a, int *b, int *c) {
    int temp;
    printf("Iteracion 1: %d %d %d\n", *a, *b, *c);
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    printf("Iteracion 2: %d %d %d\n", *a, *b, *c);
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    printf("Iteracion 3: %d %d %d\n", *a, *b, *c);
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b, c;

    printf("Ingrese tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    ordenar_valores(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    return 0;
}

*/

// prueba de escrtorio 
#include <stdio.h>

void ordenar_valores(int *a, int *b, int *c) {
    int temp;
    printf("Iteracion 1: %d %d %d\n", *a, *b, *c);
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
        printf("Valor de temp: %d\n", temp);
    }
    printf("Iteracion 2: %d %d %d\n", *a, *b, *c);
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
        printf("Valor de temp: %d\n", temp);
    }
    printf("Iteracion 3: %d %d %d\n", *a, *b, *c);
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
        printf("Valor de temp: %d\n", temp);
    }
}

int main() {
    int a, b, c;

    printf("Ingrese tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    ordenar_valores(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    return 0;
}

