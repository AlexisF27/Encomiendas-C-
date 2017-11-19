#include <stdio.h>

void menuPrincipal() {
   int opcion;
   printf("\n^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" );
   printf("Instituto Politecnico de Leiria \n");
   printf("Proyecto numero uno - Encomiendas\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("Menu Principal \n\n" );
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("Digite cualquiera de las siguientes opciones:\n\n");
   printf("1 => Vehiculos \n");
   printf("2 => Encominedas \n");
   printf("0 => Salir \n\n");
   do {
      printf("Ingrese su opcion: ");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 2) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n");
      }
   } while(opcion < 0 || opcion > 2);

   switch (opcion) {
   case 1:
      printf("1\n");
      break;
   case 2:
      printf("2\n" );
      break;
   case 0:
      printf("0\n" );
      break;
   };
}
