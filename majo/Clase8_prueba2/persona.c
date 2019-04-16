#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
//funciones de los prototipos

ePersona alta (ePersona per)
{
printf("\n Ingrese su nombre \n");
scanf("%s",per.nombre);
printf(" Ingrese su apellido \n");
scanf("%s",per.apellido);
printf("Ingrese su edad \n");
scanf("%d",&per.edad);

per.isEmpty=0;

return per;

}

