// 

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int i, n;
    FILE *p;
    int data;
    char file1[20];

    printf("\nIngrese el nombre del archivo para recuperar: ");
    gets(file1);

    printf("Ingrese el numero de datos: ");
    scanf("%d", &n);

    p = fopen(file1, "r");
    if (p == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fscanf(p, "%d", &data);
        printf("\ndato %d: %d", i, data);
    }

    fclose(p);
    return 0;
}
