#ifndef ENCOMIENDA_C
#define ENCOMIENDA_C

#include "../helpers/EstadoEncomienda.c"
#include "Vehiculo.c"

typedef struct encomienda {
        int numeroRegistro;
        EstadoEncomienda estadoEncomienda;
        float peso;
        Ciudad destino;
        Fecha fechaRegistro;
        Fecha fechaEntregaDevolucion;
        char observacion [100];
        Vehiculo vehiculo;
} Encomienda;

int validarEncomienda(int numeroRegistro, int tipo){
  if(numeroRegistro <= 0 || numeroRegistro >= 100){
    if(tipo == 1){
    printf("ERROR: El numero registro esta compuesto de 100 caracters\n");
    }
    return 0;
  }
  return 1;
}

int tamanoEncomiendas(Encomienda encomiendas[]){
  for (int i = 0; i < 100; i++) {
    if (validarEncomienda(encomiendas[i].numeroRegistro, 0) == 0){
      return i;
    }
  }
  return 0;
}

int validarEncomiendaObservacion(char *observacion){
  if(strlen(observacion) != 100){
    printf("ERROR: La observacion esta compuesta de 100 caracteres\n");
    return 0;
  }
  return 1;
}

int validarEncomiendaRepetida(Encomienda encomiendas[], int numeroRegistro){
  for (int  i = 0; i < tamanoEncomiendas(encomiendas); i++) {
    printf("ERROR: La Encomienda ingresada ya existe\n");
    return 0;
  }
  return 1;
}

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

        do {
          leerEntero("Numero de Registro", &encomienda.numeroRegistro);
        } while(validarEncomienda(encomienda.numeroRegistro, 0) == 0);
        do {
          leerFlotante("Peso", &encomienda.peso);
          if (encomienda.peso > 30 || encomienda.peso < 1) {
            printf("El numero ingresado para el peso tiene que estar entre 1 a 30 (KG):\n");
          }
        } while(encomienda.peso > 30 || encomienda.peso < 1);
        encomienda.fechaRegistro = leerFecha();
        encomienda.fechaEntregaDevolucion = leerFechaEncomienda();
        leerString("Observacion", encomienda.observacion);

        encomienda.estadoEncomienda = leerEstadoEncomienda();

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
      printf("El valor es %s\n", getEstadoEncomienda(encomienda.estadoEncomienda));
      if (validarMatricula(encomienda.vehiculo.matricula, 0) == 1) {
        printf("El vehiculo asignado es: %s \n", encomienda.vehiculo.matricula);
      }
    }

void asignarVehiculoAEncomienda(Encomienda *encomienda, Vehiculo vehiculo){
    encomienda->vehiculo = vehiculo;
    printf("Vehiculo registrado exitosamente\n");
}

#endif
