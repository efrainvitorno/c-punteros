#include <iostream>
using namespace std;

// Función que recibe un puntero a un arreglo de enteros y calcula la suma de todos los elementos
int sumarElementos(int* arreglo, int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; ++i) {
        suma += arreglo[i];
    }
    return suma;
}

int main() {
    int tamaño;

    // Pedir al usuario el tamaño del arreglo
    cout << "Ingrese el tamaNo del arreglo: ";
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

    // Calcular la suma de los elementos del arreglo
    int suma = sumarElementos(arreglo, tamaño);
    cout << "La suma de todos los elementos del arreglo es: " << suma << endl;

    // Liberar la memoria asignada dinámicamente
    delete[] arreglo;
    cout << "Memoria liberada." << endl;

    return 0;
}
