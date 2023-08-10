#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void escribir();
int main(){
    escribir();
    system("pause");
    return 0;
    
}
void escribir()
{
    ofstream archivo;
    archivo.open("Poema1.txt",ios::out);
    if (archivo.fail()){
        printf("No se puede abrir...");
        exit(1);
    }
    archivo<<"Octavio Paz\n";
    archivo<<"\nMis pasos en esta calle Resuenan En otra calle Donde Oigo mis pasos Pasar en esta calle Donde Sólo es real la niebla.";
    archivo.close();
}
