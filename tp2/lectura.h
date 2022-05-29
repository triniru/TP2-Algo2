#ifndef LECTURA_H_INCLUDED
#define LECTURA_H_INCLUDED

#include<string>
#include <iostream>
#include "escritor.h"

using namespace std;

class Lectura{

protected:
    string titulo;
    int minutos_lectura;
    int anio_publicacion;
    Escritor* escritor;

public:
    //PRE
    //POS
    Lectura (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor);
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
    void mostrar_lectura();
    //PRE
    //POS
    string get_titulo();
    //PTR
    //POS
    int comparar(Lectura* lectura, Lectura* lectura_a_comparar);

};

#endif // LECTURA_H_INCLUDED
