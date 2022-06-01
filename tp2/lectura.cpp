#include "lectura.h"

using namespace std;

Lectura::Lectura(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor){
    this->titulo = titulo;
    this->minutos_lectura = minutos_lectura;
    this->anio_publicacion = anio_publicacion;
    this->escritor = escritor;
}


void Lectura::mostrar_titulo() {
    cout << "El titulo de la novela es: " << titulo << endl;
}

void Lectura::mostrar_minutos_lectura() {
    cout << "Se estima que es posible leer esta novela en " << minutos_lectura << " minutos." << endl;
}

void Lectura::mostrar_anio_publicacion() {
    cout << "Esta novela se publico en el anio " << anio_publicacion << endl;
}

void Lectura::mostrar_esctritor() {
    escritor->mostrar_nombre_escritor();
}

/*void Lectura::mostrar_lectura() {
    mostrar_titulo();
    mostrar_minutos_lectura();
    mostrar_anio_publicacion();
    mostrar_esctritor();
}*/

string Lectura :: obtener_titulo() {
    return titulo;
}

int Lectura :: comparar(Lectura* lectura, Lectura* lectura_a_comparar) {
    if(lectura->obtener_titulo() < lectura_a_comparar->obtener_titulo()) {
        return -1;
    } else if(lectura->obtener_titulo() > lectura_a_comparar->obtener_titulo()) {
        return 1;
    } else {
        return 0;
    }
}


Lectura :: ~Lectura() {}
