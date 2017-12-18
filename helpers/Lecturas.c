#ifndef LECTURAS_C
#define LECTURAS_C

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void leerString(char *label, char *value){
  printf("Ingrese el valor de %s: ",label);
  scanf("%s", value);
}

void leerFlotante(char *label, float *value){
  printf("Ingrese el valor de %s: ", label);
  scanf("%f", value);

  }

void leerEntero(char *label, int *value){
  printf("Ingrese los datos del %s:", label);
  scanf("%d", value);
}

#endif
