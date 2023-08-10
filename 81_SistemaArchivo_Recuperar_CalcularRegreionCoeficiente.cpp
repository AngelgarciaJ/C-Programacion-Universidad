//Tarea 81. Elaborar un programa en C para recupera archivo de "colegialas201.txt",
//luego muestre por pantalla el coeficiente de correlación y la estimación de regresión lineal simple (peso-f(talla)).

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    FILE *p;
    char file1[20];
    float talla[205], peso[205];

    printf("Ingrese nombre de archivo para recuperar: ");
    scanf("%s", file1);

    printf("Ingrese numero de registros: ");
    scanf("%d", &n);

    p = fopen(file1, "r");

    if (p == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    float sumaT = 0, sumaP = 0;

    for (int i = 0; i < n; i++) {
        fscanf(p, "%f %f", &talla[i], &peso[i]);
        printf("\n data %d: %.2f %.2f", i + 1, talla[i], peso[i]);
        sumaT += talla[i];
        sumaP += peso[i];
    }

    fclose(p);

    float promT = sumaT / n;
    float promP = sumaP / n;

    float num = 0, denT = 0, denP = 0;

    for (int i = 0; i < n; i++) {
        num += (talla[i] - promT) * (peso[i] - promP);
        denT += pow(talla[i] - promT, 2);
        denP += pow(peso[i] - promP, 2);
    }

    float coefCorr = num / (sqrt(denT) * sqrt(denP));

    printf("\n\nCoeficiente de Correlacion: %.3f\n", coefCorr);

    float valorT;
    printf("Ingrese el valor de talla para calcular la estimacion de peso: ");
    scanf("%f", &valorT);

    float numEstimacion = 0, denEstimacion = 0;

    for (int i = 0; i < n; i++) {
        numEstimacion += (talla[i] - promT) * (peso[i] - promP);
        denEstimacion += pow(talla[i] - promT, 2);
    }

    float b1 = numEstimacion / denEstimacion;
    float b0 = promP - (b1 * promT);
    float estimacion = b0 + (b1 * valorT);

    printf("Estimacion de peso para talla %.2f: %.2f\n", valorT, estimacion);

    return 0;
}
