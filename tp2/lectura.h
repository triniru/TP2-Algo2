#ifndef LECTURA_H_INCLUDED
#define LECTURA_H_INCLUDED

#include<string>
#include <iostream>
#include "escritor.h"
#include "genero.h"

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
    //PRE: El titulo no debe contener tildes ni caracteres especiales.
    //POS: Devuelve el titulo de la Lectura.
    string obtener_titulo();
    //PRE: Los minutos de lectura deben ser un entero mayor a 0.
    //POS: Devuelve los minutos de lectura.
    int obtener_minutos_lectura();
    //PRE: El anio_publicacion puede ser -1 en caso de saberse o un numero mayor o igual a 0.
    //POS: Devuelve el anio de publicacion.
    int obtener_anio_publicacion();
    //PRE: El escritor puede o no ser anonimo.
    //POS: Devuelve el escritor de la lectura.
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
    //PRE
    //POS
    virtual void mostrar_si_genero_es_igual(genero_t genero) = 0;


    //----------Comparar----------
    //PRE: -
    //POS: Compara los anios de publicacion de dos Lecturas, si son iguales devuelve 0,
    //       de lo contrario devuelve 1 o -1 dependiendo de si es mayor o menor.
    int comparar(Lectura* lectura_a_comparar);
    //PRE:
    //POS: Compara los titulos de dos Lecturas, si son iguales devuelve 0,
    //       de lo contrario devuelve 1 o -1 dependiendo del orden alfabetico.
    int comparar_para_baja(Lectura* lectura_a_comparar);
    //PRE:-
    //POS: Compara los minutos en leer dos Lecturas, si son iguales devuelve 0,
    //       de lo contrario devuelve 1 o -1 dependiendo de si es mayor o menor.
    int comparar_minutos_lectura(Lectura* lectura, int minutos);


    //----------Destructor----------
    //PRE: -
    //POS: -
    virtual ~Lectura() = 0 ;
};

#endif // LECTURA_H_INCLUDED
