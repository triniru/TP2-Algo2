#ifndef NOVELA_H_INCLUDED
#define NOVELA_H_INCLUDED

#include "lectura.h"

class Novela: public Lectura{
//protected:
    //algo para el genero
public:
    Novela (char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor/*, genero*/);


};

#endif // NOVELA_H_INCLUDED
