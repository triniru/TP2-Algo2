#ifndef CUENTO_H_INCLUDED
#define CUENTO_H_INCLUDED

#include "lectura.h"

class Cuento : public Lectura {
protected:
    char* libro;

public:
    Cuento(char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, char* libro);
};


#endif // CUENTO_H_INCLUDED
