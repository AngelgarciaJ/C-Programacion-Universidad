// programa 69
// datos enteros
// archivo : datos1a.txt

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	int i, n;
	FILE *p;
	int a; 
	char file1[20];
	
	printf("\nIngrese nombre de archivo para grbar: ");
	gets(file1);
	
	printf("\Ingrese numero de datos :");
	scanf("%d", &n);
	p = fopen(file1, "w"); 
	
	for(i=1; i <= n; i++){
		printf("\nDato %d: ", i);
		scanf("%f", &a);
		// probar con espacios
		fprintf(p, "%f ", a); 
		
	}	
	fclose(p);
	return 0;
	
}