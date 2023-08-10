/*programa pro4b.cpp*/ 
// ingresar n elementos vector
// mostrar el menor y mayor elemento

/*  muestras las iteraciones*/

/* prueba de datos*/
// 4 5 3 2 7 
#include <stdio.h>

int main() {
    int i, n;
    float vector[100], temp;
    
    printf("cuantos  elementos habra en el vector: ");
    scanf("%d", &n);
    
    printf("Ingrese los elementos del vector:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &vector[i]);
    }
    
    // Inicializar temp con el primer elemento del vector
    temp = vector[0];
    
    // Encontrar el número menor en el vector
    for(i = 1; i < n; i++) {
        if(vector[i] < temp) {
            temp = vector[i]; // Actualizar temp con el número menor encontrado
        }
        printf("Iteracion %d: Numero menor encontrado hasta ahora: %.2f\n", i, temp);
    }
    
    // Imprimir el número menor
    printf("El numero menor es %.2f\n", temp);
    
    // Reiniciar temp con el primer elemento del vector
    temp = vector[0];
    
    // Encontrar el número mayor en el vector
    for(i = 1; i < n; i++) {
        if(vector[i] > temp) {
            temp = vector[i]; // Actualizar temp con el número mayor encontrado
        }
        printf("Iteracion %d: Numero mayor encontrado hasta ahora: %.2f\n", i, temp);
    }
    
    // Imprimir el número mayor
    printf("El numero mayor es %.2f\n", temp);
    
    return 0;
}





