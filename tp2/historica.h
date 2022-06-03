#ifndef HISTORICA_H_INCLUDED
#define HISTORICA_H_INCLUDED

#include "novela.h"

class Novela_historica : public Novela {
protected:
    char* tema;

public:
    //----------Constructor----------
    //PRE: -
    //POS: Construye una novela de genero historica con sus atributos.
    Novela_historica (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero, char* tema);


    //----------Obtener----------
    //PRE:
    //POS: Devuelve el tema de la Novela_Historica.
    char* obtener_tema();


    //----------Mostrar----------
    //PRE: -
    //POS: Muestra el tema de la Novela_historica
    void mostrar_tema();
    //PRE: -
    //POS: Muestra toda la informacion de la Novela_historica
    void mostrar_todo();


    //----------Destructor----------
    //PRE: -
    //POS:
    ~Novela_historica();
};

#endif
