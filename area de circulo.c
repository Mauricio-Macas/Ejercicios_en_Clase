/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>//definicion de biblioteca
#include <math.h>
#define pi 3.1416  //defenicion de constante pi
void main()  //definicion de la funcion principal
{ //inicio 
    float radio, area; //declaracion de variables
    printf("ingrese ls cantidad"); //salida en la pantalla
    scanf ("%f",&radio); //lectura de una variable
    area = pi * pow(radio,2); //proceso
    printf("el area es: %f", area); //salida del valor de la variable
   
    return 0;
}//fin

