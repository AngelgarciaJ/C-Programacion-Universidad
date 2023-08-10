/* Ejercicio 64. Elaborar un programa en C, para recuperar is frase "prueba1.txt
 visualizado por pantalla dicha frase o texto*/

/* Programa prog4cpp */
// recuperar la frase "preeba1.txt"
// mostrar por pantalla

#include <iostream>
#include <fstream>

using namespace std;

void lecturaArchivo()
{
    ifstream archivo; // Objeto para leer archivos de texto
    string texto; // Variable para almacenar cada línea del archivo
    
    archivo.open("prueba1.txt", ios::in); // Abre el archivo en modo lectura
    
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

int main()
{
    lecturaArchivo(); // Llama a la función para leer y mostrar el contenido del archivo
    
    system("pause"); // Pausa la consola antes de terminar el programa
    return 0; // Indica que el programa se ejecutó correctamente
}
