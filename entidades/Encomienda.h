#include "Fecha.h"
#include "../helpers/EstadoEncomienda.h"
#include "Ciudad.h"

typedef struct encomienda {
        int numeroRegistro;
        EstadoEncomienda estado;
        float peso;
        Ciudad destino;
        Fecha fechaRegistro;
        Fecha fechaEntregaDevolucion;
} Encomienda;
