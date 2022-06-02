#ifndef PARSER_ECRITOR_H_INCLUDED
#define PARSER_ECRITOR_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>

#include "escritor.h"
#include "lista.h"

using namespace std;

class Parser_escritor{
private:
    char* entrada;
    Lista* lista_escritores;
    int referencia;
    string nombre_y_apellido;
    string nacionalidad;
    int anio_nacimiento;
    int anio_fallecimiento;

public:
    //PRE
    //POS
    Parser_escritor(Lista* lista, char** argv);
    //PRE
    //POS
    Escritor* procesar_entrada();
    //PRE
    //POS
    ~Parser_escritor();

private:
    void escritor_es_anonimo();
};

#endif // PARSER_ECRITOR_H_INCLUDED
