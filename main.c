#include <stdio.h>
#include "menus/MenuPrincipal.c"
#include "entidades/Vehiculo.c"
#include "entidades/Encomienda.c"

int main(){

  Vehiculo vehiculos[10];
  Encomienda encomiendas[100];

  do{
    menuPrincipal(vehiculos, encomiendas);
  } while (1);

   return 0;
}
