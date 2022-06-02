#ifndef NOVELA_H_INCLUDED
#define NOVELA_H_INCLUDED

#include "lectura.h"
#include "genero.h"

class Novela: public Lectura {

protected:
    genero_t genero;

public:
    //----------Constructor----------
    //PRE: -
    //POS: Construye una novela con sus atributos.
    Novela (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero);


    //----------Obtener----------
    //PRE: -
    //POS: Devuelve el genero de la novela.
    genero_t obtener_genero();


    //----------Mostrar----------
    //PRE: -
    //POS: Muestra el genero de la novela.
    void mostrar_genero();
    //PRE: -
    //POS: Muestra toda la informacion de la novela.
    void mostrar_todo();


    //----------Destructor----------
    //PRE
    //POS
    ~Novela();
};

#endif // NOVELA_H_INCLUDED
