
#ifndef PRACTICA_3_0_PUNTORECARGA_H
#define PRACTICA_3_0_PUNTORECARGA_H
#include "Coche.h"
#include "UTM.h"

class PuntoRecarga {
    int id, max, n_coches;
    UTM pos;
    Coche *coches;
public:
    int getMax (){return max;};

};


#endif //PRACTICA_3_0_PUNTORECARGA_H
