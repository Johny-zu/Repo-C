#include<stdio.h>
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int op;
    float a = 0.0f, b = 0.0f, c = 0.0f; //inicializamos variables para poderlas meter al do while sin problemas
    std::string menu = "1.-Suma\n2.-Resta \n3.-Multiplicacion \n4.-Divicion \n5.-Salir"; //Ingresamos Strings

    do
    {
        std::cout << menu << std::endl; //Imprimimos String
        printf("Ingresa una opcion a realizar: ");
        scanf("%d",&op);
        switch (op)
        {
        case 1 : //suma
            printf("Escribe el primer valor: ");
            scanf("%f",&a); 
            printf("Escribe el segundo valor: ");
            scanf("%f",&b);
            c = a + b;
            printf("La suma de los numeros es: %.2f\n", c);
        break;
        case 2 : //resta
            printf("Escribe el primer valor: ");
            scanf("%f",&a); 
            printf("Escribe el segundo valor: ");
            scanf("%f",&b);
            c = a - b;
            printf("La resta de los numeros es: %.2f\n", c);
        break;
        case 3 : //Multiplicacion
            printf("Escribe el primer valor: ");
            scanf("%f",&a); 
            printf("Escribe el segundo valor: ");
            scanf("%f",&b);
            c = a * b;
            printf("La multiplicacion de los numeros es: %.2f\n", c);
        break;
        case 4 : //div
            printf("Escribe el primer valor: ");
            scanf("%f",&a); 
            printf("Escribe el segundo valor: ");
            scanf("%f",&b);
            c = a / b;
            printf("La division de los numeros es: %.2f\n", c);
        break;
        case 5 : printf("Saliendo..."); //Saliendo 
            break;
        default : printf("Ingrese una opcion valida");
            break;
        }
    } while (op != 5); ///!= significa diferente a
}