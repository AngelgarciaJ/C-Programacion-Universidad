//prog 52
// en arreglo dinamico almacenar n numeros 
// ordenar en fomra ascendente y mostrar en pantalla
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void pedirdatos();
void ordenarvector(int *,int);
void mostrarvector(int *,int);
int nElementos, *elemento;

int main(){
	pedirdatos();
	ordenarvector(elemento,nElementos);
	mostrarvector(elemento,nElementos);
	delete[] elemento;
	getch();
	return 0;
}

void pedirdatos(){
	cout << "ingrese el tamaño del vector: "; cin>>nElementos;
	elemento = new int[nElementos];
	for (int i=0; i<nElementos; i++){
		cout << "ingrese numero ["  << i << "]: "; cin>> *(elemento+i);
	
	}
	
}
void ordenarvector(int *elemento, int nElementos){
	int aux;
	for (int i=0; i<nElementos; i++)
		for (int j=0; j<nElementos-1; j++)
			if((elemento+j)>(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
}

void mostrarvector(int *elemento, int nElementos){
	cout << "\nvector ordenado: \n";
	for (int i=0; i<nElementos; i++)
		cout << *(elemento+i)<<endl;
}
