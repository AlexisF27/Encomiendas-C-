#ifndef ASIGNAR_VEHICULO_C
#define ASIGNAR_VEHICULO_C
#include "../entidades/Encomienda.c"
#include "../entidades/Vehiculo.c"


void asignarVehiculoEncomienda(Vehiculo vehiculos[], Encomienda encomiendas[]){
  int posicionVehiculo;
  int posicionEncomienda;
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
  printf("Ingrese la posicion del vehiculo con la que desea trabajar:");
  do {
    scanf("%d", &posicionVehiculo);
  } while(posicionVehiculo <= 0 || posicionVehiculo > tamanoVehiculos(vehiculos));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" );
  printf("Ingrese la posicion de la encomienda con la que desea trabajar:");
  do {
    scanf("%d", &posicionEncomienda);
  } while(posicionEncomienda <= 0 || posicionEncomienda > tamanoEncomiendas(encomiendas));

  asignarVehiculoAEncomienda(&encomiendas[posicionEncomienda - 1], vehiculos[posicionVehiculo - 1]);

}

#endif
