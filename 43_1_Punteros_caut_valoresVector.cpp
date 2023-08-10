// prgrama 43.1
// cuot - cin 

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
    double numeros[100]; 
	double num;
    double b *dir_numeros;

    // Ingresar elementos del vector
    cout << "Ingrese n datos: ", cin>>num;
    for (int i = 0; i < num; i++) {
        cout << "Ingrese numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    dir_numeros = numeros;
    for (int i = 0; i < num; i++) 
        cout << "Vector[" << i << "] = " << *dir_numeros++ << endl;
    for (int i = 0; i < num; i++) {
        cout << "Posicion de memoria de " << numeros[i] << " es " << dir_numeros++ << endl;
    }

    getch();
    return 0;
}