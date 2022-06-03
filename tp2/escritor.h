#ifndef ESCRITOR_H_INCLUDED
#define ESCRITOR_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Escritor {
protected:
    int referencia;
    string nombre_y_apellido;
    string nacionalidad;
    int anio_nacimiento;
    int anio_fallecimiento;

public:
    //----------Constructor----------
    //PRE: -
    //POS: Construye un Escritor con sus atributos.
    Escritor(int referencia, string nombre_y_apellido, string nacionalidad, int anio_nacimiento, int anio_fallecimiento);


    //----------Obtener----------
    //PRE: -
    //POS: Devuelve la referencia del Escritor.
    int obtener_referencia();
    //PRE: -
    //POS: Devuelve el nombre y apellido del Escritor.
    string obtener_nombre_y_apellido();
    //PRE: -
    //POS: Devuelve la nacionalidad del Escritor.
    string obtener_nacionalidad();
    //PRE: -
    //POS: Devuelve el año de nacimiento del Escritor.
    int obtener_anio_nacimiento();
    //PRE: -
    //POS: Devuelve el año de fallecimiento del Escritor.
    int obtener_anio_fallecimiento();


    //----------Cambiar----------
    //PRE:
    //POS:
    void cambiar_anio_fallecimiento(int nuevo_anio);


    //----------Mostrar----------
    //PRE: El escritor puede ser (o no) anónimo.
    //POS: Muestra nombre y apellido del Escritor. Este puede ser anónimo.
    void mostrar_nombre_escritor();
    //PRE: Si el escritor es anónimo, la nacionalidad es desconocida y por ende "¿?"
    //POS: Muestra la nacionalidad del Escritor.
    void mostrar_nacionalidad();
    //PRE: -
    //POS: Muestra el año de nacimiento del Escritor y si no se sabe es -1.
    void mostrar_anio_nacimiento();
    //PRE: -
    //POS: Muestra el año de fallecimiento del Escritor. En caso de desconocerse, es -1.
    void mostrar_anio_fallecimiento();
    //PRE: -
    //POS: Muestra al Escritor con todos sus atributos.
    void mostrar_escritor();


    //----------Comparar----------
    //PRE: -
    //POS: Compara los nombres y apellidos de dos escritores, si son iguales devuelve 0, de lo contrario devuelve -1.
    int comparar (Escritor* escritor_a_comparar);


    //----------Destructor----------
    //PRE
    //POS
    ~Escritor();
};


#endif // ESCRITOR_H_INCLUDED
