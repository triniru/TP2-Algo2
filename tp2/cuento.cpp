#include "cuento.h"

Cuento :: Cuento(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, string libro) : Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor){

        this->libro = libro;
}

void Cuento::mostrar_libro(){
    cout << "El cuento " << titulo << " se encuentra en el libro " << libro << '.' << endl;
}

void Cuento::mostrar_cuento(){
    mostrar_lectura();
    mostrar_libro();
}
