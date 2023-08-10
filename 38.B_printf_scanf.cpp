// 38.b 
// paso 
// trabajar con printf - scanf 

#include <stdio.h>
#include <conio.h>

struct Persona
{
    char nombre[30];
    int edad;
} p1;

void pedirDatos();
void mostrarDatos(Persona);

int main()
{
    pedirDatos();
    mostrarDatos(p1);
    getch();
    return 0;
}

void pedirDatos()
{
    printf("Ingrese nombre: ");
    scanf("%[^\n]%*c", p1.nombre); // %[^\n]%*c se utiliza para leer una línea completa con espacios incluidos
    printf("Ingrese edad: ");
    scanf("%d", &p1.edad);
}

void mostrarDatos(Persona p)
{
    printf("\n\nNombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
}


