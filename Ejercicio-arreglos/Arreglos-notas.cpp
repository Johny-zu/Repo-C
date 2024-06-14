/* Programa que pedira 8 notas usando arreglos */
#include <iostream>

using namespace std;
int main(){
	float notas[8];
	float suma = 0;
	int espacio = sizeof(notas) / sizeof(notas[0]); //Calcula el tamño del arreglo
	for(int i=0;i < espacio;i++){
		cout<< "Dime la nota " << i+1 << endl;
		cin >> notas[i];
		suma += notas[i];
	}
	cout << "El promedio de las notas es: " << suma/espacio << endl;
}
