#ifndef MENU_ENCOMIENDAS_C
#define MENU_ENCOMIENDAS_C

#include <stdio.h>
#include <stdlib.h>
#include "../entidades/Encomienda.c"

void menuEncomiendas(Encomienda encomiendas[]){
   int opcion;
   Encomienda encomienda;
   int tamano = tamanoEncomiendas(encomiendas);
   printf("~~~~~~~~~~~~~~~~~~~\n");
   printf("%d\n", tamano);
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("\r            Encomiendas\n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   printf("Digite una de las siguientes opociones:\n");
   printf(" 1 => Insertar \n\n");
   printf(" 2 => Listar/Consultar \n\n");
   printf(" 3 => Eliminar encomiendas\n\n");
   printf(" 4 => Elegir otro destinon \n\n");
   printf(" 0 => Regresar\n\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
   do {
      printf(" Dijite su opcion: ");
      scanf("%d", &opcion);
      if (opcion < 0 || opcion > 4) {
         printf("La opcion es invalida vuelva a ingresar su opcion \n\n" );
      }

   } while( opcion < 0 || opcion > 4);

   switch (opcion) {
   case 1:
      encomienda = leerEncomienda();
      if(validarEncomiendaRepetida(encomiendas, encomienda.numeroRegistro) == 1){
        encomiendas[tamano] = encomienda;
      }
      break;
   case 2:
    for(int i = 0; i < tamano; i++){
        imprimirEncomienda(encomiendas[i]);
    }
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
#endif
