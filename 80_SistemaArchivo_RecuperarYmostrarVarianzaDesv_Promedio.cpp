//1. Elaborar un programa en C para recupera archiva de "colegialas201.txt
// luego muestre por pantalla el promedio, varianta, desviación y coeficiente de variación de cada variable

# include <iostream>
#include <stdio.h>
# include <string>
# include <conio.h>
#include <math.h>


int main() {
    int n, i;
    FILE *p;
    char file1[20];
    float talla[205], peso[205];
    float sumaT1 = 0, sumaT2 = 0, promT, varT, desT, cvT;
    float sumaP1 = 0, sumaP2 = 0, promP, varP, desP, cvP;

    printf("Ingrese nombre de archivo para recuperar: ");
    gests()
	//scanf("%s", file1);

    printf("Ingrese numero de registros: ");
    scanf("%d", &n);

    p = fopen(file1, "r");

    if (p == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fscanf(p, "%f %f", &talla[i], &peso[i]);
        printf("\n data %d: %.2f %.2f", i + 1, talla[i], peso[i]);
        sumaT1 += talla[i];
        sumaT2 += pow(talla[i], 2);
        sumaP1 += peso[i];
        sumaP2 += pow(peso[i], 2);
    }

    fclose(p);

    promT = sumaT1 / n;
    varT = (sumaT2 - n * pow(promT, 2)) / (n - 1);
    desT = sqrt(varT);
    cvT = desT / promT * 100;

    promP = sumaP1 / n;
    varP = (sumaP2 - n * pow(promP, 2)) / (n - 1);
    desP = sqrt(varP);
    cvP = desP / promP * 100;

    printf("\nTalla:");
    printf("\nPromedio = %.3f, Varianza = %.3f, Desviacion = %.3f, Coeficiente de Variacion = %.3f%%", promT, varT, desT, cvT);

    printf("\n\nPeso:");
    printf("\nPromedio = %.3f, Varianza = %.3f, Desviacion = %.3f, Coeficiente de Variacion = %.3f%%", promP, varP, desP, cvP);

    return 0;
}
