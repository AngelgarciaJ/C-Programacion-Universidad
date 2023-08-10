//Programa prog06c.cpp
/*Desarrollar un programa en C para ingresar a 
dos vectores con datos carácteres
mostrar la unión de ambos*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char letrasA[100], letrasB[100]; int i, n, m;
	cout<<"\nIngrese el numero de elementos <n>: "<<endl; cin>>n;
	cout<<"\nIngrese los caracteres de A[]:"<<endl;
	i = 0;
	while(i<n){
		cin>>letrasA[i];
		i++;
	}
	
	cout<<"\nIngrese el numero de elementos <m>: "<<endl; cin>>m;
	cout<<"\nIngrese los caracteres de B[]:"<<endl;
	i = 0;
	while(i<m){
		cin>>letrasB[i];
		i++;
	}
	int x = m + n ; char letrasC[x];
	strcpy(letrasC, letrasA);//al vector vacio 
	strcat(letrasC, letrasB);//concatena al vector c
	cout<<"\nResultado\n"<<endl;
	for(i=0; i<x; i++)
		cout<<letrasC[i]<<endl;
	getch();
	return 0;
}