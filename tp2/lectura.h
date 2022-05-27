#ifndef LECTURA_H_INCLUDED
#define LECTURA_H_INCLUDED

#include<string>
#include <iostream>
//#include "constantes.h"

class Lectura{

protected:
    char* titulo;
    int minutos_lectura;
    int anio_publicacion;
    Escritor* escritor;


public:
    Lectura (char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor);
};

#endif // LECTURA_H_INCLUDED
