//Mini proyecto final
//Recopilacion del progrma triangulo, cuadrado, conversines, suma de matrices, multiplicacion de matrices, transpuesta de matrices, factorizacion, salrio e impuestos
#include <stdio.h>
#include <math.h>
#define M 100
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

int triangulo ()
{
    //Se despliega un menu para que el usuario pueda elegir que hacer
        char opc1;
        printf("\na)Hipotenusa de un triangulo rectangulo ");
        printf("\nb)Area de un triangulo ");
        printf("\nc)Tercer angulo de un triangulo ");
        printf("\nElige una opcion ");
        scanf("%c",&opc1);
       
        switch(opc1)
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

//Programa de cuadrado******************************************************************************************************************

// Se le pide ingresar la longitud del lado de un cuadrado
void area4(){

int a, L;
printf("Escribe la longitud del lado del cuadrado: ");
    scanf("%d", &L);
    a = (L*L);
    //Aqui se aplica la operacion que es necesaria para calcular el area del cuadrado
    printf("El area del cuadrado: %d", a);
   
}

void perimetro4(){

int p, l;
printf("Escribe la longitud del lado del cuadrado: ");
scanf("%d", &l);
p = (4*l);
//Aqui se aplica la operacion que es necesaria para calcular el perimetro del cuadrado
printf("El perimetro del cuadrado: %d", p);

}
//Aqui es la seccion para el trapecio, en donde se solicita la base mayor y menor, asi como la altura para calcular el are
void area3(){

float a3, b, B, h3;
printf("Escribe la base mayor del trapecio: ");
    scanf("%f", &B);
    printf("Escribe la base menor del trapecio: ");
    scanf("%f", &b);
    printf("Escribe la altura del trapecio: ");
    scanf("%f", &h3);
    a3 = ((B+b/2)*h3);
    //Aqui se aplica la operacion que es necesaria para calcular el area de un trapecio
    printf("El area del cuadrado: %f", a3);
   
//Aqui se le pide al usuario indicar que es lo que desea hacer    
}


void area2(){
//Aquei se le solicita al usuario que ingrese la base y la altura del rectangulo, parea posteiormente hacer la operacion para calcular el area que es b*h
float a2, b2, h2;
printf("Escribe la base del rectangulo: ");
    scanf("%f", &b2);
    printf("Escribe la altura del rectangulo: ");
    scanf("%f", &h2);
    a2 = (b2*h2);
    //Operacion para calcular el area
    printf("El area del rectangulo es: %f", a2);
   
}
//Se necesita ingresar una ves mas los datos de la base y la altura
void perimetro2()
{

float p2, b2, h2;
printf("Escribe la base del lado del rectangulo: ");
scanf("%f", &b2);
    printf("Escribe la altura del rectangulo: ");
    scanf("%f", &h2);
p2 = (2*b2+2*h2);
//Es la operacion que se necesita para calcular el perimetro
printf("El perimetro del rectangulo es: %f", p2);
}

//Aqui se le solicita al al usuario especificar que quiere hacer entre area o perimetro del, cuadrado, rectangulo o el area del trapecio
int cuadrado ()
{
        char opc2;
        printf("\na) area de un cuadrado: ");
        printf("\nb) perimetro de un cuadrado: ");
        printf("\nc) area de un trapecio: ");
        printf("\nd) area de un rectangulo: ");
        printf("\ne) perimetro de un rectangulo: ");
        printf("\nElige una opcion: ");
        scanf("%c", &opc2);

       
switch(opc2)
        {
                case 'a': area4();
                        break;

                case 'b': perimetro4();
                        break;
       
                case 'c': area3();
                        break;
                       
                case 'd': area2();
                        break;

                case 'e': perimetro2();
                        break;

        }
        return 0;
}


// Progrma de conversion**************************************************************************************************************
void farenheit(){
float c, f;
printf("Los grados celcius a convertir:  ");
//Se te solicita introducir los grados celcius que quieres convertir
    scanf("%f", &c);
    f = (c*(1.8)+32);
    //Esta es la opetracion que se necesita para conertir los celsius a farenheit
    printf("Los grados farenheit son: %f", f);
}

void kelvin (){
float c, k;
printf("Los grados celcius a convertir:  ");
//Se te solicita introducir los grados celcius que quieres convertir
    scanf("%f", &c);
    k = (c+273.15);
    //Esta es la opetracion que se necesita para conertir los celsius a kelvin
    printf("Los grados kelvin son: %f", k);
}

void rankine(){
float c, r;
printf("Los grados celcius a convertir:  ");
//Se te solicita introducir los grados celcius que quieres convertir
    scanf("%f", &c);
    r = (((9/5)*c)+491.67);
    //Esta es la opetracion que se necesita para conertir los celsius a rankie
    printf("Los grados rankie son: %f", r);
}

int conversion()
{
    //Aqui se depliega un menu para que el usuario pueda elegir que hacer
char opc3;
printf("\na) De grados celcius a farenheit: ");
    printf("\nb) De grados celcius a kelvin: ");
    printf("\nc) De grados celcius a rankine: ");
printf("\nElige una opcion: ");
    scanf("%c", &opc3);
   
    switch (opc3)
{
            case 'a': farenheit();
                        break;

            case 'b': kelvin();
                        break;
            case 'c': rankine();
                        break;
}
return 0;
}

//Progrma de suma de matrices *************************************************************************************************************************************

//Aqui declaramos que la dimension de la matriz puede tener la dimension que se quiera, pero que no sobre pase de 10x10
void matrizcoe(int t,int a[][10], int b[][10])
{
    for (int i=0; i<t; i++)
    {
    for (int j=0; j<t; j++)
        {
            //Ahora se le pide al usuario introducir los numeros que conforman a la matriz
    printf("Introduce el valor del la coordenada [%i],[%i] en la matriz a: ",i, j);
    scanf ("%i", &a[i][j]);
    printf("Introduce el valor del la coordenada [%i],[%i] en la matriz b: ",i, j);
    scanf ("%i", &b[i][j]);
         }
    }
}

//Aqui se declara la operacion que se realiza para la suma de las matrices
void sumacoe(int t,int a[][10], int b[][10], int c[][10])
{
    for (int i=0; i<t; i++)
    {
        for (int j=0; j<t; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
 //Aqui le pedimos al usuario indicar de que dimension quiere la matriz, ademas de que imprime el resultado de la suma
int matrizsuma()
{
    int t, a[10][10], b[10][10], c[10][10];
    printf ("¿De que magnitud quieres tu matriz cuadrada resultante?");
    scanf ("%i", &t);
    matrizcoe(t,a,b);
    sumacoe(t, a, b, c);
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
    printf ("%i\t", c[i][j]);
        }
printf("\n");
    }
return 0;
}

// Progrma de multiplicacion de matrices ***********************************************************************************************************

//Esta es la funcion principal de la multiplicacion
int multimatrices ()
{
    //Aqui declaramos la matris a,b,c,t
    int a[M][M], b[M][M], c[M][M], t[1];
   
    dimension(t); //Aqui estan para cuando sean llamados por el void dentro del programa
    valormatr(a,b,t);
    multimatriz(a,b,c,t);
   
    return 0;
}

void dimension(int t[])
{
    //Aqui se pide determinar la dimension de la matriz
    printf("De que dimension seran las 3 matrices: ");
    //Se guarda en la matriz
    scanf("%i", &t[0]);
}

void valormatr(int a[][M], int b[][M], int t[])
{
    //se llaman las variables declaradas en el int multimatriz
    int i;
    for(i=0; i<t[0]; i++)
    //recorrido de filas
    {
    int j;
    for(j=0; j<t[0]; j++)
    //recorrido de columnas
    {
    printf("Ingrese el valor de [%i][%i] en A: ", i, j); //se ingresa en la matriz c
    scanf("%i", &a[i][j]); //se guardan los datos
    }
    }
       
        for(i=0; i<t[0]; i++) //se ingresa todo en la matriz b
        {
            int j;
             for(j=0; j<t[0]; j++)
             {
                 printf("Ingresa el valor de [%i][%i] en B: ", i, j);
                 scanf("%i", &b[i][j]); //Se guarda dato a dato
             }
        }
}

void multimatriz(int a[][M], int b[][M], int c[][M], int t[])
//Se llaman las variables declaradas en el main aparte de unas constantes M desiganada en las bibliotecas
{
    printf("A*B=C\n"); //Es la opracion a realizar
    int i; //Se usa el for para el acomodo correcto de las matrices
    for(i=0; i<t[0]; i++)
    {
        int j;
    for(j=0; j<t[0]; j++) //Todas las matrices neceitan 2 for, uno para las filas y otro para las columnas
    {
        int x=0; //se declara una nueva variable
        for(int k=0; k<t[0]; k++)
        //La k es declarada para la matriz resultante
        {
            x=a[i][k]*b[k][j];
            //Es la operacion para la multiplicacion
            c[i][j]=x;
            //como la opercion anterior se guarda en x la igualamos a la forma matricial correcta
           
        }
        printf("%i\t", c[i][j]);
        //Es la forma correcta de imprimir
    }
    printf("\n");
    }
}

// Progrma de trasnpuesta de matrices ******************************************************************************************************************

int transmatrices()
{
    int filas, columnas; //se declara 2 variables como entero
    int a[10][10],b[10][10]; //se declaran 2 matrices
    printf("Ingresa el numero de filas para la matriz A: ");
    scanf("%i",&filas);
    //Se indica cuantas filas usaremos
    printf("\n");
    printf("Ingresa el numero de columnas para la matriz A: ");
    scanf("%i",&columnas);
    //se determina cuantas columnas usaremos
    printf("\n");
    valor(a,filas,columnas);
    //Se mandan a llamar estas funciones
    transp(a,b,filas, columnas);
    return 0;
}

void valor(int a[][10], int filas, int columnas)
//Se mandan a llamar las variables declaradas en el int matriztrans
{
    int i;
        for(i=0;i<filas;i++) //Acomodo de filas en matriz a
        {
            int j;
                for(j=0;j<columnas;j++) //Acomodo de columnas en matriz a
                {
                     printf("Ingrese el valor [%i][%i] de la matriz A: ",i,j);
                     //El acomodo correspondiente
                     scanf("%i",&a[i][j]);
                }
         
        }
      printf("La matriz A se definio como: \n");
           for(i=0;i<filas;i++)
           //acomodo de filas de la matriz b
           {
               int j;
               for(j=0;j<columnas;j++)
               //Acomodo de columnas a la matriz b
               {
                   printf("%i\t",a[i][j]);
               }
               printf("\n");
           }
}

void transp(int a[][10], int b[][10], int filas, int columnas)
// Se manda a llamar a las matrices declaradas en el main
{
    printf("La matriz A es igual a: \n");
    //Se nos muestra la matriz transpuesta
    int i;
        for(i=0;i<columnas;i++)
           //acomodo de las columnas
           {
               int j;
               for(j=0;j<columnas;j++)
               //Acomodo de filas
               {
                   b[i][j]=a[j][i];
                   //se indica como se intercambian los valores de las filas por las matrices
                   printf("%i\t",b[i][j]);
                   //se imprime la transpuesta
               }
               printf("\n");
                   
            }
           
}

// Progrma de factorial *********************************************************************************************************************************

int factorial(int n)
{
    //Aqui se declaran condiciones, de que si n es igual a 0 el resultado sera 1, pero si no es asi continuara con el proceso de la factorizacion
    int f;
    if (n==0) f=1;
    //Condicion
    else
    f=n*factorial(n-1);
    return f;
}

int fac ()
{
    //Aqui se solicita que el usuario integre el numero que se factorizara
    int fact;
    int n;
    //Se declara la n
    printf("\n Dame un numero: ");
    scanf("%d", &n);
    fact=factorial(n);
    //aqui se aplica la formula que ya tenemos
    printf("\n El factorial=%d \n", fact);
    //Se imprime el resultado de la factorizacion
    return 0;
}

//Progrma de salario ************************************************************************************************************************************************************

//Inicia el programa con el main
int salario()
{
//Declaro las variables de las horas y el salrio, asi como el salrio con el IVA.
float
salario,salarioPorDia,salarioMasIva,salarioMenosIva2,salarioPorMes,salarioExtra,horas;
 
//Se le solicita al usuario ingresar los datos de su sueldo y sus horas laborales
printf("Ingresa tu sueldo por hora:");
scanf("%f",&salario);
printf("\nIngresa tus horas laborales por dia");
scanf("%f",&horas);
//Calculamos el sueldo diario
salarioPorDia=salario*horas;
printf("\nSu salario por dia es: %f",salarioPorDia);
 
//Calculamos el sueldo con el 16%
salarioMasIva= salarioPorDia*1.16;
printf("\nSu salario diario mas el 16 porciento de IVA es: %f",salarioMasIva);
 
//Calculamos el sueldo menos el 12%
salarioMenosIva2=salarioMasIva*.88;
printf("\nSu salario por dia menos el 12 porciento de IVA es: %f",salarioMenosIva2);
 
//salario por 20 dias, se restan o no se incluyen los fines de semana
salarioPorMes=salarioMenosIva2*20;
printf("\nSu salario por mes es: %f", salarioPorMes);
 
//si el salario es menor a 10000 se le suma un bono del 5%
if(salarioPorMes<10000)
{
salarioExtra=salarioPorMes*1.05;
printf("\nSe ganó un bono de 5 por ciento y su salario quedo en: %f",salarioExtra);
}else
printf("\nTiene un buen sueldo");
 
return 0;
}

       
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
