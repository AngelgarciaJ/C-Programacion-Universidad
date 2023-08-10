/* Pragma prog 06.A.1.cpp */ 
/*  ingresar  a tres vectores sus elementos caracteres.
Mostrar la union de los tres vectores.*/ 

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char letras1[5], letras2[5], letras3[5];
    char letras4[15];
    int n = 15;
    printf("Ingrese caracteres  al vector <15> elementos:\n");
    printf("Ingrese elementos al vector 1:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i+1);
        scanf(" %c", &letras1[i]);
        letras4[i] = letras1[i];
    }

    printf("Ingrese elementos al vector 2:\n");
    for (int i = 5; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf(" %c", &letras2[i-5]);
        letras4[i] = letras2[i-5];
    }

    printf("Ingrese elementos al vector 3:\n");
    for (int i = 10; i < 15; i++) {
        printf("Elemento %d: ", i+1);
        scanf(" %c", &letras3[i-10]);
        letras4[i] = letras3[i-10];
    }

    printf("La union de los tres vectores es:\n");
    for (int i = 0; i < n; i++) {
        printf("%c", letras4[i]);
    }

    getch();
    return 0;
}


	
	