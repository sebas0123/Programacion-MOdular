#include <stdio.h>
int main () {
char opc;
printf("Elija una opcion de programa: ");
printf("\na) programa triangulo ");
printf("\nb) programa cuadrado ");
printf("\nc) programa conversion ");
printf("\nd) progrma suma de matrices ");
printf("\ne) progrma multiplicacion de matrices ");
printf("\nf) progrma de matrices transpuestas ");
printf("\ng) progrma de factorizacion ");
printf("\nh) progrma de salario ");
scanf("%c", &opc);
getchar();

switch(opc)
{
case 'a': triangulo();
break;
case 'b': cuadrado();
break;
case 'c': conversion();
break;
case 'd': matrizsuma();
break;
case 'e': multimatrices();
break;
case 'f': transmatrices();
break;
case 'g': fac();
break;
case 'h': salario();
break;
}
return 0;
}




