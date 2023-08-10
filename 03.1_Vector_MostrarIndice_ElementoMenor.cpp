// programa 03.A
// Ingresar n elementos,
// mostrar el elemento menor con su indice asociado

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, menor = INT_MAX, indice;
    printf("Ingrese la cantidad de numeros a ingresar: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("El numero n es menor a 0\n");
        printf("Ingrese la cantidad de numeros a ingresar: ");
        scanf("%d", &n);
    }

    int numeros[n];
    for (i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] < menor) {
            menor = numeros[i];
            indice = i;
        }
    }

    printf("El numero mas pequeno es %d y se encuentra en la posicion %d", menor, indice);
    return 0;
}


// opcional
/*

#include <stdio.h>
int main() {
   int n, i, menor, indice;
   printf("Ingrese la cantidad de numeros a ingresar: ");
   scanf("%d", &n);
   while(n <= 0){
       printf("El numero n es menor a 0\n");
       printf("Ingrese la cantidad de numeros a ingresar: ");
       scanf("%d", &n);
   }
    
   int numeros[n];
   for(i = 0; i < n; i++) {
      printf("Ingrese el numero %d: ", i+1);
      scanf("%d", &numeros[i]);
   }
   menor = numeros[0];
   indice = 0;
   for(i = 1; i < n; i++) {
      if(numeros[i] < menor) {
         menor = numeros[i];
         indice = i;
      }
   }

   printf("RPTA: %d->%d", menor,indice);
   return 0;
}

*/