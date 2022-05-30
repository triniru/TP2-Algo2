#ifndef POEMA_H_INCLUDED
#define POEMA_H_INCLUDED

#include "lectura.h"

class Poema : public Lectura{
protected:
    int cantidad_versos;

public:
    //PRE
    //POS
    Poema(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, int cantidad_versos);
    //PRE
    //POS
    void mostrar_cantidad_versos();
    //PRE
    //POS
    void mostrar_todo();
};

#endif // POEMA_H_INCLUDED
