
#ifndef PRACTICA_3_0_UTM_H
#define PRACTICA_3_0_UTM_H


class UTM {
private:
    float latitud;
    float longitud;
public:

    UTM(): latitud(0), longitud(0){};
    UTM(float latitud, float longitud) : latitud(latitud), longitud(longitud) {}


    bool operator==(const UTM &origen) const {
        return latitud == origen.latitud &&
               longitud == origen.longitud;
    }

    bool operator!=(const UTM &origen) const {
        return !(origen == *this);
    }
};


#endif //PRACTICA_3_0_UTM_H
