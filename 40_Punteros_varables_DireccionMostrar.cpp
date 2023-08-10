// programa 40 
// asignar un valor a la variables 
// mostrar el valor y direccion de memoria 

# include <iostream>
# include <conio.h>

using namespace std; 

int main(){
	int num, *dir_num;
	num = 20; 
	dir_num = &num;  // se le otorga la direccion de memoria a dir_num  (&)
	
	cout<< " numero; "<< *dir_num<<endl;
	cout<< " Direccion de la variable num; "<< dir_num<<endl;
	
	getch ();
	return 0;
}