#ifndef ESCRITOR_H_INCLUDED
#define ESCRITOR_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Escritor{
protected:
    string nombre_y_apellido;
    string nacionalidad;
    int anio_nacimiento;
    int anio_fallecimiento;

public:
    Escritor(string nombre_y_apellido, string nacionalidad, int anio_nacimiento, int anio_fallecimiento);

    void mostrar_escritor();

    string get_nombre_y_appellido();
};


#endif // ESCRITOR_H_INCLUDED
