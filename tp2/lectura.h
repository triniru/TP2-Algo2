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
    //----------Constructor----------
    //PRE: -
    //POS: Contruye un objeto de clase Lectura con su titulo, minutos de lectura, anio de publicacion y escritor.
    Lectura (string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor);


    //----------Obtener----------
    //PRE: -
    //POS: Devuelve el titulo de la Lectura.
    string obtener_titulo();
    //PRE
    //POS
    int obtener_minutos_lectura();
    //PRE
    //POS
    int obtener_anio_punlicacion();
    //PRE
    //POS
    Escritor* obtener_escritor();


    //----------Mostrar----------
    //PRE: -
    //POS: Muestra el titulo de la Lectura.
    void mostrar_titulo();
    //PRE: -
    //POS: Muestra los minutos que se tardaran en leer.
    void mostrar_minutos_lectura();
    //PRE: -
    //POS: Muestra el año de publicacion de la Lectura.
    void mostrar_anio_publicacion();
    //PRE: -
    //POS: Muestra el autor de la Lectura.
    void mostrar_escritor();
    //PRE: -
    //POS: Muestra todos los datos dependiendo del tipo de Lectura que sea(Novela, Novela Historica, Cuento, o Poema).
    virtual void mostrar_todo() = 0;


    //----------Comparar----------
    //PRE: -
    //POS: Compara los titulos de dos Lecturas, si son iguales devuelve 0,
    //       de lo contrario devuelve 1 o -1 dependiendo del orden alfabetico
    int comparar(Lectura* lectura, Lectura* lectura_a_comparar);


    //----------Destructor----------
    //PRE
    //POS
    virtual ~Lectura() = 0 ;
};

#endif // LECTURA_H_INCLUDED
