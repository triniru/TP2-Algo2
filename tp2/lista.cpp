#include "lista.h"

Lista :: Lista() {
    this->primero = nullptr;
    this->ultimo = nullptr;
}

void Lista :: alta(Dato elemento) {
    Nodo* nodo = new Nodo(elemento);
    if(this->primero == nullptr){
        this->primero = nodo;
        this->ultimo = nodo;
    } else {
        nodo->cambiar_anterior(this->ultimo);
        this->ultimo->cambiar_siguiente(nodo);
        this->ultimo = nodo;
    }
}

void Lista :: baja(Dato elemento) {
    Nodo* aux = this->primero;

    while(aux->obtener_dato()->comparar(elemento) != 0 && aux != nullptr) {
        aux = aux->obtener_siguiente();
    }

    if(aux != nullptr) {
        if(aux != this->primero){
            aux->obtener_anterior()->cambiar_siguiente(aux->obtener_siguiente());
        } else {
            this->primero = aux->obtener_siguiente();
        }

        if(aux != this->ultimo){
            aux->obtener_siguiente()->cambiar_anterior(aux->obtener_anterior());
        } else {
            this->ultimo = aux->obtener_anterior();
        }
        aux->borrar();
        delete aux;;
    }
}

Dato Lista :: consulta_primero() {
    return this->primero->obtener_dato();
}

Dato Lista :: consulta_ultimo(){
    return this->ultimo->obtener_dato();
}

bool Lista :: vacia() {
    return this->primero == nullptr;
}

Lista :: ~Lista() {
    while(this->primero != nullptr){
        baja(this->primero->obtener_dato());
    }
}
