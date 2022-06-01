#ifndef ESCRITOR_H_INCLUDED
#define ESCRITOR_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Escritor {
protected:
    string nombre_y_apellido;
    string nacionalidad;
    int anio_nacimiento;
    int anio_fallecimiento;

public:
    //PRE
    //POS
    Escritor(string nombre_y_apellido, string nacionalidad, int anio_nacimiento, int anio_fallecimiento);

    //PRE
    //POS
    string obtener_nombre_y_appellido();
    //PRE
    //POS
    string obtener_nacionalidad();
    //PRE
    //POS
    int obtener_anio_nacimiento();
    //PRE
    //POS
    int obtener_anio_fallecimiento();


    //PRE
    //POS
    void cambiar_anio_fallecimiento(int nuevo_anio);


    //PRE
    //POS
    void mostrar_nombre_escritor();
    //PRE
    //POS
    void mostrar_nacionalidad();
    //PRE
    //POS
    void mostrar_anio_nacimiento();
    //PRE
    //POS
    void mostrar_anio_fallecimiento();
    //PRE
    //POS
    void mostrar_escritor();

    //PRE
    //POS
    int comparar (Escritor* escritor_a_comparar);

    //PRE
    //POS
    ~Escritor();
};


#endif // ESCRITOR_H_INCLUDED
