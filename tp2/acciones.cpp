#include <iostream>

#include "acciones.h"

using namespace std;


//SUBMENU_1
//Referencia valida?
bool es_referencia_valida(char referencia) {
    return referencia == 'N' || referencia == 'C' || referencia == 'P';
}
//Agregar Lectura
void agregar_lectura(Lista<Lectura*>* lista_lecturas, Lista<Escritor*>* lista_escritores) {

    Lectura* lectura;

    cout << "Ingrese N en caso de que la lectura sea una Novela o Novela Historica, C en caso de que sea un Cuento o P en caso de que sea un Poema" << endl;
    char referencia;
    cin >> referencia;

    while(!es_referencia_valida(referencia)) {
        cout << "La referencia ingresada no es valida, intentelo de nuevo." << endl;
        cin >> referencia;
    }

    cout << "Ingrese el titulo" << endl;
    string titulo;
    cin >> titulo;

    cout << "Aproximadamente, ¿Cuantos minutos se demora en leer " << titulo << "?" << endl;
    int minutos_en_leer;
    cin >> minutos_en_leer;

    cout << "¿Cuando se publico " << titulo << "? Importante: Inserte -1 en caso de desconocerlo."  << endl;
    int anio_publicacion;
    cin >> anio_publicacion;

    cout << "¿Quien la escribio? En caso de que no se conozca quien lo escribio, ingresar ANONIMO" << endl;
    string nombre_y_apellido;
    cin >> nombre_y_apellido;

    Escritor* escritor = new Escritor(0, nombre_y_apellido, "", 0, 0);

    if(lista_escritores->buscar(escritor) == nullptr) {
        escritor = crear_escritor(lista_escritores);
    }

    lista_escritores->buscar(escritor)->mostrar_escritor();

    if(referencia == 'N') {

        cout << "¿De que genero es la novela? Los generos validos son: DRAMA, COMEDIA, FICCION, SUSPENSO, TERROR. Ingresar en mayuscula y sin tildes." << endl;
        string genero;
        cin >> genero;

        if(genero == "HISTORICA") {
            cout << "Ingrese el tema de esta novela historica" << endl;
            string tema;
            cin >> tema;

            Novela_historica* novela_historica = new Novela_historica(titulo, minutos_en_leer, anio_publicacion, escritor, string_a_genero(genero), tema);
            lectura = novela_historica;

        } else {
            Novela* novela = new Novela(titulo, minutos_en_leer, anio_publicacion, escritor, string_a_genero(genero));
            lectura = novela;
        }

    } else if (referencia == 'C') {
        cout << "¿En que libro esta publicado este cuento?" << endl;
        string libro;
        cin >> libro;

        Cuento* cuento = new Cuento(titulo, minutos_en_leer, anio_publicacion, escritor, libro);
        lectura = cuento;

    } else if (referencia == 'P') {
        cout << "¿Cuantos versos tiene este poema?" << endl;
        int cantidad_versos;
        cin >> cantidad_versos;

        Poema* poema = new Poema(titulo, minutos_en_leer, anio_publicacion, escritor, cantidad_versos);
        lectura = poema;
    }

    lista_lecturas->alta(lectura);
}
//Quitar Lectura
void quitar_lectura(Lista<Lectura*>* lista_lecturas) {
    cout << "¿Que lectura desea eliminar de la lista?" << endl;
    string titulo;
    cin >> titulo;

   /* while(lista_lecturas->hay_siguiente()){
        lista_lecturas->actual->obtener_siguiente();

        if(lista_lecturas->actual->obtener_dato()->obtener_titulo() == titulo){
            lista_lecturas->baja(actual);
        }
    }*/


}



//SUMENU_2
//Crear un escritor
Escritor* crear_escritor(Lista<Escritor*>* lista_escritores){
    int referencia = 1;
    if(!lista_escritores->vacia())
        referencia = lista_escritores->consulta_ultimo()->obtener_referencia() + 1;

    cout << "¿Quien es el Escritor que quiere agregar?" << endl;
    string nombre_y_apellido;
    cin >> nombre_y_apellido;

    cout << "¿Cual es la nacionalidad de " << nombre_y_apellido << "?" << endl;
    string nacionalidad;
    cin >> nacionalidad;

    cout << "¿Cuando nacio " << nombre_y_apellido << "? Importante: Inserte -1 en caso de desconocerlo."  << endl;
    int anio_nacimiento;
    cin >> anio_nacimiento;

    cout << "¿Cuando fallecio " << nombre_y_apellido << "? Importante: Inserte -1 en caso de desconocerlo o que no haya fallecido."  << endl;
    int anio_fallecimiento;
    cin >> anio_fallecimiento;

    Escritor* escritor_nuevo = new Escritor(referencia, nombre_y_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
    lista_escritores->alta(escritor_nuevo);

    return escritor_nuevo;

}
//Agregar un escritor
void agregar_escritor(Lista<Escritor*>* lista_escritores){
    crear_escritor(lista_escritores);
}
//Cambiar año fallecimiento de un escritor
void cambiar_dato_escritor(Lista<Escritor*>* lista_escritores){

    cout << "¿A que escritor le quiere cambiar la fecha de fallecimiento?" << endl;
    string nombre_escritor_a_cambiar;
    cin >> nombre_escritor_a_cambiar;

    Escritor* escritor = new Escritor(0, nombre_escritor_a_cambiar, "", 0, 0);

    cout << "¿En que año fallecio?" << endl;
    int anio_fallecimiento_nuevo;
    cin >> anio_fallecimiento_nuevo;

    Escritor* escritor_a_actualizar = lista_escritores->buscar(escritor);

    if(escritor_a_actualizar != nullptr){
        escritor_a_actualizar->cambiar_anio_fallecimiento(anio_fallecimiento_nuevo);
    }

}


