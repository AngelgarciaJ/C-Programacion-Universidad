// programa 78 
// n pares e datos

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int n;
    FILE *p;
    float data1, data2;
    char file1[20];

    printf("Ingrese el nombre del archivo para grabar los datos: ");
    gets(file1);

    printf("Ingrese el numero de pares de datos: ");
    scanf("%d", &n);

    p = fopen(file1, "w");
    if (p == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Ingrese el dato %d (parte entera): ", i);
        scanf("%f", &data1);

        printf("Ingrese el dato %d (parte decimal): ", i);
        scanf("%f", &data2);

        fprintf(p, "%f %f\n", data1, data2);
    }

    fclose(p);
    printf("Datos guardados en el archivo correctamente.\n");
    return 0;
}
