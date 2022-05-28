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
    Lectura (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor);
};

#endif // LECTURA_H_INCLUDED
