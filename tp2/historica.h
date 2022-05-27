#ifndef HISTORICA_H_INCLUDED
#define HISTORICA_H_INCLUDED

#include "novela.h"

class Novela_historica : public Novela{
protected:
    //genero
    char* tema;

public:
    Novela_historica (char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, /*genero*/);

};


#endif // HISTORICA_H_INCLUDED
