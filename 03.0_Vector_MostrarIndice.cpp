// programa 03.cpp
/* ingresar n numeros, mostrar cada elemento con su indice */

#include <limits.h>
#include <stdio.h>


int main() {
    int n, i;

    printf("Ingrese la cantidad de numeros:\n ");
    scanf("%d", &n);

    int numeros[n]; // array - vector

    for (i = 0; i < n; i++) {
        printf("Ingrese	 el numero %d: ", i);
        scanf("%d", &numeros[i]);
        printf("El indice es:%d | el valor es:%d\n\n", i, numeros[i]);
    }

    return 0;
}	



// opcional
/*

int main() {
    int n;
    printf("ingrese numero: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Elemento: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("indice de numeros: \n");
    for (int i = 0; i < n; i++) {
        printf("Indice: %d, Elemento: %d\n", i, arr[i]);
    }
    return 0;
}
*/
