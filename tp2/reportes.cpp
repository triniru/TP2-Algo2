#include "reportes.h"

void mostrar_escritores(Lista<Escritor*>* lista_escritores){

    lista_escritores->inicializar();
    while(lista_escritores->hay_siguiente()){
        Escritor* escritor_actual = lista_escritores->siguiente();
        escritor_actual->mostrar_escritor();
    }
}
