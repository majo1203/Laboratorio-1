#include <stdio.h>
#include <stdlib.h>

int main()
{
char nombre[20];
fflush(stdin);
printf("Ingrese su nombre: ");
scanf("%s", &nombre[0]);
printf("\n El nombre es: %s", nombre);

return 0;
}
