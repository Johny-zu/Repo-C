#include <iostream>

using namespace std;

int main()
{
    int edades[3][2] = {{1,2},{9,8},{14,21}}; //filas y columnas
    int filas = (sizeof(edades)/sizeof(edades[0])); //darle limites a las filas
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0])); //darle limites a las columnas
    for (int i = 0; i < filas; i++)//lleamos las filas
    {
        for (int j = 0; j < columnas; j++) //llenamos las columnas
        {
            cout << edades[i][j] << endl;
        }
    }
}