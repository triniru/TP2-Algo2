#include "cuento.h"

Cuento :: Cuento(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, string libro) : Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor){

        this->libro = libro;
}
