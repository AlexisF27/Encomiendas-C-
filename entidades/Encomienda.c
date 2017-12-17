#ifndef ENCOMIENDA_C
#define ENCOMIENDA_C

#include "../helpers/EstadoEncomienda.c"
#include "Ciudad.h"
#include "Fecha.c"



typedef struct encomienda {
        int numeroRegistro;
        EstadoEncomienda estadoEncomienda;
        float peso;
        Ciudad destino;
        Fecha fechaRegistro;
        Fecha fechaEntregaDevolucion;
        char observacion [100];
} Encomienda;

int leerEstadoEncomienda(){
  int opcion;
  printf("Digite cualquiera de las siguientes opciones\n");
  printf("1 => REGISTRADA \n\n");
  printf("2 => CARGADA \n\n");
  printf("3 => ENTREGADA \n\n");
  printf("0 => DEVUELTA\n");

do {
  printf("Ingrese su opcion:\n");
  scanf("%d",&opcion);
  if (opcion < 0 || opcion > 3) {
    printf("La opcion es invalida vuelva a ingresar su opcion\n");
  }
} while(opcion < 0 || opcion > 3);
return opcion;
}


Encomienda leerEncomienda(){
        Encomienda encomienda;

        leerEntero("Numero de Registro", &encomienda.numeroRegistro);
        do {
          leerFlotante("Peso", &encomienda.peso);
          if (encomienda.peso > 30 || encomienda.peso < 1) {
            printf("El numero ingresado para el peso tiene que estar entre 1 a 30 (KG):\n");
          }
        } while(encomienda.peso > 30 || encomienda.peso < 1);
        encomienda.fechaRegistro = leerFecha();
        encomienda.fechaEntregaDevolucion = leerFechaEncomienda();
        leerString("Observacion", encomienda.observacion);

        int estado;
        leerEntero("Estado", &estado);
        encomienda.estadoEncomienda = estado;

        return encomienda;
}

void imprimirEncomienda(Encomienda encomienda){
      printf("El numero de registro es: %d \n", encomienda.numeroRegistro);
      printf("El peso es: %2f\n", encomienda.peso);
      printf("El dia en el que fue registrado es : %d\n", encomienda.fechaRegistro.dia);
      printf("El mes en el que fue registrado es : %d\n", encomienda.fechaRegistro.mes);
      printf("El ano en el que fue registrado es : %d\n", encomienda.fechaRegistro.ano);
      printf("El dia en el que fue la entrega es : %d\n", encomienda.fechaEntregaDevolucion.dia);
      printf("El mes en el que fue la entrega es : %d\n", encomienda.fechaEntregaDevolucion.mes);
      printf("El ano en el que fue la entrega es : %d\n", encomienda.fechaEntregaDevolucion.ano);
    }

#endif
