#include "lista.h"

Lista :: Lista(){
    this->primero = NULL;
    this->ultimo = NULL;
}

void Lista::alta(Dato elemento){
    Nodo* nodo = new Nodo(elemento);
    if(this->primero == NULL){
        this->primero = nodo;
        this->ultimo = nodo;
    } else {
        nodo.cambiar_anterior(this->ultimo);
        this->ultimo.cambiar_siguiente(nodo);
        this->ultimo = nodo;
    }
}

void Lista::baja(Dato elemento){

}
