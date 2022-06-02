#ifndef POEMA_H_INCLUDED
#define POEMA_H_INCLUDED

#include "lectura.h"

class Poema : public Lectura {
protected:
    int cantidad_versos;

public:
    //----------Constructor----------
    //PRE: -
    //POS: Construye un Poema con sus atributos.
    Poema(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, int cantidad_versos);


    //----------Obtener----------
    //PRE: La cantidad de versos debe ser mayor a 0.
    //POS: Devuelve la cantidad de versos del Poema.
    int obtener_cantidad_versos();


    //----------Mostrar----------
    //PRE: La cantidad de versos debe ser mayor a 0.
    //POS: Muestra la cantidad de versos que tiene el Poema.
    void mostrar_cantidad_versos();
    //PRE: -
    //POS: Muestra toda la informacion del Poema.
    void mostrar_todo();


    //----------Destructor----------
    //PRE:
    //POS:
    ~Poema();
};

#endif // POEMA_H_INCLUDED
