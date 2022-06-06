#include "parser_lectura.h"

#include <iostream>
#include <fstream>
#include <string>

const char N = 'N';
const char P = 'P';
const char C = 'C';


using namespace std;

Parser_lectura :: Parser_lectura(Lista<Lectura*>* lista, char* nombre_archivo) {
    this->lista_lecturas = lista;
    this->entrada = nombre_archivo;
}

void Parser_lectura :: obtener_datos_principales(ifstream& archivo_lectura) {
    string aux;

    getline(archivo_lectura, titulo, '\n');

    getline(archivo_lectura, aux, '\n');
    this->minutos_lectura = stoi(aux);

    getline(archivo_lectura, aux, '\n');
    this->anio_publicacion = stoi(aux);

}

Escritor* Parser_lectura :: obtener_escritor_desde_archivo(Lista<Escritor*>* lista_escritores, ifstream& archivo_lectura) {
    string aux;
    getline(archivo_lectura, aux, '\n');

    if(aux == "ANONIMO") {
        return nullptr;
    }

    aux = aux.substr(1, aux.length() - 2);
    int referencia_autor = stoi(aux);

    return lista_escritores->consulta_dato(referencia_autor);

}


Lista<Lectura*>* Parser_lectura :: procesar_entrada(Lista<Escritor*>* lista_escritores) {

    ifstream archivo_lectura(entrada);

    string aux;

    while(!archivo_lectura.eof()) {

        getline(archivo_lectura, aux, '\n');
        tipo_de_lectura = aux[0];


        obtener_datos_principales(archivo_lectura);


        if(tipo_de_lectura == N) {

            getline(archivo_lectura, aux, '\n');
            genero = string_a_genero(aux);


            if (genero == HISTORICA) {

                getline(archivo_lectura, tema, '\n');

                Escritor * escritor = obtener_escritor_desde_archivo(lista_escritores, archivo_lectura);

                Novela_historica* novela_historica = new Novela_historica(titulo, minutos_lectura, anio_publicacion, escritor, genero, tema);
                this->lista_lecturas->alta(novela_historica);

            } else {

                Escritor * escritor = obtener_escritor_desde_archivo(lista_escritores, archivo_lectura);

                Novela* novela = new Novela(titulo, minutos_lectura, anio_publicacion, escritor, genero);
                this->lista_lecturas->alta(novela);

            }

        } else if (tipo_de_lectura == C) {

            getline(archivo_lectura, libro, '\n');

            Escritor * escritor = obtener_escritor_desde_archivo(lista_escritores, archivo_lectura);

            Cuento* cuento = new Cuento(titulo, minutos_lectura, anio_publicacion, escritor, libro);
            this->lista_lecturas->alta(cuento);

        } else if (tipo_de_lectura == P) {

            getline(archivo_lectura,aux, '\n');
            cantidad_versos = stoi(aux);

            Escritor * escritor = obtener_escritor_desde_archivo(lista_escritores, archivo_lectura);

            Poema* poema = new Poema(titulo, minutos_lectura, anio_publicacion, escritor, cantidad_versos);
            this->lista_lecturas->alta(poema);

        }
        getline(archivo_lectura, aux, '\n');
    }
    return this->lista_lecturas;
}

Parser_lectura :: ~Parser_lectura(){}
