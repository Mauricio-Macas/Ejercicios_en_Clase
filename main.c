/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int opcion, dia, mes, anio, dia1, mes1, anio1, resta,resta1,resta2,resta3;
    float a,b,c,x1=0,x2=0,base,alt,area=0;
    do
    {
    printf("Menu principal\n 1. Ecuacion Cuadratica\n 2. Area del triangulo\n 3. Calcular la edad\n");
    printf("Escoja la opcion\n");
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
    printf("ingrese el coeficiente a:\n");
    scanf("%f",&a);
    printf("ingrese el coeficiente b:\n");
    scanf("%f",&b);
    printf("ingrese el coeficiente c:\n");
    scanf("%f",&c);
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("el resultado de x1 es %.2f\n",x1);
    printf("el resultado de x2 es %.2f",x2);
    break;
    
    case 2:
    printf("ingrese la base\n");
    scanf("%f",&base);
    printf("ingrese la altura\n");
    scanf("%f",&alt);
    area = (base*alt)/2;
    printf("el area del triangulo es %.2f",area);
    break;
    case 3:
    printf("ingrese el dia actual:  ");
    scanf("%d",&dia);
    printf("ingrese el mes actual:  ");
    scanf("%d",&mes);
    printf("ingrese el anio actual: ");
    scanf("%d",&anio);
    printf("ingrese el dia de su cumpleanios:  ");
    scanf("%d",&dia1);
    printf("ingrese el mes de su cumpleanios:  ");
    scanf("%d",&mes1);
    printf("ingrese el anio de su cumpleanios: ");
    scanf("%d",&anio1);
    if (dia<dia1)
    {
        resta=(dia+30)-dia1;
        printf("el dia es %d",resta);
    }
    else if (dia>dia1)
    {
        resta1=(dia-dia1);
         printf("el dia es %d",resta1);
    }
    else if (mes<mes1)
    {
        resta2=(mes-mes1);
         printf("el mes es %d",resta2);
    }
    else
    {
        resta3=(anio-anio1);
         printf("el anio es %d",resta3);
    }
    
    break;
    
    case 4:
    exit(0);
    break;
    default:
    printf("opcion invalida");
    }
}while(opcion<=3);
        
    
}
