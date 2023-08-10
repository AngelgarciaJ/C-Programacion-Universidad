// programa prog25
/* ingreso de tres numeros 
 usar la funcion de paso de parametros por referencia
 se retorna la suma y producto*/
 
 #include <stdio.h>

void calcularSumaProducto(int num1, int num2, int num3, int *suma, int *producto) {
    *suma = num1 + num2 + num3;
    *producto = num1 * num2 * num3;
}

int main() {
    int num1, num2, num3;
    int suma, producto;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    calcularSumaProducto(num1, num2, num3, &suma, &producto);

    printf("La suma de los numeros es: %d\n", suma);
    printf("El producto de los numeros es: %d\n", producto);

    return 0;
}
