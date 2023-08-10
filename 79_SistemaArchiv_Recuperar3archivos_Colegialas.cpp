// 

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int n;
    FILE *p;
    float talla, peso;
    char file1[20];

    printf("Ingrese el nombre del archivo para grabar los datos: ");
    gets(file1);

    printf("Ingrese el numero de pares de datos: ");
    scanf("%d", &n);

    p = fopen(file1, "r");
    /*
    if (p == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
*/
    for (int i = 1; i <= n; i++) {
        
        fscanf(p, "%f %f ", &talla, &peso);
        printf("\n dato %d : %.2f %.2f ", i, talla, peso);
    }

    fclose(p);
    printf("\nDatos guardados en el archivo correctamente.\n");
    return 0;
}