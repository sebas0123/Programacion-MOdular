#include <stdio.h>
#include <math.h>
//Inicia el programa con el main
int main()
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
