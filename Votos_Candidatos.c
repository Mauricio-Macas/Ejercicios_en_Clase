/******************************************************************************

Los organizadores de un acto electoral solicitaron realizar un programa para 
manejar el conteo de votos. En la eleccion hay cinco candidatos, los cuales se
representan con los valores comprendidos entre 1 y 5. El programa debe obtener 
el numero de votos de cada candidato y el porcentaje que obtuvo respecto al 
total de los votantes. Se ingresa los votos  de manera desordenada, el final de
ingreso de los votos se representa por un cero.

Ejemplo

 INGRESO DE VOTOS:

2 5 5 4 3 5 1 2 4 3 1 2 4 5 0

2 representa un voto para el candidato2

5 representa un voto para el candidato5

4 representa un voto para el candidato4
*******************************************************************************/
#include <stdio.h>

void main()
{
    int voto1=0,voto2=0,voto3=0,voto4=0,voto5=0,voto,totalVotos=0;
    float porcV1=0,porcV2=0,porcV3=0,porcV4=0,porcV5=0;
    printf("Ingrese su voto:");
    scanf("%d",&voto);
    if(voto==1)
         voto1++;
    else if (voto==2)
         voto2++;
    else if (voto==3)
         voto3++;
    else if (voto==4)
         voto4++;
    else if (voto==5)
         voto5++;
    totalVotos=voto1+voto2+voto3+voto4+voto5;
    porcV1=(voto1/totalVotos)*100;
    porcV2=(voto2/totalVotos)*100;
    porcV3=(voto3/totalVotos)*100;
    porcV4=(voto4/totalVotos)*100;
    porcV5=(voto5/totalVotos)*100;
    printf("Votos Candidato1 %d tiene un porcentaje %.2f\n",voto1,porcV1);
    printf("Votos Candidato2 %d tiene un porcentaje %.2f\n",voto2,porcV2);
    printf("Votos Candidato3 %d tiene un porcentaje %.2f\n",voto3,porcV3);
    printf("Votos Candidato4 %d tiene un porcentaje %.2f\n",voto4,porcV4);
    printf("Votos Candidato5 %d tiene un porcentaje %.2f\n",voto5,porcV5);
}
