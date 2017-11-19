#include "../helpers/EstadoVehiculo.h"
#include "Fecha.h"

typedef struct vehiculo {
        char *matricula;
        Fecha fechaFabricacion;
        float capacidad;
        EstadoVehiculo estadoVehiculo;
        char *observacion;
} Vehiculo;
