/*Mayor y menor en un array*/
#include <iostream>
using namespace std;
int main(){
	float numeros[5], menor, mayor;
	for (int i = 0; i < 5; i++){
		cout << "Dime un numero: " << endl;
		cin >> numeros[i];
		if(i == 0){
		menor = numeros[i];
		mayor = numeros[i];
		}
		if (numeros[i] < menor)
			menor = numeros[i];
		if (numeros[i] > mayor)
			mayor = numeros[i];
	}
	cout << "El mayor es: " << mayor << " y el menor: " << menor << endl;
	return 0;
}
