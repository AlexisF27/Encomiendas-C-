
// #include <stdio.h>
#include "MenuVehiculo.c"
#include "MenuEncomiendas.c"
// #include <stdlib.h>

void menuPrincipal() {
   int opcion;
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("\t Proyecto numero uno - Encomiendas\n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("\t Menu Principal \n\n" );
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("Digite cualquiera de las siguientes opciones:\n\n");
   printf("1 => Vehiculos \n\n");
   printf("2 => Encominedas \n\n");
   printf("0 => Salir \n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   do {
      printf("Ingrese su opcion: ");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 2) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n");
      }
   } while(opcion < 0 || opcion > 2);

   switch (opcion) {
   case 1:
      menuVehiculo();
      break;
   case 2:
      menuEncomiendas();
      break;
   case 0:
      printf("\nMuchas Gracias vuelva pronto\n");
      exit(0);
   };
}
