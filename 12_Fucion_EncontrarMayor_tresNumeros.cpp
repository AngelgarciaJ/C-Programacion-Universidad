/* programa 12 prog12.cpp */
// desarrollar en c , encontrar el mayor de 3 numeros 

#include <stdio.h>

int max(int a, int b, int c) {
    int temp = a;
    if (b > temp) {
        temp = b;
    }
    if (c > temp) {
        temp = c;
    }
    return temp;
}

int main() {
    int num1, num2, num3;
    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max_num = max(num1, num2, num3);
    printf("El mayor numero es: %d\n", max_num);
    return 0;
}
