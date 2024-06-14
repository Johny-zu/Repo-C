/*Contadores en array*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	int numeros[100];
	srand(time(0));
	for(int i = 0; i < 100; i++){
		numeros[i] = rand() % 100;
	}

	int numeroBuscado;
	do {
		cout << "Ingrese un numero a buscar entre el 1 y el 100: " << endl;
		cin >> numeroBuscado;
		if (numeroBuscado > 100 || numeroBuscado < 1)
		{
			cout << "El numero ingresado no es valido" << endl;
		}
	} while(numeroBuscado > 100 || numeroBuscado < 1);
	int contador = 0;
	for(int i = 0; i < 100; i++){
		if(numeros[i] == numeroBuscado){
			contador++;
		}
	}
	cout << "El numero " << numeroBuscado << " se repite " << contador << " veces" << endl;
	return 0;
}
