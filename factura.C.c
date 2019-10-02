/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main ()
{
  char nombre[10], desP1[10], desP2[10];
  int cedula;
  float cantP1, cantP2, precioP1, precioP2, pVtaP1, pVtaP2, subtotal = 0, iva, total = 0;
  printf ("Ingrese el nombre del cliente:");
  scanf ("%s",nombre);
  printf ("Ingrese la cedula:");
  scanf ("%d",&cedula);
  printf ("DATOS DEL PRODUCTO 1\n");
  printf ("Ingrese la descripcion:");
  scanf ("%s",desP1);
  printf ("Ingrese la cantidad:");
  scanf ("%f", &cantP1);
  printf ("Ingrese el precio:");
  scanf ("%f", &precioP1);
  printf ("DATOS DEL PRODUCTO 2\n");
  printf ("Ingrese la descripcion:");
  scanf ("%s", desP2);
  printf ("Ingrese la cantidad:");
  scanf ("%f", &cantP2);
  printf ("Ingrese el precio:");
  scanf ("%f", &precioP2);
  pVtaP1 = cantP1 * precioP1;
  pVtaP2 = cantP2 * precioP2;
  subtotal = pVtaP1 + pVtaP2;
  iva = subtotal * 0.12;
  total = subtotal + iva;
  printf ("******Empresa OSITO******\n");
  printf ("Cliente: %s\n", nombre);
  printf ("Cedula:%d\n", cedula);
  printf ("Descripcion\tCantidad\tPrecio\tPVta\n");
  printf ("%s\t\t%.2f\t\t%.2f\t%.2f\n", desP1, cantP1, precioP1, pVtaP1);
  printf ("%s\t\t%.2f\t\t%.2f\t%.2f\n", desP2, cantP2, precioP2, pVtaP2);
  printf ("\t\t\t\tSubtotal:%.2f\n", subtotal);
  printf ("\t\t\t\tIva:%.2f\n",iva);
  printf ("\t\t\t\tTotal:%.2f\n",total);

}

