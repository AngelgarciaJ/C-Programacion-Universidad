// programa 55.ccp
// ingresar un refran
// mstrar el numero de vocales y consonante M

#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
int contarVocales(const char *);
int contarConsonanteM(const char *);

char refran[100];

int main(){
    pedirDatos();
    
    int numVocales = contarVocales(refran);
    cout << "\nNumero de vocales en el refran: " << numVocales << endl;
    
    int numConsonantesM = contarConsonanteM(refran);
    cout << "Numero de veces que aparece la consonante 'M' en el refran: " << numConsonantesM << endl;
    
    return 0;
}

void pedirDatos(){
    cout << "Ingrese un refran: ";
    cin.getline(refran, 100, '\n');
    strupr(refran);
}

int contarVocales(const char *refran){
    int contador = 0;
    
    while (*refran){
        switch (*refran){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                contador++;
                break;
        }
        refran++;
    }
    
    return contador;
}

int contarConsonanteM(const char *refran){
    int contador = 0;
    
    while (*refran){
        if (*refran == 'M'){
            contador++;
        }
        refran++;
    }
    
    return contador;
}
