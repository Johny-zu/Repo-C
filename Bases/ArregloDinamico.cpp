#include <iostream>
#include <string>
#include "stdio.h"

using namespace std;

int main()
{
    //punteros de los arreglos los empezamos vacios
    string* titulos = NULL;
    string* autores = NULL;

    //variables para trabajar
    string entrada;
    int espacio;
    
    cout << "Cuantos libros desea ingresar? ";
    cin >> espacio;

    //getline(cin, entrada); //ingresando el valor puesto

    //Declaramos los arreglos
    titulos = new string[espacio];
    autores = new string[espacio];

    cout << "Ingrese datos del libro: \n";
    for(int i = 0; i < espacio; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        cin >> titulos[i]; //No funciona con espacios
        //getline(cin, titulos[i]);
        cout << "Autor: ";
        cin >> autores[i]; //No funciona con espacios
        //getline(cin, autores[i]);
    }

    //Liberamos la memoria de ambos punteros
    delete [] titulos;
    delete [] autores;
    titulos = NULL;
    autores = NULL;

    return 0;
}

/*Los comentados se pueden usar pero en lo personal a mi no, quiza es error de como instale la terminal*/