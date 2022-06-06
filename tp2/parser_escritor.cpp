#include <iostream>
#include <fstream>
#include <string>

#include "parser_ecritor.h"

using namespace std;

Parser_escritor :: Parser_escritor(Lista<Escritor*>* lista, string nombre_archivo) {
    this->lista_escritores = lista;
    this->entrada = nombre_archivo;
}

Lista<Escritor*>* Parser_escritor :: procesar_entrada() {
    ifstream archivo_nuevo(entrada);

    Escritor* escritor;
    string aux;

    while(!archivo_nuevo.eof()) {

        getline(archivo_nuevo, aux, '\n');
        aux = aux.substr(1, aux.length() - 2);
        referencia = stoi(aux);
        getline(archivo_nuevo, nombre_y_apellido,'\n' );

        if(nombre_y_apellido.compare("ANONIMO") == 0) {
            getline(archivo_nuevo, aux, '\n');
            nacionalidad = "¿?";
            getline(archivo_nuevo, aux, '\n');
            anio_nacimiento = -1;
            getline(archivo_nuevo, aux, '\n');
            anio_fallecimiento = -1;

        } else {
            getline(archivo_nuevo, nacionalidad, '\n');
            getline(archivo_nuevo, aux, '\n');

            if(aux.compare("\n")) {
                anio_nacimiento = -1;
                getline(archivo_nuevo, aux, '\n');

                if(aux.compare("\n")) {
                    anio_fallecimiento = -1;

                } else {
                    anio_fallecimiento = stoi(aux);
                }

            } else {

                anio_nacimiento = stoi(aux);
                getline(archivo_nuevo, aux, '\n');

                if(aux.compare("\n")) {
                    anio_fallecimiento = -1;

                } else {
                    anio_fallecimiento = stoi(aux);
                }
            }

            getline(archivo_nuevo, aux, '\n');

            escritor = new Escritor(referencia, nombre_y_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
            this->lista_escritores->alta(escritor);
        }
    }
    return this->lista_escritores;
}

Parser_escritor :: ~Parser_escritor() {}

