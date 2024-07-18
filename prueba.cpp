#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Definición de la estructura Alumno
struct Alumno {
    char nombre[50];
    int edad;
    float promedio;
};

// Función para sumar los elementos de un arreglo de enteros
int sumaElementos(int* arr, int size) {
    int suma = 0;
    for (int i = 0; i < size; ++i) {
        suma += arr[i];
    }
    return suma;
}

// Función para convertir un string a minúsculas
void convertirMinusculas(char* str) {
    while (*str) {
        *str = tolower(*str);
        ++str;
    }
}

// Función para convertir un string a mayúsculas
void convertirMayusculas(char* str) {
    while (*str) {
        *str = toupper(*str);
        ++str;
    }
}

int main() {
    // 5.1 Asignación Dinámica de Memoria
    int size = 10;
    int* arr = new int[size]; // asignación dinámica de memoria

    // Asignar valores al arreglo
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1; // valores del 1 al 10
    }

    // Imprimir valores impares
    cout << "Valores impares: ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // 5.2 Uso de Punteros en Funciones
    cout << "La suma de los elementos es: " << sumaElementos(arr, size) << endl;

    // Liberar la memoria asignada
    delete[] arr;

    // 5.3 Paso de Parámetros por Referencia
    char str[] = "Hola Mundo!";
    convertirMinusculas(str);
    cout << "String en minusculas: " << str << endl;

    convertirMayusculas(str);
    cout << "String en mayusculas: " << str << endl;

    // 5.4 Definición y Manipulación Básica de Structs
    Alumno alumno;
    strcpy(alumno.nombre, "Juan Perez");
    alumno.edad = 20;
    alumno.promedio = 15.5;

    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Promedio: " << alumno.promedio << endl;

    return 0;
}
