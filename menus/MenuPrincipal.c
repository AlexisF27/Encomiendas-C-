#ifndef MENU_PRINCIPAL_C
#define MENU_PRINCIPAL_C

#include "MenuVehiculo.c"
#include "MenuEncomiendas.c"
#include "AsignarVehiculo.c"


void menuPrincipal(Vehiculo vehiculos[], Encomienda encomiendas[]){
   int opcion;
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("\t Proyecto numero uno - Encomiendas\n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("\t Menu Principal \n\n" );
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("Digite cualquiera de las siguientes opciones:\n\n");
   printf("1 => Vehiculos \n\n");
   printf("2 => Encominedas \n\n");
   printf("3 => Asignar vehiculo\n" );
   printf("0 => Salir \n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   do {
      printf("Ingrese su opcion: ");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 3) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n");
      }
   } while(opcion < 0 || opcion > 3);

   switch (opcion) {
   case 1:
      menuVehiculo(vehiculos);
      break;
   case 2:
      menuEncomiendas(encomiendas);
      break;
  case 3:
      asignarVehiculoEncomienda(vehiculos, encomiendas);
    break;
   case 0:
      printf("\nMuchas Gracias vuelva pronto\n");
      exit(0);
   };
}

#endif
