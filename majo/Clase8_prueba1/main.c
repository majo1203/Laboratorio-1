#include <stdio.h>
#include <stdlib.h>

struct persona
{
char apellido [31];
char nombre [31];
int edad;
int isEmpty;
};
int main()
{
struct persona per;

printf("\n Ingrese su nombre \n");
scanf("%s",per.nombre);
printf(" Ingrese su apellido \n");
scanf("%s",per.apellido);
printf("Ingrese su edad \n");
scanf("%d",&per.edad);

per.isEmpty=0;

printf("%s %s %d %d",per.nombre,per.apellido,per.edad,per.isEmpty);
}







