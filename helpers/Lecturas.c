#ifndef LECTURAS_C
#define LECTURAS_C

#include <stdio.h>
#include <ctype.h>

// void leerStrinEntero(char *label, char *value, int *valor) {
//   printf("Ingrese dos letras y 4 numeros que van a pertenecer a la %s:",label);
//   scanf( "%s,%d",value,valor);
// }

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



// int FicheroEntero(int min, int max){
//
// }

#endif
