#include "lectura.h"

using namespace std;

Lectura :: Lectura(string titulo, int minutos_lectura, int anio_publicacion, Escritor* escritor){
    this->titulo = titulo;
    this->minutos_lectura = minutos_lectura;
    this->anio_publicacion = anio_publicacion;
    this->escritor = escritor;
}


string Lectura :: obtener_titulo() {
    return titulo;
}

int Lectura :: obtener_minutos_lectura() {
    return minutos_lectura;
}

int Lectura :: obtener_anio_publicacion() {
    return anio_publicacion;
}

Escritor* Lectura :: obtener_escritor() {
    return escritor;
}


void Lectura :: mostrar_titulo() {
    cout << "El titulo de la novela es: " << titulo << "." << endl;
}

void Lectura :: mostrar_minutos_lectura() {
    cout << "Se estima que es posible leer esta novela en " << minutos_lectura << " minutos." << endl;
}

void Lectura :: mostrar_anio_publicacion() {
    cout << "Esta novela se publico en el anio " << anio_publicacion << endl;
}

void Lectura :: mostrar_escritor() {
    escritor->mostrar_nombre_escritor();
}


int Lectura :: comparar(Lectura* lectura_a_comparar) {

    if(this->obtener_anio_publicacion() < lectura_a_comparar->obtener_anio_publicacion()) {
        return -1;

    } else if(this->obtener_anio_publicacion() > lectura_a_comparar->obtener_anio_publicacion()) {
        return 1;

    } else {
        return 0;
    }
}

int Lectura :: comparar_para_baja(Lectura* lectura_a_comparar) {

    if(this->obtener_titulo() < lectura_a_comparar->obtener_titulo()) {
        return -1;

    } else if(this->obtener_titulo() > lectura_a_comparar->obtener_titulo()) {
        return 1;

    } else {
        return 0;
    }
}

int Lectura :: comparar_minutos_lectura(Lectura* lectura, int minutos_minimos_anteriores){
    if(this->minutos_lectura < lectura->obtener_minutos_lectura() && this->minutos_lectura > minutos_minimos_anteriores)
        return -1;
    else if (this->minutos_lectura > lectura->obtener_minutos_lectura())
        return 1;
    else
        return 0;

}


Lectura :: ~Lectura() {}
