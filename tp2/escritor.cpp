#include "escritor.h"

Escritor :: Escritor(int referencia, string nombre_y_apellido, string nacionalidad, int anio_nacimiento, int anio_fallecimiento) {
    this->referencia = referencia;
    this->nombre_y_apellido = nombre_y_apellido;
    this->nacionalidad = nacionalidad;
    this->anio_nacimiento = anio_nacimiento;
    this->anio_fallecimiento = anio_fallecimiento;
}


int Escritor :: obtener_referencia() {
    return referencia;
}

string Escritor :: obtener_nombre_y_apellido() {
    return nombre_y_apellido;
}

string Escritor :: obtener_nacionalidad() {
    return nacionalidad;
}

int Escritor :: obtener_anio_nacimiento() {
    return anio_nacimiento;
}

int Escritor :: obtener_anio_fallecimiento() {
    return anio_fallecimiento;
}


void Escritor :: cambiar_anio_fallecimiento(int nuevo_anio) {
    if( nuevo_anio > anio_nacimiento) {
        this->anio_fallecimiento = nuevo_anio;
    }
}


void Escritor :: mostrar_nombre_escritor() {
    cout << "El escritor es " << nombre_y_apellido << endl;
}

void Escritor :: mostrar_nacionalidad() {
    if (nacionalidad.compare("??")) {
        cout << "No se conoce la nacionalidad de " << nombre_y_apellido << "." << endl;
    } else {
        cout << nombre_y_apellido << "es " << nacionalidad << endl;
    }
}

void Escritor :: mostrar_anio_nacimiento() {
    if(this->anio_nacimiento == -1) {
        cout << "No se conoce el anio de nacimiento de " << nombre_y_apellido << "." << endl;
    } else {
        cout << "Nacio en el anio " << anio_nacimiento << endl;
    }
}

void Escritor :: mostrar_anio_fallecimiento() {
    cout << this->obtener_anio_fallecimiento() << endl;
    if(this->obtener_anio_fallecimiento() == -1) {
        cout << "El escritor " << nombre_y_apellido << " se encuentra con vida o se desconoce su anio de fallecimiento." << endl;

    } else {
        cout << nombre_y_apellido << "fallecio en el anio " << anio_fallecimiento << endl;
    }
}

void Escritor :: mostrar_escritor() {
    mostrar_nombre_escritor();
    mostrar_nacionalidad();
    mostrar_anio_nacimiento();
    mostrar_anio_fallecimiento();
    cout << endl;
}


int Escritor :: comparar(Escritor* escritor_a_comparar) {
    if(this->obtener_nombre_y_apellido() == escritor_a_comparar->obtener_nombre_y_apellido()) {
        return 0;

    } else {
        return -1;
    }
}
int Escritor :: comparar_para_baja(Escritor* escritor_a_comparar){
    return comparar(escritor_a_comparar);
}


Escritor :: ~Escritor() {}
