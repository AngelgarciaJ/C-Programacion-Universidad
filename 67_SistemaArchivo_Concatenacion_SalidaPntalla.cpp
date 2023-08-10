// programa 67 
// recupear prueba2.txt 

 // 
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void lecturaArchivo();

int main()
{
    lecturaArchivo(); // Llama a la función para leer y mostrar el contenido del archivo
    
    cout << "Se recupero tal como se alamaceno." << endl; // Muestra la frase adicional
    
    system("pause"); // Pausa la consola antes de terminar el programa
    return 0; // Indica que el programa se ejecutó correctamente
}



void lecturaArchivo()
{
    ifstream archivo; // Objeto para leer archivos de texto
    string  nombre, texto; // Variable para almacenar cada línea del archivo
    cout<<"nombre archivo a recuperar: ";
    getline(cin, nombre);
    
    
    archivo.open(nombre.c_str(), ios::in); // Abre el archivo "poemal.txt" en modo lectura
    
    if (archivo.fail()) // Verifica si hubo un error al abrir el archivo
    {
        cout << "No se pudo abrir archivo..." << endl;
        exit(1); // Sale del programa con código de error 1
    }
    
    while (!archivo.eof()) // Itera hasta que se alcance el final del archivo
    {
        getline(archivo, texto); // Lee una línea del archivo y la almacena en la variable 'texto'
        cout << texto << endl; // Muestra la línea en la consola
    }
    
    archivo.close(); // Cierra el archivo después de leerlo
}