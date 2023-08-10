// 34.b 
// ingresar dos vectores de tamano diferente, en un vector generar 
//los cuadaros del vector v1 y v2 , el tercero debe conener los cuadaros para mostrar en pantalla 

#include <iostream>
#include <vector>

using namespace std;

void pedirDatos(vector<int>& v1, vector<int>& v2);
void calcularCuadrados(const vector<int>& v, vector<int>& cuadrados);
void mostrarVector(const vector<int>& vec);

vector<int> v1, v2, cuadrados;
int main() {
    

    pedirDatos(v1, v2);

    calcularCuadrados(v1, cuadrados);
    calcularCuadrados(v2, cuadrados);

    cout << "Cuadrados generados: ";
    mostrarVector(cuadrados);

    return 0;
}

void pedirDatos(vector<int>& v1, vector<int>& v2) {
    int n1, n2, num; 

    cout << "Ingrese la cantidad de elementos del primer vector: ";
    cin >> n1;

    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < n1; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> num;
        v1.push_back(num);
    }

    cout << "Ingrese la cantidad de elementos del segundo vector: ";
    cin >> n2;

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < n2; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> num;
        v2.push_back(num);
    }
}

void calcularCuadrados(const vector<int>& v, vector<int>& cuadrados) {
    for (int i = 0; i < v.size(); i++) {
        int cuadrado = v[i] * v[i];
        cuadrados.push_back(cuadrado);
    }
}

void mostrarVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
