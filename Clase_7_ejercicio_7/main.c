#include <stdio.h>
#include <stdlib.h>

int main()
{
   for (i=0; i<cant;i++)
   {
       estado[i]=0;
   }
   do
    {
    system("cls");
    printf("1.Alta, 2.Baja, 3.Estado");
    scanf("%d",&variable);
    switch(variable)
    {
    case 1:
        function(legajo, apellido, nombre, edad);
    break;
    case 2:
        function
    break;
    }
    //void baja(int legajo[], int estado[], int cantidad)
    //{
    //char(respuesta)
    //int legajoAux, i, flag=0;
    //printf("legajo a buscar");
    //scanf("%d",&legajoAux);
    //for(i=0;i<cantidad;i++)
    //{
    //if (legajo[i]==legajoAux)
    //{
    //printf("%d; legajo[i]);
    //do}
    //{
    //printf("dar de baja el registro s/n");
    //fflush(stdin);
    //scanf("c",&respuesta);
    //respuesta=toupper(respuesta);
    //while(respuesta!='s' && respuesta !='n');
    //}
    /*}
    }
    */
    //if (respuesta=='s'
          /*{
            estado[i]=0;
            break;
          }*/
          //else
          /*{
             printf("No se elimino el registro");
          }*/
          /*if (flag==0)
          {
          printf("legajo inexistente");
          }*/
          }

    }
    }








    return 0;
}
