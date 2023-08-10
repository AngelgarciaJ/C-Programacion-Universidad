
/* programa pro6B */
// union de los vectores tipo caracter

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	char letra1[] = {'a', 'b', 'c', 'd', 'e'};
	char letra2[] = {'f', 'g', 'h', 'i', 'j'};
	char letra3[] = {'k', 'l', 'm', 'n', 'o'};
	char letra4[15];
	
	for(int i = 0; i < 5; i++)
	    letra4[i] = letra1[i];
	    
	for(int i = 5; i < 10; i++)
	    letra4[i] = letra2[i-5];
	    
	for(int i = 10; i < 15; i++)
	    letra4[i] = letra3[i-10];
	    
	for(int i = 0; i < 15; i++)
	    cout << letra4[i]<<endl;
	    
	getch();
	return 0;
	
}