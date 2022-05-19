/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 04/02/2022

tarea 1 programa que calculara el area de un rombo

*/

#include <stdio.h>

#include<math.h>

int main(){

float D, d, area ;

//entrada de datos

printf("ingrese el valor de la diagonal mayor (D): ");

scanf("%f", &D);

printf("ingrese el valor de la diagonal menor (d): ");

scanf("%f", &d);

//proceso

area=D*d/2;

//SALIDA

printf("el area del ROMBO es: %f",area);

return 0;

}
