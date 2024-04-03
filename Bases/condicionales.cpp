#include <stdio.h>

int main(int argc, char const *argv[])
{
    float c1,c2,c3,c4; //Datos de entrada
    float suma, div; //Datos de salida

    printf("Ingrese la primera nota: ");
    scanf("%f",&c1);
    printf("Ingrese la primera nota: ");
    scanf("%f",&c2);
    printf("Ingrese la primera nota: ");
    scanf("%f",&c3);
    printf("Ingrese la primera nota: ");
    scanf("%f",&c4);

    suma = c1 + c2 + c3 + c4;
    div = suma / 4;

    if(div >= 70) //Al igual que en otros lenguajes, se puede ingresar if sin llaves en caso de solo tener una linea despues del if
    printf("Acredita con: %.2f\n", div);
    else if(div >= 60 && div < 70)
    printf("Tiene derecho a segunda oportunidad con: %.2f\n", div);
    else 
    printf("No acredita con: %.2f\n", div);
}