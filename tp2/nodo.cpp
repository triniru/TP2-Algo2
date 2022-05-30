#include "nodo.h"

Nodo::Nodo(Dato elemento){
    this->dato = elemento;
    this->anterior = nullptr;
    this->siguiente = nullptr;
}

void Nodo::cambiar_siguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}

void Nodo::cambiar_anterior(Nodo* anterior){
    this->anterior = anterior;
}

Dato Nodo::obtener_dato(){
    return this->dato;
}

Nodo* Nodo::obtener_siguiente(){
    return this->siguiente;
}

Nodo* Nodo::obtener_anterior(){
    return this->anterior;
}

void Nodo::borrar(){
    delete this->dato;
}
