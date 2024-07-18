#include <iostream>
#include <cctype>
using namespace std;

// Función que recibe un puntero a un string y convierte todas las letras a mayúsculas
void convertirMayusculas(string* texto) {
    for (size_t i = 0; i < texto->length(); ++i) {
        (*texto)[i] = toupper((*texto)[i]);
    }
}

int main() {
    string texto;

    // Pedir al usuario que ingrese un texto
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    // Convertir el texto a mayúsculas usando la función
    convertirMayusculas(&texto);

    // Imprimir el texto modificado
    cout << "Texto en mayusculas: " << texto << endl;

    return 0;
}
