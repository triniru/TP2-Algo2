#ifndef HISTORICA_H_INCLUDED
#define HISTORICA_H_INCLUDED

#include "novela.h"

class Novela_historica : public Novela {
protected:
    char* tema;

public:
    //PRE
    //POS
    Novela_historica (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero, char* tema);
    //PRE
    //POS
    char* obtener_tema();
    //PRE
    //POS
    void mostrar_tema();
    //PRE
    //POS
    void mostrar_todo();
    ~Novela_historica();
};

#endif
