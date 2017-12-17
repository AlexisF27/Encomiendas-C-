#ifndef ESTADOENCOMIENDA_C
#define ESTADOENCOMIENDA_C

typedef enum estadoEncomienda {
        REGISTRADA,
        CARGADA,
        ENTREGADA,
        DEVUELTA
} EstadoEncomienda;

char* getEstadoEncomienda(EstadoEncomienda estado)
{
   switch (estado)
   {
   case REGISTRADA:
      return "REGISTRADA";
   case CARGADA:
      return "CARGADA";
   case ENTREGADA:
      return "ENTREGADA";
   case DEVUELTA:
      return "DEVUELTA";

   }
}

#endif
