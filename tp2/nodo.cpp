#include "nodo.h"

Nodo::Nodo(Dato elemento){
    this->elemento = elemento;
    this->anterior = NULL;
    this->siguiente = NULL;
}

void Nodo::cambiar_siguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}

void Nodo::cambiar_anterior(Nodo* anterior){
    this->anterior = anterior;
}
