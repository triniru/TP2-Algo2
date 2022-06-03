#ifndef CUENTO_H_INCLUDED
#define CUENTO_H_INCLUDED

#include "lectura.h"

class Cuento : public Lectura {
protected:
    string libro;

public:
    //----------Constructor----------
    //PRE: -
    //POS: Construye un Cuento con sus atributos.
    Cuento(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, string libro);

    //----------Obtener----------
    //PRE: -
    //POS: Devuelve el nombre del libro en donde esta publicado el Cuento
    string obtener_libro();

    //----------Mostrar----------
    //PRE: -
    //POS: Muestra el nombre del libro en donde esta publicado el Cuento
    void mostrar_libro();
    //PRE: -
    //POS: Muestra toda la informacion del Cuento
    void mostrar_todo();

    //----------Destructor----------
    //PRE
    //POS
    ~Cuento();
};


#endif // CUENTO_H_INCLUDED
