/*programa prog01.cpp*/
/*Solución ecuación cuadratica*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
float a, b, x,  c, x1, x2, d;
printf("\nINgrese los valores <a> <b> <c>: \n");
scanf("%f %f %f", &a, &b, &c);


if (a != 0){
 d = pow(b, 2) - 4*a*c;
 x = -b/2/a;
 if(d >= 0){
          x1 = x + sqrt(d)/2/a; 
          x2 = x - sqrt(d)/2/a;
          printf("\n X1 = %.2f", x1); // %.2f salida de decimales : 2 decimales 
          printf("\n X2 = %.2f", x2);
          }
 else{
          d = d * (-1);
          printf("\n X1 = %.2f + %fi", x , d);
          printf("\n X2 = %f - %fi", x , d);
          }
 }
else{
       printf("\n\nNo existe solucion");
       }   
       
getch();
return 0;                 
}




// agregando mensajes : real, imaginario..
/*
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2, x;

    printf("Ingrese los valores a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Las raices son reales:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (d == 0)
    {
        x = -b / (2 * a);
        printf("La ecuacion tiene una raiz real:\n");
        printf("x = %.2f\n", x);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-d) / (2 * a);
        printf("Las raices son imaginarias:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

*/









/*
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d, x;
    printf("\n Ingrese Valores de <a><b><c>: ");
    scanf("%f %f %f", &a, &b, &c); 
    
    if (a != 0) {
        d = pow(b, 2) - 4 * a * c;
        x = -b / (2 * a);
        
        if (d >= 0) {
            x1 = x + sqrt(d) / (2 * a); 
            x2 = x - sqrt(d) / (2 * a);
            printf("\n x1 = %f", x1); 
            printf("\n x2 = %f", x2); 
        }
        else {
            d = d * (-1); 
            printf("\n x1 = %f +%fi", x, sqrt(d) / (2 * a)); 
            printf("\n x2 = %f -%fi", x, sqrt(d) / (2 * a)); 
        }
    }
    else {
        printf("\n\n no existe solucion"); 
    }
    return 0;
}

*/