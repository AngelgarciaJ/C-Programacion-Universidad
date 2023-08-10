#include <iostream>
#include <vector>

using namespace std;

void pedirDatos(vector<int>& v1, vector<int>& v2);
void calcularCuadrados(const vector<int>& v, vector<int>& cuadrados);
void mostrarPruebaEscritorio(const vector<int>& v1, const vector<int>& v2, const vector<int>& cuadrados);

int main() {
    vector<int> v1, v2, cuadrados;

    pedirDatos(v1, v2);

    calcularCuadrados(v1, cuadrados);
    calcularCuadrados(v2, cuadrados);

    cout << "Cuadrados generados:\n";
    mostrarPruebaEscritorio(v1, v2, cuadrados);

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

void mostrarPruebaEscritorio(const vector<int>& v1, const vector<int>& v2, const vector<int>& cuadrados) {
    cout << "--------------------------------------------" << endl;
    cout << "|   n   |  v1[i]  |  v2[i]  |  cuadrados[i]  |" << endl;
    cout << "--------------------------------------------" << endl;

    int max_size = max(v1.size(), max(v2.size(), cuadrados.size()));

    for (int i = 0; i < max_size; i++) {
        cout << "|   " << i + 1 << "   |";

        if (i < v1.size())
            cout << "   " << v1[i] << "    |";
        else
            cout << "          |";

        if (i < v2.size())
            cout << "   " << v2[i] << "    |";
        else
            cout << "          |";

        if (i < cuadrados.size())
            cout << "      " << cuadrados[i] << "      |";
        else
            cout << "              |";

        cout << endl;
    }

    cout << "--------------------------------------------" << endl;
}

