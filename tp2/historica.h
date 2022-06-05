#ifndef HISTORICA_H_INCLUDED
#define HISTORICA_H_INCLUDED

#include "novela.h"

class Novela_historica : public Novela {
protected:

    char* tema;
    int tamanio_tema;

public:
    //----------Constructor----------
    //PRE: -
    //POS: Construye una novela de genero historica con sus atributos.
    Novela_historica(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero, string tema);


    //----------Obtener----------
    //PRE: El tema de la novela historica debe ser sin tildes.
    //POS: Devuelve el tema de la Novela_Historica.
    char* obtener_tema();


    //----------Mostrar----------
    //PRE: -
    //POS: Muestra el tema de la Novela_historica.
    void mostrar_tema();
    //PRE: -
    //POS: Muestra toda la informacion de la Novela_historica.
    void mostrar_todo();


    //----------Destructor----------
    //PRE: -
    //POS: -
    ~Novela_historica();


};

#endif
