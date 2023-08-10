#include <iostream>
#include <conio.h>

using namespace std;

void valNuevo(int&, int&, int&);

int main(){
    int num1, num2, num3;
    
    cout << "Ingrese tres valores: ";
    cin >> num1 >> num2 >> num3;
    
    valNuevo(num1, num2, num3);
    cout << "El nuevo valor de la primera variable es: " << num1 << endl;
    cout << "El nuevo valor de la segunda variable es: " << num2 << endl;
    cout << "El nuevo valor de la tercera variable es: " << num3 << endl;
    getch();
    return 0;
}

void valNuevo(int& xnum, int& ynum, int& znum){
    cout << "El valor de la primera variable es: " << xnum << endl;
    cout << "El valor de la segunda variable es: " << ynum << endl;
    cout << "El valor de la tercera variable es: " << znum << endl;
    
    xnum = 89;
    ynum = 45;
    znum = 23;
}
