#include "parser_lectura.h"

#include <iostream>
#include <fstream>
#include <string>

const char N = 'N';
const char P = 'P';
const char C = 'C';


using namespace std;

Parser_Lectura :: Parser_Lectura(Lista<Lectura*>* lista, string nombre_archivo) {
    this->lista_lecturas = lista;
    this->entrada = nombre_archivo;
}

void Parser_Lectura :: obtener_datos_principales(ifstream& archivo_lectura, string& titulo, int* minutos_lectura,
                                                int* anio_publicacion) {
    string aux;
    getline(archivo_lectura, titulo);
    getline(archivo_lectura, aux);
    *minutos_lectura = stoi(aux);
    getline(archivo_lectura, aux);
    *anio_publicacion = stoi(aux);

}

Escritor* Parser_Lectura :: obtener_escritor_desde_archivo(Lista<Escritor*>* lista_escritores, ifstream& archivo_lectura) {
    string aux;
    getline(archivo_lectura, aux);
    if(aux == "ANONIMO"){
        return nullptr;
    }
    aux = aux.substr(1, aux.length() - 2);
    int referencia_autor = stoi(aux);
    return lista_escritores -> consulta_dato(referencia_autor);
}


Lista<Lectura*>* Parser_Lectura :: procesar_entrada(Lista<Escritor*>* lista_escritores) {

    ifstream archivo_lectura(entrada);

    Lista<Lectura*>* lista = new Lista<Lectura*>();

    string titulo;
    int minutos_lectura, anio_publicacion;
    char tipo_de_lectura;
    string aux, libro;

    while(!archivo_lectura.eof()){

        getline(archivo_lectura, aux);
        tipo_de_lectura = aux[0];
        obtener_datos_principales(archivo_lectura, titulo, &minutos_lectura, &anio_publicacion);
        Escritor * escritor = obtener_escritor_desde_archivo(lista_escritores, archivo_lectura);

        if(tipo_de_lectura == N) {
            getline(archivo_lectura, aux);
            genero = string_a_genero(aux);
            if (genero == HISTORICA) {

                getline(archivo_lectura, aux);
                tema = nullptr;                 //CORREGIRRRRRRRRRRRRRRRRR
                Novela_historica* novela_historica = new Novela_historica(titulo, minutos_lectura, anio_publicacion, escritor, genero, tema);
                lista->alta(novela_historica);

            } else {

            Novela* novela = new Novela(titulo, minutos_lectura, anio_publicacion, escritor, genero);
            lista->alta(novela);

            }

        } else if (tipo_de_lectura == C) {

            getline(archivo_lectura, libro);
            Cuento* cuento = new Cuento(titulo, minutos_lectura, anio_publicacion, escritor, libro);
            lista->alta(cuento);

        } else if (tipo_de_lectura == P) {

            getline(archivo_lectura,aux);
            cantidad_versos = stoi(aux);
            Poema* poema = new Poema(titulo, minutos_lectura, anio_publicacion, escritor, cantidad_versos);
            lista->alta(poema);

        }
    }
    return lista;
}
