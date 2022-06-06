#ifndef PARSER_LECTURA_H_INCLUDED
#define PARSER_LECTURA_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>

#include "lectura.h"
#include "lista.h"
#include "genero.h"
#include "novela.h"
#include "historica.h"
#include "cuento.h"
#include "poema.h"

using namespace std;

class Parser_lectura {
private:

    string entrada;
    Lista<Lectura*>* lista_lecturas;
    char tipo_de_lectura;
    string titulo;
    int minutos_lectura;
    int anio_publicacion;
    Escritor* escritor;
    genero_t genero;
    string tema;
    int cantidad_versos;
    string libro;

public:
    //PRE: -
    //POS: -
    Parser_lectura(Lista<Lectura*>* lista, string nombre_archivo);
    //PRE: -
    //POS: -
    void obtener_datos_principales(ifstream& archivo_lectura);
    //PRE: -
    //POS: -
    Escritor* obtener_escritor_desde_archivo(Lista<Escritor*>* lista_escritores, ifstream& archivo_lectura);
    //PRE: -
    //POS: -
    Lista<Lectura*>* procesar_entrada(Lista<Escritor*>* lista_escritores);
    //PRE: -
    //POS: -
    ~Parser_lectura();
};


#endif // PARSER_LECTURA_H_INCLUDED
