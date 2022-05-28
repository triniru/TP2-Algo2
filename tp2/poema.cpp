#include "poema.h"

Poema :: Poema(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, int versos) : Lectura(
  titulo, minutos_lectura, anio_publicacion, escritor){

        this->versos = versos;
}
