/*Vualtas al array*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int numeros[10];
	srand(time(0));
	cout << "Arrey original: " << endl;
	for(int i = 0; i < 10; i++){
		numeros[i] = rand() % 100;
		cout << numeros[i] << " ";
	}
	int inverso[10];
	cout << endl << "Array al revez: ";
	for(int i = 0; i < 10; i++)
		inverso[9-i] = numeros[i];
	cout << endl;
	for(int i=0; i <10; i++)
		cout << inverso[i] << " ";
	return 0;
}
