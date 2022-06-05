#include "reportes.h"

void mostrar_escritores(Lista<Escritor*>* lista_escritores) {
    lista_escritores->inicializar();

    while(lista_escritores->hay_siguiente()){
        Escritor* escritor_actual = lista_escritores->siguiente();
        escritor_actual->mostrar_escritor();
    }
}



void mostrar_lecturas(Lista<Lectura*>* lista_lectura) {
    lista_lectura->inicializar();

    while(lista_lectura->hay_siguiente()) {
        Lectura* lectura_actual = lista_lectura->siguiente();
        lectura_actual->mostrar_todo();
    }
}



void mostrar_lecturas_entre_anios(Lista<Lectura*>* lista_lectura){
    lista_lectura->inicializar();

    cout << "Ingrese los anios entre los que quiere listar las lecturas, primero el menor y luego el mayor." << endl;
    cout << "1er anio: " << endl;
    int anio_menor;
    cin >> anio_menor;

    cout << "2do anio: " << endl;
    int anio_mayor;
    cin >> anio_mayor;

    while(lista_lectura->hay_siguiente()) {
        Lectura* lectura_actual = lista_lectura->siguiente();

        if(lectura_actual->obtener_anio_publicacion() >= anio_menor && lectura_actual->obtener_anio_publicacion() <= anio_mayor)
            lectura_actual->mostrar_todo();
    }

}


void mostrar_lecturas_del_escritor(Lista<Lectura*>* lista_lecturas) {

    lista_lecturas->inicializar();

    cout << "Ingrese el nombre del autor del cual le gustaria listar sus lecturas" << endl;
    string nombre_autor;
    cin >> nombre_autor;

    while(lista_lecturas->hay_siguiente()) {
        Lectura* lectura_actual = lista_lecturas->siguiente();

        if(lectura_actual->obtener_escritor()->obtener_nombre_y_apellido() == nombre_autor)
            lectura_actual->mostrar_todo();
    }

}
