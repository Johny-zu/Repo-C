#include <iostream>
#include <string>

using namespace std;

int main() {
    const int n = 5; // Número máximo de libros

    // Declaración de un arreglo anidado para almacenar nombres de autores y títulos de libros
    string libros[n][2] = {
        {"Autor 1", "Título 1"},
        {"Autor 2", "Título 2"},
        {"Autor 3", "Título 3"},
        {"Autor 4", "Título 4"},
        {"Autor 5", "Título 5"}
    };

    // Mostrar los nombres de autores y títulos de libros almacenados en el arreglo
    cout << "Lista de libros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Libro " << i+1 << ": " << libros[i][1] << " (Autor: " << libros[i][0] << ")" << endl;
    }

    return 0;
}
