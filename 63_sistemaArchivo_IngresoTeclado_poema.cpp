// programa 63
// ingreso desde teclado frase 
// archivo grabar --> prueba2.txt , editar en editor

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
    string nombreArchivo, frase;
    cout << "Escribe el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    cout << "\nIngresa la frase para guardar: ";
    getline(cin, frase);

    archivo << frase;

    archivo.close();
}
