#include <iostream>
#include <conio.h>

using namespace std;

void valNuevo(int&, int&, int&, int&);

int main(){
    int num1, num2, num3, num4;
    
    cout << "Ingrese cuatro valores de pesos de ninos: ";
    cin >> num1 >> num2 >> num3 >> num4;
    
    valNuevo(num1, num2, num3, num4);
    cout << "El nuevo valor del primer peso es: " << num1 << endl;
    cout << "El nuevo valor del segundo peso es: " << num2 << endl;
    cout << "El nuevo valor del tercer peso es: " << num3 << endl;
    cout << "El nuevo valor del cuarto peso es: " << num4 << endl;
    
    getch();
    return 0;
}

void valNuevo(int& xnum, int& ynum, int& znum, int& wnum){
    cout << "El valor del primer peso es: " << xnum << endl;
    cout << "El valor del segundo peso es: " << ynum << endl;
    cout << "El valor del tercer peso es: " << znum << endl;
    cout << "El valor del cuarto peso es: " << wnum<< endl;
    
    cout << "Reingrese cuatro valores de pesos de ninos: ";
    cin >> xnum >> ynum >> znum >> wnum;
}
