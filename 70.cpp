// programa 70 
// grabar archivos - datos2.txt 
// uso de "%f\n "  : para ordenar de forma vertical

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
		// probar con espac-ios
		fprintf(p, "%f \n", a); 
		
	}	
	fclose(p);
	return 0;
	
}