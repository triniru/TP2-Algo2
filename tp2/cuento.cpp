#include "cuento.h"

Cuento :: Cuento(char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, char*libro) : Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor){

        this->libro = libro;
}
