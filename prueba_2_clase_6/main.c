#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nombre [30];
   char apellido [30];
   char apellidonombre [60];

   printf("\nIngrese su nombre: ");
   scanf("%s",&nombre[0]);
   printf("\nIngrese su apellido: ");
   scanf("%s",&apellido[0]);
   strlwr(nombre);
   strlwr(apellido);
   nombre [0]=toupper(nombre [0]);
   apellido [0]=toupper(apellido [0]);
   strcpy(apellidonombre, apellido);
   strcat(apellidonombre, " ");
   strcat(apellidonombre, nombre);

   printf("\n%s\n", apellidonombre);
   //printf(" \n Su apellido es: %s ", apellido);

   return 0;
}





