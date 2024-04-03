#include <iostream>
 using namespace std;

 int main()
 {
    char titulos[5];
    char autores[5];

    cout << "Ingrese los siguientes datos de los libros: \n";
    for(int i = 0; i < 5; i++)
    {
        cout << "\n libro " << (i+1) <<": \n";
        cout << "Titulo: ";
        cin >> titulos[i];
        cout << "autor: ";
        cin >> autores[i];
    }

    return 0;
 }