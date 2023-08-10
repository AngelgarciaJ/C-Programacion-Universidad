// programa prog21.cpp
// paso de parametros por referencia 

# include <iostream>
# include <conio.h>

using namespace std ;

void valNuevo(int&, int&);

int main(){
	int num1, num2;
	
	cout<<"ingrese dos valores: "; cin>> num1, num2;
	
	valNuevo(num1, num2);
	cout<<"el nuevo valor de la primera variable es: "<<num1<<endl;
	cout<<"el nuevo valor de la primera variable es: "<<num2<<endl;
	getch();
	return 0;
	
}

void valNuevo(int& xnum, int& ynum){
	cout<<"el valor de la primera variable es: "<<xnum<<endl;
	cout<<"el valor de la primera variable es: "<<ynum<<endl;
	
	xnum = 89;
	ynum = 45;
	
}