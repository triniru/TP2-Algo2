#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "escritor.h"

//typedef Escritor* Dato;

template < class Dato >

class Nodo {
private:
	Dato dato;
	Nodo* anterior;
	Nodo* siguiente;

public:
	//----------Constructor----------
	//PRE: -
	//POS: Construye un nodo con elemento como dato, y siguiente y anterior en nullptr.
	Nodo(Dato elemento);


	//----------Obtener----------
    //PRE: -
	//POS: Devuelve el Dato que contiene el nodo.
	Dato obtener_dato();
    //PRE: -
    //POS: Devuelve el puntero siguiente.
	Nodo* obtener_siguiente();
	//PRE: -
	//POS: Devuelve el puntero anterior.
	Nodo* obtener_anterior();


	//----------Cambiar----------
	//PRE: Siguiente es un puntero válido
	//POS: Cambia el puntero siguiente por siguiente.
	void cambiar_siguiente(Nodo* siguiente);
    //PRE: Anterior es un puntero valido.
    //POS: Cambia el puntero anterior por anterio.
    void cambiar_anterior(Nodo* anterior);


    //----------Borrar dato----------
	//PRE: -
	//POS: Borra el Dato del Nodo.
	void borrar();


	//----------Destructor----------
	//PRE:
	//POS
    ~Nodo();
};


template < class Dato >
Nodo< Dato > :: Nodo(Dato elemento) {
    this->dato = elemento;
    this->anterior = nullptr;
    this->siguiente = nullptr;
}

template < class Dato >
void Nodo< Dato > :: cambiar_siguiente(Nodo* siguiente) {
    this->siguiente = siguiente;
}

template < class Dato >
void Nodo< Dato > :: cambiar_anterior(Nodo* anterior) {
    this->anterior = anterior;
}

template < class Dato >
Dato Nodo< Dato > :: obtener_dato() {
    return this->dato;
}

template < class Dato >
Nodo<Dato>* Nodo< Dato > :: obtener_siguiente() {
    return this->siguiente;
}

template < class Dato >
Nodo<Dato>* Nodo< Dato > :: obtener_anterior() {
    return this->anterior;
}

template < class Dato >
void Nodo< Dato > :: borrar() {
    delete this->dato;
}

template < class Dato >
Nodo< Dato > :: ~Nodo() {
}

#endif // NODO_H_INCLUDED
