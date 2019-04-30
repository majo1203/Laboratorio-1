#include <stdio.h>
#include <stdlib.h>
#include "pp1.h"

void cargarEmpleado(eEmpleado lista[], eSector idSector[], eAlmuerzo legajoEmpleado[], eMenu codigoMenu[])
{
    int i;

    i=buscarlista(lista);

if (lista[i].isEmpty == 1)
{
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("\n Ingrese su apellido");
    scanf("%s", apellido.eEmpleado);
    printf("\n Ingrese su nombre");
    scanf("%s", nombre.eEmpleado);
    printf("\n Ingrese su sexo");
    scanf("%s", sexo.eEmpleado);
    printf("\n Ingrese su salario");
    scanf("%d", salario.eEmpleado);
    printf("\n Ingrese su fecha de ingreso");
    scanf("%d", fechaIngreso.eEmpleado);
    printf("\n Ingrese su sector");
    scanf("%s", salario.eEmpleado);

    lista[i].estado = OCUPADO;
}else
    printf("\n No hay espacio");

void listar(eEmpleado lista[], int tam, eSector sectores[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], sectores);
        }
    }
}




}
