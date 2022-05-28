#ifndef CUENTO_H_INCLUDED
#define CUENTO_H_INCLUDED

#include "lectura.h"

class Cuento : public Lectura {
protected:
    string libro;

public:
    Cuento(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, string libro);
};


#endif // CUENTO_H_INCLUDED
