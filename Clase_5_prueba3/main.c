#include <stdio.h>
#include <stdlib.h>
#define MAX 2

void main(void)

{
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;
    int contador=0;

    for(i=0;i<MAX;i++)
{
    edad[i]=0;
    sueldo[i]=0;
}
    do
{
    printf("Ingrese Legajo ");
    scanf("%d",&leg);
    printf("Ingrese Edad ");
    scanf("%d",&edad[leg-1]);
    printf("Ingrese el sueldo ");
    scanf("%f",&aux);
    sueldo[i]=aux;
    suma=suma+sueldo[i];
    printf("Desea ingresar otro dato S/N? ");
    fflush(stdin);
    scanf("%c",&seguir);
    contador++;

}while(seguir=='s');

    prom=suma/contador;

    printf("El sueldo promedio es: %f \n",prom);

}
