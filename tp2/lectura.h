#ifndef LECTURA_H_INCLUDED
#define LECTURA_H_INCLUDED

#include<string>
#include <iostream>
#include "escritor.h"

using namespace std;

class Lectura {

protected:
    string titulo;
    int minutos_lectura;
    int anio_publicacion;
    Escritor* escritor;

public:
    //CONSTRUCTOR
    //PRE
    //POS
    Lectura (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor);


    //MOSTRAR
    //PRE
    //POS
    void mostrar_titulo();
    //PRE
    //POS
    void mostrar_minutos_lectura();
    //PRE
    //POS
    void mostrar_anio_publicacion();
    //PRE
    //POS
    void mostrar_esctritor();
    //PRE
    //POS
    virtual void mostrar_todo() = 0;

    //OBTENER
    //PRE
    //POS
    string obtener_titulo();

    //COMPARAR
    //PTR
    //POS
    int comparar(Lectura* lectura, Lectura* lectura_a_comparar);

    //PRE
    //POS
    virtual ~Lectura() = 0 ;
};

#endif // LECTURA_H_INCLUDED
