/*73  Elaborar un programa en C para ingresar n datos enteros. 
A la vez ir grabando a medida que se vayan ingresando en formato de 
un espacio entre ellos. Utilizar como nombre de archivo de datos:”datos3a.txt”. Editarlo con Block de notas.*/

//prog 73.cpp
//ordenadar datos con 2 decimas
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h> 
using namespace std;
int main(){
	int i,n;
	FILE *p;
	float a;
	char file1[20];
	printf("\nIngrese nombre del archivo para grabar: ");
	gets(file1);
	printf("\nIngrese numeros de datos: ");
	scanf("%d", &n);
	p=fopen(file1, "w");
	for(i=1;i<=n;i++){
		printf("\ndato %d: ",i);
		scanf("%f",&a);
		fprintf(p,"%f\n",a); 
	}
	fclose(p);
	return 0;	
}
