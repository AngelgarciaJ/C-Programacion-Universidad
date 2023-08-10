// programa 28 
// ingresar un numero de segundos
// convertirlos en horas, minutos, segundos
// use una funcion de paso de parametros por referencia , enviar un valor y retornar 3 valores

// probando 5000 segundos

#include <stdio.h>

void convertirTiempo(int segundos, int* horas, int* minutos, int* seg) {
    *horas = segundos / 3600;
    segundos %= 3600;
    *minutos = segundos / 60;
    *seg = segundos % 60;
}

int main() {
    int segundos, horas, minutos, seg;
    
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);
    
    convertirTiempo(segundos, &horas, &minutos, &seg);
    
    printf("Equivalente en tiempo: %d horas, %d minutos, %d segundos\n", horas, minutos, seg);
    
    return 0;
}
