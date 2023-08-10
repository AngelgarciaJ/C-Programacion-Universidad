// programa prog17
// funcion potencia 
// un numero entero positivo 

# include <conio.h>
# include <iostream>

using namespace std;

// prototipo de funciones 
void pedirDatos();
void funpot(int x, int y);

int numero, exponente;


int main(){
	pedirDatos();
	funpot(numero, exponente);
	 getch();
	 return 0;
}

// operaciones 
void pedirDatos(){
    cout<<"ingrese un numero"; cin>>numero;
    cout<<"ingree el exponente"; cin>>exponente;}

void funpot(int x, int y){
	long resultado =1;
	for(int i=1; i<=y; i++){
		resultado *=x;
	}
	cout<<"el resultado es;"<<resultado<<endl;
}