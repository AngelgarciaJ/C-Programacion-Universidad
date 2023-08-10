/* promgrama promg4_A_2.cpp */

// dos  bucle 

#include <stdio.h>

int main() {
    int i, j, n;
    float vector[100], temp;
    
    printf("Ingrese el numero de elementos en el vector: ");
    scanf("%d", &n);
    
    printf("Ingrese los elementos del vector:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &vector[i]);
    }
    
    // Ordenar el vector en orden ascendente
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(vector[i] > vector[j]) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
    
    // Imprimir el número menor y el número mayor
    printf("El numero menor es %.2f\n", vector[0]);
    printf("El numero mayor es %.2f\n", vector[n-1]);
    
    return 0;
}
