#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "nodo.h"

template < class Tipo >

class Cola {
private:
	Nodo<Tipo>* primero;
	Nodo<Tipo>* ultimo;

public:
	//----------Constructor----------
	//PRE: -
	//POS: Construye una Cola vacía.
	Cola();


	//----------Alta----------
	//PRE: Elemento es un Dato valido.
	//POS: Agrega un elemento a la Cola.
	void alta(Tipo elemento);


	//----------Baja----------
	//PRE: La Cola no puede estar vacia.
	//POS: Elimina un elemento de la Cola.
	void baja();


	//----------Consulta----------
	//PRE: La Cola no puede estar vacia.
	//POS: Devuelve el primer elemento de la Cola.
	Tipo consulta_primero();
    //PRE: Posicion debe ser un numero real mayor a 0.
    //POS:
    Tipo consulta_dato(int posicion);


	//----------Vacia----------
	//PRE: -
	//POS: Devuelve true si la Cola está vacía, false de lo contrario.
	bool vacia();


	//----------Destructor----------
	//PRE: -
	//POS: -
	~Cola();
};


//Constructor
template < class Tipo >
Cola<Tipo> :: Cola() {
    this->primero = nullptr;
    this->ultimo = nullptr;
}


//Alta
template < class Tipo >
void Cola<Tipo> :: alta(Tipo elemento) {

    Nodo<Tipo>* nodo = new Nodo<Tipo>(elemento);

    if(this->consulta_primero() == nullptr ) {
        this->primero = nodo;
        this->ultimo = nodo;

    } else {
        nodo->cambiar_anterior(this->ultimo);
        this->ultimo->cambiar_siguiente(nodo);
        this->ultimo = nodo;
    }
}


//Baja
template < class Tipo >
void Cola<Tipo> :: baja() {

    if(this->primero == nullptr)
        return;

    Nodo<Tipo>* aux = this->primero;

    if (aux->obtener_siguiente() != nullptr)
        aux->obtener_siguiente()->cambiar_anterior(nullptr);
    this->primero = aux->obtener_siguiente();

    //aux->borrar();
    //delete aux;         Borro el delete porque sino pierdo la referencia al dato de la lista.
}


//Consulta
template < class Tipo >
Tipo Cola<Tipo> :: consulta_primero() {

    if(this->primero != nullptr)
        return this->primero->obtener_dato();

    else
        return nullptr;
}


//Vacia
template < class Tipo >
bool Cola<Tipo> :: vacia() {
    return this->primero == nullptr;
}


//Destructor
template < class Tipo >
Cola<Tipo> :: ~Cola() {

    while(!vacia()) {
        baja();
    }
}


#endif // COLA_H_INCLUDED
