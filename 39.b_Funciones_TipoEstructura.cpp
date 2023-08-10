
#include <stdio.h>
#include <conio.h>

struct Alumno {
    char apellidos[30];
    float peso;
    float talla;
    int promedio_final;
} alumno1;

void pedirDatos();
void mostrarDatos(Alumno);

int main() {
    pedirDatos();
    mostrarDatos(alumno1);

    getch();
    return 0;
}

void pedirDatos() {
    printf("Ingrese los apellidos del alumno: ");
    scanf("%[^\n]%*c", alumno1.apellidos);

    printf("Ingrese el peso del alumno: ");
    scanf("%f", &alumno1.peso);

    printf("Ingrese la talla del alumno: ");
    scanf("%f", &alumno1.talla);

    printf("Ingrese el promedio final del alumno: ");
    scanf("%d", &alumno1.promedio_final);
}

void mostrarDatos(Alumno alumno) {
    printf("\n\nApellidos: %s\n", alumno.apellidos);
    printf("Peso: %.2f\n", alumno.peso);
    printf("Talla: %.2f\n", alumno.talla);
    printf("Promedio final: %d\n", alumno.promedio_final);
}
