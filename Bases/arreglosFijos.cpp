#include <iostream>

using namespace std;

int main()
{
    string arreglo[5] = {"uno", "dos", "tres", "cuatro", "Cinco"}; //declaramos el arreglo
    int arreglo2[] = {1,2,3,4,5,6}; //En caso de no espeficiar el tamaño este tomara la cantidad del corchete

    float vector4[5] = {10.5, 5.1, 8.9, 10, 95.2}; //Array con 5 elementos
    float numero5 = vector4[4]; //Para acceder al elemento 5, se usa el índice 4
    float primerNumero = vector4[0]; //Para el primer elemento se usa el índice 0

    //Para recorrer el vector es recemnadble usar for
    int limite = (sizeof(arreglo2) / sizeof(arreglo2[0]));
    for (int i = 0; i < limite; i++)
        cout << arreglo2[i] << endl;

    return 0;
}