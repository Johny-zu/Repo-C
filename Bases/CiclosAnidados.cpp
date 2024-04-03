#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[10][10];//declaramos limites para control de comportamiento

    //Ciclo para el relleno
    for(int i = 0; i < 10; i++) {//ciclo externo
        for(int j = 0; j < 10; j++){ //ciclo interno
            matriz[i][j] = (i +1)*(j + 1);//llenamos matriz
        }
    }

    //Ciclo para impresion
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){ 
           cout << matriz[i][j] << "\n";//Imprimimos de uno a uno
        }
    }

    return 0;
}
