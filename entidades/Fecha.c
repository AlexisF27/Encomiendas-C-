#ifndef FECHA_H
#define FECHA_H

#include "../helpers/Lecturas.c"

typedef struct fecha {
        int dia;
        int mes;
        int ano;
}Fecha;

Fecha leerFecha(){
    Fecha fecha;

    do{
      leerEntero("Dia", &fecha.dia);
      if (fecha.dia > 30 || fecha.dia < 1) {
        printf("El valor del dia tiene que estar entre 1 a 30 (dias)\n");
      }
    }while(fecha.dia > 30 || fecha.dia < 1);


    do{
      leerEntero("Mes", &fecha.mes);
      if (fecha.mes > 12 || fecha.mes < 1) {
        printf("El valor del mes tiene que estar entre 1 a 12 (meses)\n");
      }
    }while(fecha.mes > 12 || fecha.mes < 1);

    do{
    leerEntero("Ano", &fecha.ano);
    if (fecha.ano > 2017 || fecha.ano < 1950) {
      printf("El valor del ano tiene que estar entrre 1950 a 2017 (anos)\n");
    }
    }while(fecha.ano > 2017 || fecha.ano < 1950);

  return fecha;
}

Fecha leerFechaEncomienda(){
  Fecha fecha;

      do{
        leerEntero("Dia", &fecha.dia);
        if (fecha.dia > 30 || fecha.dia < 1) {
          printf("El valor del dia tiene que estar entre 1 a 30 (dias)\n");
        }
      }while(fecha.dia > 30 || fecha.dia < 1);


      do{
        leerEntero("Mes", &fecha.mes);
        if (fecha.mes > 12 || fecha.mes < 1) {
          printf("El valor del mes tiene que estar entre 1 a 12 (meses)\n");
        }
      }while(fecha.mes > 12 || fecha.mes < 1);

      do{
      leerEntero("Ano", &fecha.ano);
      if (fecha.ano > 2040 || fecha.ano < 2016) {
        printf("El valor del ano tiene que estar entrre 2016 a 2040 (anos)\n");
      }
    }while(fecha.ano > 2040 || fecha.ano < 2016);

    return fecha;
}

#endif
