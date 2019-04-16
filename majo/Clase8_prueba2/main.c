#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
ePersona per;
per=alta(per);
system("cls");

printf("%s %s %d %d \n", per.nombre, per.apellido, per.edad, per.isEmpty);

return 0;
}
