/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int p1, p2, p3, p4, p5,p6;   
int l1, l2, l3, l4, l5,l6;
int opcion2, opcion, cantidad; 
int total=0,total2=0; 
int i, num, sum=0, multi=0;
do{
printf("Menu principal\n 1. Boleteria\n 2. Numero perfecto\n 3. Salir\n");
printf("Escoja la opcion\n");
scanf("%d",&opcion);
switch(opcion)
{
  case 1:
  printf("precio localidad 1 :");
scanf("%d",&p1);
printf("precio localidad 2 :");
scanf("%d",&p2);
printf("precio localidad 3 :");
scanf("%d",&p3);
printf("precio localidad 4 :");
scanf("%d",&p4);
printf("precio localidad 5 :");
scanf("%d",&p5);
printf("precio localidad 6 :");
scanf("%d",&p6);
do
{
printf("\nElija la localidad: ");
scanf("%d",&opcion2);
printf("cantidad de boletos: ");
scanf("%d",&cantidad);
switch (opcion2)
{
case 1: l1=l1+ cantidad;
printf("numero de boletos localidad 1:%d\n",cantidad);
printf("total=%d",(p1*cantidad));
break;
case 2: l2=l2+ cantidad;
printf("numero de boletos localidad 2:%d\n",cantidad);
printf("total=%d",(p2*cantidad));
break;
case 3: l3=l3+ cantidad;
printf("numero de boletos localidad 3:%d\n",cantidad);
printf("total=%d",(p3*cantidad));
break;
case 4: l4=l4+ cantidad;
printf("numero de boletos localidad 4:%d\n",cantidad);
printf("total=%d",(p4*cantidad));
break;
case 5: l5=l5+ cantidad;
printf("numero de boletos localidad 5:%d\n",cantidad);
printf("total=%d",(p5*cantidad));
break;
case 6: l6=l6+ cantidad;
printf("numero de boletos localidad 6:%d\n",cantidad);
printf("total=%d",(p6*cantidad));
break;
default:
printf("el numero es invalido");
}
}
while (opcion2 !=0 && cantidad !=0);

printf("cantidad total localidad 1 %d:",l1);
printf("cantidad total localidad 2 %d:",l2);
printf("cantidad total localidad 3 %d:",l3);
printf("cantidad total localidad 4 %d:",l4);
printf("cantidad total localidad 5 %d:",l5);
printf("cantidad total localidad 6 %d:",l6);
total=(l1*p1)+(l2*p2)+(l3*p3)+(l4*p4)+(l5*p5)+(l6*p6);
printf("recaudacion total de boletos es %d\n=",total);

case 2:
	printf("Introduzca el numero que desee verificar si es perfecto: ");
	scanf("%d", &num);
	
	for(i=1; i<num; i++) {
		multi=num%i;
		if(multi==0) {
			sum+=i;
		}
	}
	if(sum==multi){
		printf("El numero %d es perfecto.\n", num);
	}
	else
	printf("El numero %d NO es perfecto.\n", num);
	break;
	case 3:
	exit(0);
    break;
    default:
	printf("el numero es invalido");
}
}while (opcion<=3);
} 
    
