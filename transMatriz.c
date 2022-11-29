#include <stdio.h>
#include <math.h>
#define M 100
int main()
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

A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A

