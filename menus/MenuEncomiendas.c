#include <stdio.h>
#include <stdlib.h>

void menuEncomiendas (){
   int opcion;
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   printf("Encomiendas\n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   printf("Digite una de las siguientes opociones:\n");
   printf(" 1 => Insertar \n\n");
   printf(" 2 => Listar/Consultar \n\n");
   printf(" 3 => Eliminar encomiendas\n\n");
   printf(" 4 => Elegir otro destinon \n\n");
   printf(" 0 => Regresar\n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

   do {
      printf(" Dijite su opcion: ");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 4) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n" );
      }

   } while( opcion < 0 || opcion > 4);

   switch (opcion) {
   case 1:
      printf("1\n");
      break;
   case 2:
      printf("2\n");
      break;
   case 3:
      printf("3\n");
      break;
   case 4:
      printf("4\n");
      break;
   case 0:
      getchar();
   }
}
