#include "escritor.h"

Escritor :: Escritor(string nombre_y_apellido, string nacionalidad, int anio_nacimiento, int anio_fallecimiento){
    this->nombre_y_apellido = nombre_y_apellido;
    this->nacionalidad = nacionalidad;
    this->anio_nacimiento = anio_nacimiento;
    this->anio_fallecimiento = anio_fallecimiento;
}

void Escritor :: mostrar_escritor(){
    cout << "El escritor es " << nombre_y_apellido << endl;
}

string Escritor :: get_nombre_y_appellido(){
    return nombre_y_apellido;
}
