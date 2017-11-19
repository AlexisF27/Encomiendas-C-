#include "Fecha.h"
#include "../helpers/EstadoEncomienda.h"
#include "Ciudad.h"

typedef struct encomienda {
        int numeroRegistro;
        Fecha fechaRegistro;
        float peso;
        Ciudad destino;
        EstadoEncomienda estado;
        Fecha fechaEntregaDevolucion;
} Encomienda;
