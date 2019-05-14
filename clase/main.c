#include <stdio.h>
#include <stdlib.h>

/*int main()
{
int* a;
int b, c;

b=15;
a=&b;
c=*a;

printf("\n %d a, %d b, %d c", a, b, c);
}*/

/*int main()
{
    int n[3]={1,2,3};
    int* puntero,i;
    puntero=n;
    for(i=0;i<3;i++)
    {
        printf("\n Con N: %d", n[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("\n con puntero: %d",*(puntero+i));
    }
}*/

/*int main()
{
    int n[3]={1,2,3};
    int* puntero,i;
    puntero=n;
    for(i=0;i<3;i++)
    {
        printf("\n Con N: %d", puntero[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("\n con puntero: %d",*(n+i));
    }
}*/

/*int main()
{
    int a;
    int* punteroInt;
    int** punteroPuntero;
    punteroInt=&a;
    punteroPuntero=&punteroInt;
    printf("\n con puntero: \n %d \n %d \n %d", a, punteroInt, punteroPuntero);
}*/
int funcion(int n[]);
int funcion2(int *n);
int main()
{
    int n[4]={1,2,3,4};

    funcion(n);
    funcion2(n);
}
int funcion(int n[])
{
    int i;
    for(i=0;i<4;i++)
    {
     printf("\n con array vectorial: %d", n[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("\n con array aritmetica de punteros: %d", *(n+i));
    }
}
int funcion2(int *n)
{
    int i;
    for(i=0;i<4;i++)
    {
     printf("\n con puntero vectorial: %d", n[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("\n con puntero aritmetica de punteros: %d", *(n+i));
    }
}
