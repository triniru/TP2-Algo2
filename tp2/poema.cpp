#include "poema.h"

Poema :: Poema(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, int cantidad_versos) : Lectura(
  titulo, minutos_lectura, anio_publicacion, escritor) {

        this->cantidad_versos = cantidad_versos;
}

int Poema :: obtener_cantidad_versos() {
    return cantidad_versos;
}

void Poema :: mostrar_cantidad_versos() {
    cout << "Este poema tiene " << cantidad_versos << " versos." << endl;
}

void Poema :: mostrar_todo() {
    mostrar_titulo();
    mostrar_minutos_lectura();
    mostrar_anio_publicacion();
    mostrar_esctritor();
    mostrar_cantidad_versos();
}
Poema :: ~Poema() {}
