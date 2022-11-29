#include <stdio.h>
#include <math.h>
#define M 100

//Esta es la funcion principal de la multiplicacion
int main ()
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
