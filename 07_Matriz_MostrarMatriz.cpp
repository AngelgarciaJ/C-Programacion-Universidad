// programa 07.A1
/*Ingresa una matriz de datos */
/*printf - scanf */ 

#include <iostream>
#include <conio.h> 
using namespace std;

int main()
{	int numeros [100] [100], filas, colum, i, j;

	printf("\n Ingrese numero de filas: "); scanf("%d", &filas);
	printf ("\n Ingrese numero de columnas :"), scanf("%d", & colum);
	
	for(i=1; i <= filas; i++) 
		for(j=1; j <= colum; j++)
		{ printf("\n Ingrese numeros [%d] [%d]: ",i,j);
		  scanf("%d", &numeros[i][j]);
		}
		
		
	for(i=1; i <= filas; i++) { printf("\n");
		for(j = 1; j <= colum; j++)
			printf("\t %d ", numeros [i][j]); }
			
			
	getch();
	return 0;
}