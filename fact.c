#include <stdio.h>

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

int main()
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
