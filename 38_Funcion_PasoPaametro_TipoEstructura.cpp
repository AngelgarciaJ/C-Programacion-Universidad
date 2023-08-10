// 38 
// paso de parametros de tipo estructura

#include<iostream>
#include<conio.h>
using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona);

int main(){
    pedirDatos();
    mostrarDatos(p1);
    getch();
    return 0;
}

void pedirDatos()
{
    cout<<"Ingrese nombre: "; cin.getline(p1.nombre,30,'\n');
    cout <<"Ingrese edad: "; cin>>p1.edad;
}
void mostrarDatos(Persona p)
{
    cout<<"\n\nnombre: "<<p.nombre<<endl;
    cout<<"edad: "<<p.edad<<endl;
}