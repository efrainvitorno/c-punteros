#include <iostream>
using namespace std;

int main() {
    int tamaño;

    // Pedir al usuario el tamaño del arreglo
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tamaño;

    // Crear un arreglo dinámico de enteros
    int* arreglo = new int[tamaño];

    // Asignar valores al arreglo
    cout << "Asignando valores al arreglo..." << endl;
    for (int i = 0; i < tamaño; ++i) {
        arreglo[i] = i + 1; // Llenando con números del 1 al tamaño (ejemplo)
    }

    // Imprimir todos los valores del arreglo
    cout << "Valores del arreglo: ";
    for (int i = 0; i < tamaño; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Imprimir valores impares del arreglo
    cout << "Valores impares: ";
    for (int i = 0; i < tamaño; ++i) {
        if (arreglo[i] % 2 != 0) {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;

    // Liberar la memoria asignada dinámicamente
    delete[] arreglo;
    cout << "Memoria liberada." << endl;

    return 0;
}
