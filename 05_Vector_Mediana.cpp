
/* programa prog_5_1_media.cpp */
// encontrar la mediana en un conjunto de datos de n elementos

// par 10: 4 10 5 17 8 8 2 4 13 10 
// impar 11; 11 20 17 4 7 9 4 5 14 12 8 


#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int i, j, n;
    float vector[100], temp;

    printf("\n Ingrese <n>: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\n v[%d]: ", i);
        scanf("%f", &vector[i]);
    }

    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (vector[i] > vector[j]) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }

    float mediana;
    if (n % 2 == 0) {
        mediana = (vector[n/2] + vector[(n/2)+1])/2;
    } else {
        mediana = vector[(n+1)/2];
    }
    
    printf("\n mediana = %.0f", mediana);

    getch();
    return 0;
}