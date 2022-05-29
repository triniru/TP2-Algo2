#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#include "escritor.h"
#include "novela.h"

int main()
{
    fstream newfile;
    newfile.open("archivos/01_casos_basicos_escritores.txt",ios::in);
    if (newfile.is_open()){
        string numero, nombre_y_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento;
        string linea_vacia = "\n";

        while(getline(newfile, numero)){
            getline(newfile, nombre_y_apellido);
            getline(newfile, nacionalidad);
            getline(newfile, anio_nacimiento);
            getline(newfile, anio_fallecimiento);
            getline(newfile, linea_vacia);
            cout << anio_nacimiento << endl;
            Escritor escritor(nombre_y_apellido, nacionalidad, stoi(anio_nacimiento), stoi(anio_fallecimiento));
            escritor.mostrar_escritor();
            //cout << numero << "\n";
            //cout << nombre_y_apellido << endl;
            //cout << nacionalidad << endl;

            //cout << anio_fallecimiento << endl;
            //<< endl;
        }
        newfile.close();
    }

    //Escritor escritor("Julio Cortazar", "argentino", 1914, 1984);
    //escritor.mostrar_escritor();
    //Novela rayuela("Rayuela", 88, 1963, &escritor, 'F');
    //rayuela.mostrar_novela();

    return 0;
}
