#include<stdio.h>
#include<cmath>

main()
{
    int num1, num2; //ingreso de valores int
    float num3, num4; //Ingreso de valores flotantes
    float suma, resta, div, mul, ex, raiz; //Ingreso de donde guardar los datos
    printf("Escribe el primer valor: ");
    scanf("%d",&num1); //aqui se aceptan los valores, los tipo int pueden ser %d o %i

    printf("Escribe el segundo valor: ");
    scanf("%d",&num2);

    printf("Escribe el primer valor: ");
    scanf("%f",&num3); //al ser float se usa %f

    printf("Escribe el segundo valor: ");
    scanf("%f",&num4);

    suma = num1 + num2 + num3 + num4; //suma completa
    resta = num1 + num2 + num3 + num4; //resta completa
    div = suma /4; //division para promedio
    mul = num1 * num3; //multiplicacion de dos numeros
    ex = pow(num2,2); //elevar un numero a un exponente
    raiz = sqrt(ex); //Regresamos el numero elevado a la normalidad

    printf("La suma de los numeros es: %.2f\n",suma);
    printf("La resta de los numeros son: %.2f\n",resta);
    printf("El promedio de los numeros es: %.2f\n", div);
    printf("La multiplicacoin del numero uno y tres es: %.2f\n", mul);
    printf("El el numero al cuadrado del numero 2 es: %.2f\n", ex);
    printf("la raiz del cuadrado es: %.2f\n", raiz);
}