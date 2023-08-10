/*
Elaborar un programa en C para ingresar n datos reales. A la vez ir grabando a medida 
que se vayan ingresando un formato de dos decimales y con un espacio entre ellos, 
*/

//programa prog 72


#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>

using namespace std;
int main(){
	int i,n;
	FILE *p;
	float a;
	char file1[20];
	printf("\nIngrese el nombre del archivo para grabar: ");
	gets(file1);
	printf("Ingrese el numero de datos: "); scanf("%d", &n);
	p = fopen(file1, "w");
	for(i=1; i<=n; i++)
	{
		printf("Dato %d: ", i);
		scanf("%f", &a);
		fprintf(p, "%.2f\n ", a);
		//fprintf(p, "%f\n", a);
	}
	fclose(p);
	return 0;
}