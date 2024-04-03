#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string menu = "1.- For string \n2.- Cuenta regresiva \n3.- Contador \n4.- Salir";
    string cadena;
    int op;
    int contador = 0; // Inicializamos el contador

    do
    {
        std::cout << menu << std::endl; 
        printf("Ingrese una opcion del menu: ");
        scanf("%d",&op);
        switch (op)
        {
        case 1 : // For de cadenas 
                int n;
                printf("Ingrese el valor del ciclo: ");
                scanf("%d",&n);

                cout << "Ingrese una cadena de caracteres sin espacios en blanco: "; 
                cin >> cadena;
                cin.get(); // Sive para limpiar el buffer

                for(int i =0; i < n; i++) // puesto que solo es una linea de codigo va sin llaves
                    cout << " \n" << cadena;
                printf("\n"); // Salto de linea entre ciclos
            break;
        case 2 : // For de cuenta de numeros
            for(int i=5; i > 0; i--)
                cout << i << endl;
            printf("\n");
            break;
        case 3 : // For de contador
            contador = 0; // Reiniciamos el contador
            int nc;
            printf("Numero para encontrar sus divisores: ");
            scanf("%d",&nc);

            for(int i = 0; i <= nc; i++) {
                if(i%3  == 0) // Si el residuo es 0, es un múltiplo de 3
                    contador++;
            }
            printf("El numero de multiplos que se hallo fue de: ");
            cout << contador << endl;
            printf("\n");
            break;
        case 4 : printf("Saliendo...");
            break;
        default: printf("Ingrese una opcion correcta");
            break;
        }
    } while (op != 4);

    return 0;
}