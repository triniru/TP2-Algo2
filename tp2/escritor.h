#ifndef ESCRITOR_H_INCLUDED
#define ESCRITOR_H_INCLUDED

class Escritor{
protected:
    char* nombre_y_apellido;
    char* nacionalidad;
    int anio_nacimiento;
    int anio_fallecimiento;

public:
    Escritor(char* nombre_y_apellido, char* nacionalidad, int anio_nacimiento, int anio_fallecimiento);
};


#endif // ESCRITOR_H_INCLUDED
