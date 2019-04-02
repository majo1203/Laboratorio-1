#include <stdio.h>
#include <stdlib.h>
#define cantidad 10

int main()
{
    int edad [10];
    int acumulador=0,i;
    for (i=0;i<cantidad;i++)
    {
        printf("edad:\n");
        scanf("%d",&edad[i]);
        acumulador+=edad[i];
    }
    for (i=0;i<cantidad;i++)
    {
        printf("%d ",edad[i]);
    }
}
