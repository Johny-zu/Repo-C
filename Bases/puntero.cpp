#include <stdio.h>
#include <iostream>

using namespace std;

int funcion(int valor, int incremento) {
    valor = valor + incremento; // Se le suma el incremento al valor recibido como argumento
    return valor;
}

int main() {
    int valor = 10;
    int incremento; // Incremento dinámico

    cout << "Ingrese un valor para sumar: ";
    cin >> incremento;

    cout << "Antes de funcion: " << valor << endl; // Imprime 10

    // Llamada a la función funcion, pasando el valor de numero y el incremento como argumentos
    int resultado = funcion(valor, incremento);

    cout << "Después de funcion: " << resultado << endl; // Imprime 15 (10 + incremento)

    return 0;
}
