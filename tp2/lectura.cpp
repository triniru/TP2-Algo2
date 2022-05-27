#include "lectura.h"

using namespace std;

Lectura::Lectura(char* titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor){
    this->titulo = titulo;
    this->minutos_lectura = minutos_lectura;
    this->anio_publicacion = anio_publicacion;
    this->escritor = escritor;
}
