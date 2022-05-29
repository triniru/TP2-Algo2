#include "poema.h"

Poema :: Poema(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, int cantidad_versos) : Lectura(
  titulo, minutos_lectura, anio_publicacion, escritor){

        this->cantidad_versos = cantidad_versos;
}

void Poema :: mostrar_cantidad_versos(){
    cout << "Este poema tiene " << cantidad_versos << " versos." << endl;
}

void Poema :: mostrar_poema(){
    mostrar_lectura();
    mostrar_cantidad_versos();
}
