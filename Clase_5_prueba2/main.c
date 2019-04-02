#include <stdio.h>
#include <stdlib.h>
#define cant 3

int main()
{
    int legajo [cant];
    int nota1 [cant];
    int nota2 [cant];
    int nota3 [cant];
    int i;
    int promedio=0;

    for(i=0;i<cant;i++)
    {
        printf("legajo:\n");
        scanf("%d", &legajo[i]);
        printf("nota1:\n");
        scanf("%d", &nota1[i]);
        printf("nota2:\n");
        scanf("%d", &nota2[i]);
        printf("nota3:\n");
        scanf("%d", &nota3[i]);
    }
    for(i=0;i<cant;i++)
    {
        printf("legajo: %d nota1: %d nota2: %d nota3 %d \n", legajo[i], nota1[i], nota2[i], nota3[i]);
        promedio=(nota1[i]+nota2[i]+nota3[i])/3;
        printf("promedio: %d \n",promedio);
    }
}
