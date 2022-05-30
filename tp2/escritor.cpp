#include "escritor.h"

Escritor :: Escritor(string nombre_y_apellido, string nacionalidad, int anio_nacimiento, int anio_fallecimiento) {
    this->nombre_y_apellido = nombre_y_apellido;
    this->nacionalidad = nacionalidad;
    this->anio_nacimiento = anio_nacimiento;
    this->anio_fallecimiento = anio_fallecimiento;
}

void Escritor::mostrar_nombre_escritor() {
    cout << "El escritor es " << nombre_y_apellido << endl;
}

void Escritor::mostrar_nacionalidad() {
    cout << "La nacionalidad de " << nombre_y_apellido << "es " << nacionalidad << endl;
}

void Escritor::mostrar_anio_nacimiento() {
    if(anio_nacimiento == -1) {
        cout << "No se conoce el anio de nacimiento de " << nombre_y_apellido << "." << endl;
    } else {
        cout << "El escritor " << nombre_y_apellido << "nacio en el anio " << anio_nacimiento << endl;
    }
}

void Escritor::mostrar_anio_fallecimiento() {
    if(anio_fallecimiento == -1) {
        cout << "El escritor " << nombre_y_apellido << "se encuentra con vida o se desconoce su anio de fallecimiento." << endl;
    } else {
        cout << "El escritor " << nombre_y_apellido << "fallecio en el anio " << anio_fallecimiento << endl;
    }
}

void Escritor :: mostrar_escritor(){
    mostrar_nombre_escritor();
    mostrar_nacionalidad();
    mostrar_anio_nacimiento();
    mostrar_anio_fallecimiento();
}

string Escritor :: obtener_nombre_y_appellido(){
    return nombre_y_apellido;
}

int Escritor ::comparar(Escritor* escritor_a_comparar) {
    if(this->obtener_nombre_y_appellido() == escritor_a_comparar->obtener_nombre_y_appellido()){
        return 0;
    } else {
        return -1;
    }
}
