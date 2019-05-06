#include <stdio.h>
#include <stdlib.h>
#include "pp1.h"

int main()
{

    int opcion;
    int subOpcion;
    eEmpleado lista[51];
    eSector idSector[51];
    eAlmuerzo legajoEmpleado[51];
    eMenu codigoMenu[51];

    eSector sectores[3] = {{1,"Contabilidad",100},{2,"Sistemas",200},{3, "RRHH", 150}};

        printf("\n 1. Empleado");
        printf("\n 2. Menu");
        printf("\n 3. Almuerzo");
        printf("\n 10. Salir");

        printf("\n Ingrese una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            do
            {
                printf("\n 1. Alta");
                printf("\n 2. Modificacion");
                printf("\n 3. Baja");
                printf("\n 5. Salir");

                printf("\n Ingrese una opcion:");
                scanf("%d", &subOpcion);

                switch(subOpcion)
                {
                case 1:
                    cargarEmpleado(lista);
                    break;
                case 2:
                    mostrarListaEmpleados(lista, 3, sectores, 3);
                    break;
                case 3:
                    // Baja empleado.
                    break;
                }
            }
            while(subOpcion!=5);
            break;

        case 2:

            do
            {
                printf("\n 1. Alta");
                printf("\n 2. Modificacion");
                printf("\n 3. Baja");
                printf("\n 5. Salir");


                printf("\n Ingrese una opcion:");
                scanf("%d", &subOpcion);
                switch(subOpcion)
                {
                case 1:
                    // Alta menu.
                    break;
                case 2:
                    // Modificacion menu.
                    break;
                case 3:
                    // Baja menu.
                    break;
                }

            }
            while(subOpcion!=5);
            break;

        case 3:

            do
            {
                printf("\n 1. Alta");
                printf("\n 2. Modificacion");
                printf("\n 3. Baja");
                printf("\n 5. Salir");

                printf("\n Ingrese una opcion:");
                scanf("%d", &subOpcion);
                switch(subOpcion)
                {
               case 1:
                    // Alta Almuerzo.
                    break;
                case 2:
                    // Modificacion Almuerzo.
                    break;
                case 3:
                    // Baja Almuerzo.
                    break;
                }
            }
            while(subOpcion!=5);
            break;

        }
}

