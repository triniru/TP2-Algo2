#include "historica.h"

Novela_historica :: Novela_historica(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero, string tema) : Novela(
        titulo, minutos_lectura, anio_publicacion, escritor, string_a_genero("HISTORICA")) {

            this->tema = new char [tema.length()+1];
            for(size_t i = 0; i < tema.length(); i++) {
                this->tema[i] = tema[i];
            };
            this->tema[tema.length()] = '\0';

}


char* Novela_historica :: obtener_tema() {
    return tema;
}


void Novela_historica :: mostrar_tema() {
    cout << "La novela " << titulo << " es sobre " << tema << "." << endl;
}

void Novela_historica :: mostrar_todo() {
    Novela :: mostrar_todo();
    mostrar_tema();
}


Novela_historica :: ~Novela_historica() {
    delete[] tema;
}

