#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero";
    cin >> numero;
    while (numero < 100)
    {
        cout << "Ingrese un nuevo numero";
        cin >> numero;
    } //Este para hasta que se le da un datalle en concreto
    return 0; // Sive para devolver u vaor de exito al SO
}