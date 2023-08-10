/* programa pro07_B */
/* ingresar tres vectores, sus elementos cararteres */
/* mostrar la union de los tres vectores */

// datos de prueba:
// A = a b c 
// B = x y z 
// C = p q r 

#include <stdio.h>
		
#define MAX_SIZE 100 // tamaño máximo de los vectores

int main() {
    char vector1[MAX_SIZE], vector2[MAX_SIZE], vector3[MAX_SIZE], vectorResultado[3 * MAX_SIZE];
    int n, i, posicion = 0;

    // Pedir al usuario que ingrese el tamaño de los vectores
    printf("Ingrese el tamano de los vectores: ");
    scanf("%d", &n);

    // Pedir al usuario que ingrese los elementos de los vectores
    printf("Ingrese los elementos del primer vector:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &vector1[i]);
    }

    printf("Ingrese los elementos del segundo vector:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &vector2[i]);
    }

    printf("Ingrese los elementos del tercer vector:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &vector3[i]);
    }

    // Copiar los elementos de los tres vectores al vector resultado
    for (i = 0; i < n; i++) {
        vectorResultado[posicion] = vector1[i];
        posicion++;

        vectorResultado[posicion] = vector2[i];
        posicion++;

        vectorResultado[posicion] = vector3[i];
        posicion++;
    }

    // Mostrar el vector resultado en pantalla
    printf("La union de los tres vectores es:\n");
    for (i = 0; i < 3 * n; i++) {
        printf("%c ", vectorResultado[i]);
    }
    printf("\n");

    return 0;
}
