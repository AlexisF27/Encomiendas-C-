#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "menus/MenuPrincipal.c"
#include "entidades/Vehiculo.c"
#include "entidades/Encomienda.c"

void leerFicheroEncomiendas(Encomienda encomiendas[]){
  int tamano;
  static const char filename[] = "./encomiendas.txt";
  FILE *file = fopen ( filename, "r" );
  if ( file != NULL )
  {
     char line [ 128 ];
     while ( fgets ( line, sizeof line, file ) != NULL )
     {
        tamano = tamanoEncomiendas(encomiendas);
        char *token = strtok(line, ",");
        encomiendas[tamano].numeroRegistro = atoi(token);
        token = strtok(NULL, ",");
        encomiendas[tamano].estadoEncomienda = atoi(token);
        token = strtok(NULL, ",");
        encomiendas[tamano].peso = atof(token);
        token = strtok(NULL, ",");
        //strncpy(encomiendas[tamano].destino.nombre, token, 10);
        encomiendas[tamano].destino.nombre = token;
        token = strtok(NULL, ",");

        encomiendas[tamano].fechaRegistro.dia = atoi(token);
        token = strtok(NULL, ",");
        encomiendas[tamano].fechaRegistro.mes = atoi(token);
        token = strtok(NULL, ",");
        encomiendas[tamano].fechaRegistro.ano = atoi(token);
        token = strtok(NULL, ",");

        encomiendas[tamano].fechaEntregaDevolucion.dia = atoi(token);
        token = strtok(NULL, ",");
        encomiendas[tamano].fechaEntregaDevolucion.mes = atoi(token);
        token = strtok(NULL, ",");
        encomiendas[tamano].fechaEntregaDevolucion.ano = atoi(token);
        token = strtok(NULL, ",");

        strncpy(encomiendas[tamano].observacion, token, 101);
     }
     fclose ( file );
  }
  else
  {
     perror ( filename );
  }
}

void leerFicheroVehiculos(Vehiculo vehiculos[]){
  int tamano;
  printf("~~~~~~~~~~~~~\n");
  static const char filename[] = "./vehiculos.txt";
  FILE *file = fopen ( filename, "r" );
  if ( file != NULL )
  {
     char line [ 128 ];
     while ( fgets ( line, sizeof line, file ) != NULL )
     {
        tamano = tamanoVehiculos(vehiculos);
        char *token = strtok(line, ",");
        strncpy(vehiculos[tamano].matricula, token, 7);
        token = strtok(NULL, ",");
        vehiculos[tamano].capacidad = atoi(token);
        token = strtok(NULL, ",");
        vehiculos[tamano].fechaFabricacion.dia = atoi(token);
        token = strtok(NULL, ",");
        vehiculos[tamano].fechaFabricacion.mes = atoi(token);
        token = strtok(NULL, ",");
        vehiculos[tamano].fechaFabricacion.ano = atoi(token);
        token = strtok(NULL, ",");
        vehiculos[tamano].estadoVehiculo = atoi(token);
     }
     fclose ( file );
  }
  else
  {
     perror ( filename );
  }
}

int main(){

  Vehiculo vehiculos[10];
  Encomienda encomiendas[100];

leerFicheroVehiculos(vehiculos);
leerFicheroEncomiendas(encomiendas);

  do{
    menuPrincipal(vehiculos, encomiendas);
  } while (1);

   return 0;
}
