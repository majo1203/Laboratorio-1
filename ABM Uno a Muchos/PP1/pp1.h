#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char apellido [51];
    char nombre [51];
    char sexo;
    float salario;
    char fechaIngreso;
    int legajo;
    char estado;
    int idSector;
}eEmpleado;

typedef struct
{
    int idSector;

    char descripcion[20];
    float valor;

}eSector;

typedef struct
{
    int codigoAlmuerzo;
    int codigoMenu;
    int legajoEmpleado;
    int fecha;
}eAlmuerzo;

typedef struct
{
  int codigoMenu;
  char descripcionMenu[51];
  int importeMenu;
}eMenu;

typedef struct
{
    eEmpleado legajo;
    eSector idSector;

    int cantHoras;

}eEmpleadoSector;

void mostrarEmpleado(eEmpleado, eSector[], int);
void cargarEmpleado(eEmpleado[]);
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado[],int);


