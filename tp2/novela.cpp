#include "novela.h"

Novela :: Novela(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, genero_t genero) : Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor) {

    this->genero = genero;

}


genero_t Novela :: obtener_genero() {
    return genero;
}


void Novela :: mostrar_genero() {
    if(genero == HISTORICA) {
        cout << titulo << " es una novela historica." << endl;
    } else {
        cout << titulo << " es una novela de genero " << genero << "." << endl;
    }
}

void Novela :: mostrar_todo() {
    mostrar_titulo();
    mostrar_minutos_lectura();
    mostrar_anio_publicacion();
    mostrar_escritor();
    mostrar_genero();
}


Novela :: ~Novela () {}
