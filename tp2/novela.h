#ifndef NOVELA_H_INCLUDED
#define NOVELA_H_INCLUDED

#include "lectura.h"
#include "genero.h"

class Novela: public Lectura {

protected:
    genero_t genero;

public:
    //PRE
    //POS
    Novela (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero);
    //PRE
    //POS

    void mostrar_genero();
    //PRE
    //POS
    void mostrar_todo();
    //PRE
    //POS
    genero_t obtener_genero();
    //PRE
    //POS
    ~Novela();
};

#endif // NOVELA_H_INCLUDED
