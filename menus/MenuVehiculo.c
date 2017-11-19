#include <stdio.h>
#include <stdlib.h>

void menuVehiculo(){
   int opcion;
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("\nVehiculos\n" );
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   printf("Digite una de las siguientes opciones\n\n" );
   printf("1 => Insertar \n\n");
   printf("2 => Listar/Consultar \n\n");
   printf("0 => Regresar \n\n");
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

   do {
      printf("Ingrese su opcion:");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 2) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n" );
      }
   } while(opcion < 0 || opcion > 2);

   switch (opcion) {
   case 1:
      printf("\n 1\n");
      break;
   case 2:
      printf("2\n" );
      break;
   case 0:
      printf("Me fui\n" );
      return;
   };

}
