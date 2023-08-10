/* Ejercicio 42B Desarrolla un programa en C ,para asignar a un 
vector de datos  con 5 valores para luego mostrar dichos valores
conjuntamente con las direcciones de memoria respectivamente
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int numeros[] = {5, 2, 3, 4, 1};
    int *dir_numeros;
    dir_numeros = &numeros[0];
    dir_numeros = numeros;

    for (int i = 0; i < 5; i++)
        printf("Vector[%d] = %d\n", i, *(dir_numeros++));

    for (int i = 0; i < 5; i++)
        printf("Posicion de memoria[%d] es: %u\n", numeros[i], dir_numeros++);

    return 0;
}
