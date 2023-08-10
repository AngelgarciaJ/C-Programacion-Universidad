/*Tarea 65. Elaborar un programa en C, para recuperar la frase "poemal.txt".
 Visualizar por pantall dicha frase concatenando con la frase "Se recuperó con 
 bastante éxito". */
 
 // 
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void lecturaArchivo();

int main()
{
    lecturaArchivo(); // Llama a la función para leer y mostrar el contenido del archivo
    
    cout << "Se recupero con bastante exito." << endl; // Muestra la frase adicional
    
    system("pause"); // Pausa la consola antes de terminar el programa
    return 0; // Indica que el programa se ejecutó correctamente
}



void lecturaArchivo()
{
    ifstream archivo; // Objeto para leer archivos de texto
    string texto; // Variable para almacenar cada línea del archivo
    
    archivo.open("poema1.txt", ios::in); // Abre el archivo "poemal.txt" en modo lectura
    
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






 
 
 
 
 
 
 
 /*
 // Lee y muestra el contenido del archivo "poemal.txt"
void lecturaArchivo()
{
    // Abre el archivo "poemal.txt" en modo lectura
    // Verifica si hay errores al abrir el archivo
    // Itera hasta el final del archivo y muestra cada línea en la consola
    // Cierra el archivo después de leerlo
}

int main()
{
    lecturaArchivo(); // Llama a la función para leer y mostrar el contenido del archivo
    
    // Muestra la frase adicional "Se recuperó con bastante éxito."
    
    // Pausa la consola antes de terminar el programa
    // Indica que el programa se ejecutó correctamente
}
*/