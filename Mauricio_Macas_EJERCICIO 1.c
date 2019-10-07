/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>  //escriba las librerias 

int main() //se escribe la funcion principal 
{ // inicio

    float celsius,faren;  // escribe las variables 

    printf("Escriba los grados Celsius\n");  // se imprime la frase 
    scanf("%f",&celsius);  // se lee la variable

    faren = (1.8*celsius)+32;  // se escribe la formula para convertir los grados

    printf("%.2f celcius son %.2f Fahrenheit",celsius,faren); // se imprime el resultado 

} // fin
