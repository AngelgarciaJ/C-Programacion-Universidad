//prog 54 

// pedir nimbre a usuario y devolver nunmero de vocales
// que hay en dicha nonbre utiliaando punteros
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void pedirdatos();
int contarvocales (char *);
char nombre[30];
int main(){
	pedirdatos();
	cout << "\nnumero de vocales en el nombre: " << contarvocales(nombre)  << endl;
	getch();
	return 0;
}
void pedirdatos(){
	cout << "ingrese nombre de usuario: ";
	cin.getline(nombre,30,'\n');  
	strupr(nombre);
	
}
int contarvocales(char *nombre){
	int cont = 0;
	while(*nombre){
		switch(*nombre){
			case 'A':
				case 'E':
					case 'I':
						case 'O':
							case 'U':
								cont++;
							
		}
		nombre++;
	}
	return cont;
}