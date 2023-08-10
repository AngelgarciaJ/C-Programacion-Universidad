// programa 60 
// 

#include <iostream>
#include <fstream>

using namespace std;

void escribir();

int main() {
    escribir();
    system("pause");
    return 0;
}

void escribir() {
    ofstream archivo;
    archivo.open("prueba1.txt", ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "Hola auditor, les saludo su amigo angel";
    archivo.close();
}
