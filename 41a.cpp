/*41 a:c++*/
/*Realice un programa en C para ingresar dos valores tipo entero
,para luego mostrar los valores conjuntamente con las direcciones*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double num1,num2,*dir_num1,*dir_num2;
		
	dir_num1=&num1;//le otorga la direccion de num a dir_num
	dir_num2=&num2;
	
    cout << "Ingrese el valor para el Numero 1: ";
    cin >> num1; 
    
    cout << "Ingrese el valor para el Numero 2: ";
    cin >> num2; 
    
	cout<<"Numero 1: "<<*dir_num1<<endl;
	cout<<"Numero 2: "<<*dir_num2<<endl;
	cout<<"Direccion de la variable num1: "<<dir_num1<<endl;
	cout<<"Direccion de la variable num2: "<<dir_num2<<endl;
	getch ();
	return 0;
}