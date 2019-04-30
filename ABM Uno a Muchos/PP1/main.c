#include <stdio.h>
#include <stdlib.h>
#include "pp1.h"

int main()
{
eEmpleado lista[51];
eSector idSector[51];
eAlmuerzo legajoEmpleado[51];
eMenu codigoMenu[51];

int opcion;

do
{
        printf("\n 1. Empleado");
        printf("\n 2. Menu");
        printf("\n 3. Almuerzo")
        scanf("%d", opcion);
}switch (opcion)
{
    case 1:
do
{
        printf("\n 1. Dar de alta");
        printf("\n 2. Modificar");
        printf("\n 3. Baja");
        printf("\n 4. Listar");
        scanf("%d", opcion);
}switch (opcion)
{
    case 1:
            cargaEmpleado;
    break;
    case 2:
            modificarEmpleado;
    break;
    case 3:
            bajaEmpleado;
    break;
    case 4:
            listar;
    break;
}
    break;
    case 2:
do
{
        printf("\n 1. Dar de alta el menu");
        printf("\n 2. Modificar el menu");
        printf("\n 3. Dar de baja el menu");
        printf("\n 4. Listar el menu");
        scanf("%d", opcion);
}switch (opcion)
{
    case 1:
            altaMenu;
    break;
    case 2:
            modificarMenu;
    break;
    case 3:
            bajaMenu;
    break;
    case 4:
            listarMenu;
    break;
}
    break;
    case 3:
do
{
        printf("\n 1. Dar de alta el almuerzo");
        printf("\n 2. Baja");
        scanf("%d", opcion);
}switch (opcion)
{
    case 1:
            cargaAlmuerzo;
    break;
    case 3:
            bajaAlmuerzo;
    break;
}
}
}

