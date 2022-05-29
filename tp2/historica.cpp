#include "historica.h"

Novela_historica :: Novela_historica(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor, char genero) : Novela(
        titulo, minutos_lectura, anio_publicacion, escritor, genero){}

void Novela_historica :: mostrar_tema(){
    cout << "La novela " << titulo << " es sobre " << tema << endl;
}

void Novela_historica :: mostrar_novela_historica(){
    mostrar_novela();
    mostrar_tema();
}
