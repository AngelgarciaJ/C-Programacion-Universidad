//Ejercicio 35. Realice un programa en C para asignar valores a una matriz de 23 Utilizar tres funciones para: mostrar sus valores, calcular los cuadrados de cada elemento y mostrar la matriz con elementos elevados al cuadrado.
// Programa prog35.cpp */
/* Paso de parametros de tipo matriz */
// eleva la cuadrado todos sus elementos 

# include <iostream>
# include <conio.h> 

using namespace std;

void mostrarMatriz(int m[][3], int nFilas, int nCol);
void cuadrados(int m[][3], int nFilas, int nCol);
void mostrarCuadrados(int m[][3], int nFilas, int nCol);

int main()
{
    const int nFilas = 2;
    const int nCol = 3;
    int m[nFilas][nCol] = {{1, 2, 3}, {4, 5, 6}};

    mostrarMatriz(m, nFilas, nCol);
    cuadrados(m, nFilas, nCol);
    mostrarCuadrados(m, nFilas, nCol);

    getch();
    return 0;
}

void mostrarMatriz(int m[][3], int nFilas, int nCol)
{
    cout << "Mostrando matriz original:\n";
    for (int i = 0; i < nFilas; ++i)
    {
        for (int j = 0; j < nCol; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void cuadrados(int m[][3], int nFilas, int nCol)
{
    for (int i = 0; i < nFilas; ++i)
    {
        for (int j = 0; j < nCol; ++j)
        {
            m[i][j] = m[i][j] * m[i][j];
        }
    }
}

void mostrarCuadrados(int m[][3], int nFilas, int nCol)
{
    cout << "\nMatriz con elementos al cuadrado:\n";
    for (int i = 0; i < nFilas; ++i)
    {
        for (int j = 0; j < nCol; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
