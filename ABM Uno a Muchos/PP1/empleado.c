#include "pp1.h"

void cargarEmpleado(eEmpleado lista[])
{
    int i;

    i = buscarLibre(lista, 51);
    if(i=-1)
    {
        printf("\n Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("\n Ingrese nombre: ");
        scanf("%s", &lista[i].nombre);
        printf("\n Ingrese sexo: ");
        scanf("%s", &lista[i].sexo);
        printf("Ingrese el sector de trabajo: ");
        scanf("%d", eEmpleadoSector.idSector);
        lista[i].estado = 'OCUPADO';

    }
    else
    {
        printf("No hay espacio");
    }
}

void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!='LIBRE')
        {
            mostrarEmpleado(lista[i], sectores, ts);
        }
    }
}
void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %4f %4f   %s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo,descripcionSector);

}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado=='LIBRE')
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = 'LIBRE';
    }
}


void modificar(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }
}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            lista[i].estado = 'LIBRE';

            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }
}

float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado=='OCUPADO')
        {

        }

    }



    return maximo;

}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        //if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        //{
        //mostrarEmpleado(lista[i]);

        //}
    }

}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado=='OCUPADO')
        {

        }
    }

    return contadorCarlos;
}


int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{

}


