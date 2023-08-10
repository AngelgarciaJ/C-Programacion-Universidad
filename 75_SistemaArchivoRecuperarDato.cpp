//programa prog 75
// recuperar archivo "datos1a.txt"
// por numero de datos

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
	printf("\nIngrese el nombre del archivo para recuperar: ");
	gets(file1);
	printf("Ingrese el numero de datos: "); scanf("%d", &n);
	
	p = fopen(file1, "r");
	for(i=1; i<=n; i++)
	{
		fscanf(p, "%f", &a);
		printf("\ndato %d: %f", i, a);
		//fprintf(p, "%f\n", a);
	}
	fclose(p);
	return 0;	
}