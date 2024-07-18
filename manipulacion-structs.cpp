#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Alumno
struct Alumno {
    string nombre;
    int edad;
    float promedio;
};

// Función para imprimir los detalles de un alumno
void imprimirAlumno(const Alumno& alumno) {
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Promedio: " << alumno.promedio << endl;
    cout << "----------------------------" << endl;
}

int main() {
    // Declaración y asignación de valores a varias variables de tipo Alumno
    Alumno alumno1;
    alumno1.nombre = "Juan Perez";
    alumno1.edad = 20;
    alumno1.promedio = 8.5f; // Definiendo un valor de tipo float

    Alumno alumno2;
    alumno2.nombre = "Maria Gomez";
    alumno2.edad = 22;
    alumno2.promedio = 9.2f; // Definiendo un valor de tipo float

    Alumno alumno3;
    alumno3.nombre = "Carlos Lopez";
    alumno3.edad = 19;
    alumno3.promedio = 7.8f; // Definiendo un valor de tipo float

    // Impresión de los valores de los campos de cada alumno
    imprimirAlumno(alumno1);
    imprimirAlumno(alumno2);
    imprimirAlumno(alumno3);

    return 0;
}
