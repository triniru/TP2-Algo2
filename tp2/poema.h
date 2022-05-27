#ifndef POEMA_H_INCLUDED
#define POEMA_H_INCLUDED

#include "lectura.h"

class Poema : public Lectura{
protected:
    int versos;

public:
    Poema(char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, int versos);

};

#endif // POEMA_H_INCLUDED
