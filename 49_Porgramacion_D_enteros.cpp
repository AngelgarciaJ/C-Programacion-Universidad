// programa 49
// doa numeros enteros 
// intercambio de valores por dirrecion de memoria

// Función para intercambiar los valores de dos variables
void intercambio(int*, int*);

int main() {
    int num1, num2;
    
    cout << "Ingrese numero 1: ";
    cin >> num1;
    
    cout << "Ingrese numero 2: ";
    cin >> num2;
    
    intercambio(&num1, &num2); // Llamada a la función intercambio
    
    cout << "\n\nDespues del intercambio:\n";
    cout << "Valor del primer numero: " << num1 << endl;
    cout << "Valor del segundo numero: " << num2 << endl;
    
    getch(); // Espera a que se presione una tecla
    return 0;
}

// Implementación de la función intercambio
void intercambio(int *dirNum1, int *dirNum2) {
    int aux;
    
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}
