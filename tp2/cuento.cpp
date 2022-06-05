#include "cuento.h"

Cuento :: Cuento(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, string libro) : Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor) {

        this->libro = libro;
}


string Cuento :: obtener_libro() {
    return libro;
}


void Cuento :: mostrar_libro() {
    cout << "El cuento " << titulo << " se encuentra en el libro " << libro << '.' << endl;
}

void Cuento :: mostrar_todo() {
    mostrar_titulo();
    mostrar_minutos_lectura();
    mostrar_anio_publicacion();
    mostrar_escritor();
    mostrar_libro();
}


Cuento :: ~Cuento(){}

