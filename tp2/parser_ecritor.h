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
    string entrada;
    Lista<Escritor*>* lista_escritores;
    int referencia;
    string nombre_y_apellido;
    string nacionalidad;
    int anio_nacimiento;
    int anio_fallecimiento;

public:
    //PRE
    //POS
    Parser_escritor(Lista<Escritor*>* lista, string nombre_archivo);
    //PRE
    //POS
    Lista<Escritor*>* procesar_entrada();
    //PRE
    //POS
    ~Parser_escritor();
};

#endif // PARSER_ECRITOR_H_INCLUDED
