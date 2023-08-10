// programa 50 
// Asignar 5 valores a vector de datos
// hallar el maximo elemento de un arreglo. 

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int hallarMax(int*, int);

int main() {
    const int nElemento = 5;
    int numeros[nElemento] = {3, 5, 2, 8, 1};
    cout << "El elemento mayor es: " << hallarMax(numeros, nElemento) << endl;
    
    getch();
    return 0;
}

int hallarMax(int *dirVec, int nElemento) {
    int max = *dirVec; // Asignar el primer elemento como máximo inicial
    
    for (int i = 1; i < nElemento; i++) {
        if (*(dirVec + i) > max) { // Compara cada elemento con el máximo actual
            max = *(dirVec + i); // Si se encuentra un elemento mayor, se actualiza el máximo
        }
    }
    
    return max; // Devuelve el valor máximo encontrado
}










/*
int hallarMax(int*, int);
int main(){
	const int nElemento=4;
	int numeros[nElemento] = {3, 5, 8, 1};
	cout << "el elemento mayor es: " << hallarMax(numeros, nElemento) <<endl;
	
	getch();
	return 0;
	
}

int hallarMax(int *dirVec, int nElemento){
	int max = 0;
	for(int i=0; i<nElemento; i++)
	    if(*(dirVec) > max) max = *(dirVec+i);
	    
	return 0;
}
*/
