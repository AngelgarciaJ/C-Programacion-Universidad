/* promgrama prog04_A_1.cpp */
// ingrese n numeros en un vector, mostrar el menor y mayor elemento
// solo con un bucle 

#include <stdio.h>

int main() {
    int n, i, num;
    int menor, mayor;
    
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);
    
    printf("Ingrese los numeros:\n");
    scanf("%d", &num);
    menor = mayor = num;
    
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < menor) {
            menor = num;
        } else if (num > mayor) {
            mayor = num;
        }
    }
    
    printf("El numero menor es: %d\n", menor);
    printf("El numero mayor es: %d\n", mayor);
    
    return 0;
}
