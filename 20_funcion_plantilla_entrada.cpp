// programa prog.20.cpp
/*plantilla de funcion c*/
/* despliegue del argumento*/
// ingresar datos y imprimir mensaje por cada dato

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main()
{
    int dato1;
    float dato2;
    double dato3;
    char dato4;
    
    cout << "Ingresa un valor entero: ";
    cin >> dato1;
    despliegue(dato1);
    
    cout << "Ingresa un valor flotante: ";
    cin >> dato2;
    despliegue(dato2);
    
    cout << "Ingresa un valor double: ";
    cin >> dato3;
    despliegue(dato3);
    
    cout << "Ingresa un valor char: ";
    cin >> dato4;
    despliegue(dato4);
    
    getch();
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){   
    cout << "El valor del dato ingresado es: " << dato << endl;
}

