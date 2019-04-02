#include <stdio.h>
#include <stdlib.h>
#define cant 5

int main()
{
    int datos[cant];
    int max, min;
    int i=0;


    for(i=0; i< cant; i++)
    {
    printf("Ingrese el primer valor: \n");
    scanf("%d",&datos[i]);

        if (i==0 || datos [i] > max)
        {
            max=datos[i];
        }
        if (i==0 || datos[i] < min)
        {
            min=datos[i];
        }
    }
    printf("El valos max %d y el valor min %d", max, min);
}
