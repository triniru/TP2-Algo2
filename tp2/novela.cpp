#include "novela.h"

Novela :: Novela(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, char genero):Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor){

    this->genero = genero;

}

void Novela:: mostrar_novela(){
    cout << "El titulo de la novela es: " << titulo << endl;
    cout << "El escritor de " << titulo << " es " << escritor->get_nombre_y_appellido() << endl;
}
