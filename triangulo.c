#include <stdio.h>
#include <math.h>

void hipotenusa()
{
    //Aqui se pide el valor del cateto opuesto y adyacente, para calcular la hipotenusa
        int co, ca;
        float h;
        printf("Escribe la longitud del cateto adyacente: ");
        scanf("%d",&ca);
        printf("Escribe la longitud del cateto opuesto: ");
        scanf("%d",&co);
        h = sqrt((co*co)+(ca*ca));
        //Es la operacion necesaria para la hipotenusa
        printf("La hipotenusa mide: %f",h);
}

void area()
{
    //Se pide dar la base y la altura del triangulo para calcular el area
        int base,alt;
        float a;
        printf("Escribe la base: ");
        scanf("%d",&base);
        printf("Escribe la altura: ");
        scanf("%d",&alt);
        a = base*alt/2;
        //Operacion para calcular la area
        printf("El area del triangulo es: %f",a);
}

void angulo()
{
    //Se solicita el valor de los dos angulos que posee el triangulo para calcular el tercero
        float a1,a2,a3;
        printf("Escribe el valor de los dos angulos: ");
        scanf("%f%f",&a1,&a2);
        a3 = 180-(a1+a2);
        //Operacion para calcular el tercer angulo
        printf("El tercer angulo mide: %f",a3);
}

int main ()
{
    //Se despliega un menu para que el usuario pueda elegir que hacer
        char opc;
        printf("\na)Hipotenusa de un triangulo rectangulo ");
        printf("\nb)Area de un triangulo ");
        printf("\nc)Tercer angulo de un triangulo ");
        printf("\nElige una opcion ");
        scanf("%c",&opc);
       
        switch(opc)
        {
        case 'a': hipotenusa();
                  break;

        case 'b': area();
                  break;

        case 'c': angulo();
                  break;
        }
        return 0;
}
