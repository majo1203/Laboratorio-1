#include <stdio.h>
#include <stdlib.h>
#include "pp1.h"

typedef struct
{
    char apellido [51;
    char nombre [51];
    char sexo;
    float salario;
    int fechaIngreso;
    char sector;
}eEmpleado;

typedef struct
{
    int codigoAlmuerzo;
    int codigoMenu;
    int legajoEmpleado;
    int fecha;
}eAlmuerzo;

typedef struct
{
    int idSector;
    char descripcion[51];
}eSector;

typedef struct
{
  int codigoMenu;
  char descripcionMenu[51];
  int importeMenu;
}eMenu

void cargarEmpleado(eEmpleado lista[], eSector idSector[], eAlmuerzo legajoEmpleado[], eMenu codigoMenu[]);
