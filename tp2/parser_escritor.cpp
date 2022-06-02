#include "parser_ecritor.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Parser_escritor :: Parser_escritor(Lista* lista, char** argv) {
    this->lista_escritores = lista;
    this->entrada = argv[1];
}

Escritor* Parser_escritor :: procesar_entrada() {
    ifstream archivo_nuevo(entrada);

    Lista* lista = new Lista();
    //lista->alta(escritor_es_anonimo());

    Escritor* escritor = new Escritor(referencia, nombre_y_apellido, nacionalidad, anio_nacimiento, anio_nacimiento);

    string aux;
    //int i = 1;

    while(!archivo_nuevo.eof()){
        getline(archivo_nuevo, aux);
        aux.replace(0, 1, " ");
        referencia = stoi(aux);
        getline(archivo_nuevo, nombre_y_apellido);
        getline(archivo_nuevo, nacionalidad);

        getline(archivo_nuevo, aux);

        if(aux.empty()){
            anio_nacimiento = -1;
            getline(archivo_nuevo, aux);
            if(aux.empty()){
                anio_fallecimiento = -1;
            } else {
                anio_fallecimiento = stoi(aux);
            }
        } else {
            anio_nacimiento = stoi(aux);
            getline(archivo_nuevo, aux);
            if(aux.empty()){
                anio_fallecimiento = -1;
            } else {
                anio_fallecimiento = stoi(aux);
            }
        }

        getline(archivo_nuevo, aux);
        lista->alta(escritor);
    }
    return escritor;
}

void Parser_escritor :: escritor_es_anonimo(){
    Escritor(0, "ANONIMO", "¿?", -1, -1);
}
