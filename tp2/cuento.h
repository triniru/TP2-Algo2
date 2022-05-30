#ifndef CUENTO_H_INCLUDED
#define CUENTO_H_INCLUDED

#include "lectura.h"

class Cuento : public Lectura {
protected:
    string libro;

public:
    //PRE
    //POS
    Cuento(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, string libro);
    //PRE
    //POS
    void mostrar_libro();
    //PRE
    //POS
    string obtener_libro();
    void mostrar_todo();
};


#endif // CUENTO_H_INCLUDED
