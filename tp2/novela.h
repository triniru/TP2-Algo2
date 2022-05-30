#ifndef NOVELA_H_INCLUDED
#define NOVELA_H_INCLUDED

#include "lectura.h"

class Novela: public Lectura{

protected:
    char genero;

public:
    //PRE
    //POS
    Novela (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, char genero);
    //PRE
    //POS
    void mostrar_genero();
    //PRE
    //POS
    void mostrar_todo();
};

#endif // NOVELA_H_INCLUDED
