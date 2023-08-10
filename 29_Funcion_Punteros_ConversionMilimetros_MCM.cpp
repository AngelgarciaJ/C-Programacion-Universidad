/// programa 29
// ingresar un numero de melimetros
// convertirlos en metros, centimetros, milimetros
// use una funcion de paso de parametros por referencia , enviar un valor y retornar 3 valores

#include <stdio.h>

void convertirLongitud(int milimetros, int* metros, int* centimetros, int* mm) {
    *metros = milimetros / 1000;
    milimetros %= 1000;
    *centimetros = milimetros / 10;
    *mm = milimetros % 10;
}

int main() {
    int milimetros, metros, centimetros, mm;
    
    printf("Ingrese la cantidad de milimetros: ");
    scanf("%d", &milimetros);
    
    convertirLongitud(milimetros, &metros, &centimetros, &mm);
    
    printf("Equivalente en longitud: %d metros, %d centimetros, %d milimetros\n", metros, centimetros, mm);
    
    return 0;
}
