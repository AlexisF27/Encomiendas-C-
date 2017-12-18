#ifndef MENU_VEHICULO_C
#define MENU_VEHICULO_C

#include <stdio.h>
#include <stdlib.h>
#include "../entidades/Vehiculo.c"

void menuVehiculo(Vehiculo vehiculos[]){
   int opcion;
   Vehiculo vehiculo;
   int tamano = tamanoVehiculos(vehiculos);
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("\r              Vehiculos\n\n" );
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("Digite una de las siguientes opciones\n\n" );
   printf("1 => Insertar \n\n");
   printf("2 => Listar/Consultar \n\n");
   printf("0 => Regresar \n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );

   do {
      printf("Ingrese su opcion:");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 2) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n" );
      }
   } while(opcion < 0 || opcion > 2);

   switch (opcion) {
   case 1:
      vehiculo = leerVehiculo();
      if(validarMatriculaRepetida(vehiculos, vehiculo.matricula) == 1){
        vehiculos[tamano] = vehiculo;
      }
      break;
   case 2:
   for (int i = 0; i < tamano; i++) {
      imprimirVehiculo(vehiculos[i]);
   }

      break;
   case 0:
      printf("Me fui\n" );
      return;
   };

}

#endif
