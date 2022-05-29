#include "novela.h"

Novela :: Novela(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, char genero):Lectura(
     titulo, minutos_lectura, anio_publicacion, escritor){

    this->genero = genero;

}

void Novela::mostrar_genero(){
    if(genero == 'H'){
        cout << titulo << " es una novela historica." << endl;
    }else {
    cout << "Esta novela es de genero " << genero << "." << endl;
    }
}

void Novela:: mostrar_novela(){
    mostrar_lectura();
    mostrar_genero();
}


