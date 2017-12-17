typedef enum estadoVehiculo {
  AVERIADO,
   DISPONIBLE,
   EN_CARGA,
   TRANSPORTANDO,
   REGRESO
} EstadoVehiculo;


char* getEstadoVehiculo(EstadoVehiculo estado)
{
   switch (estado)
   {
   case DISPONIBLE:
      return "DISPONIBLE";
   case EN_CARGA:
      return "EN_CARGA";
   case TRANSPORTANDO:
      return "TRANSPORTANDO";
   case REGRESO:
      return "REGRESO";
   case AVERIADO:
      return "AVERIADO";
   }
}
