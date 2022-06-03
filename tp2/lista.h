#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

template < class Tipo >

class Lista {
private:
	Nodo<Tipo>* primero;
	Nodo<Tipo>* ultimo;
	Nodo<Tipo>* actual;

public:
	//----------Constructor
	//PRE: -
	//POS: Construye una Lista vacía.
	Lista();


	//----------Alta
	//PRE: Elemento es un Dato valido.
	//POS: Agrega un elemento a la Lista.
	void alta(Tipo elemento);


	//----------Baja
	//PRE: La Lista no puede estar vacia.
	//POS: Elimina un elemento de la Lista.
	void baja(Tipo elemento);


	//----------Consulta
	//PRE: La Lista no puede estar vacia.
	//POS: Devuelve el primer elemento de la Lista.
	Tipo consulta_primero();
    //PRE: La Lista no puede estar vacia.
    //POS: Devuelve el ultimo elemento de la Lista.
    Tipo consulta_ultimo();
    //PRE
    //POS
    Tipo consulta_dato(int posicion);

	//----------Vacia
	//PRE: -
	//POS: Devuelve true si la Lista está vacía, false de lo contrario.
	bool vacia();

	//Iterador
	void inicializar();
	bool hay_siguiente();
	Tipo siguiente();

	//----------
	//PRE
	//POS
	//Destructor
	~Lista();
};


//Constructor
template < class Tipo >
Lista < Tipo > :: Lista() {
    this->primero = nullptr;
    this->ultimo = nullptr;
    this->actual = nullptr;
}

//Alta
template < class Tipo >
void Lista< Tipo > :: alta(Tipo elemento) {
    Nodo< Tipo >* nodo = new Nodo<Tipo>(elemento);
    if(this->consulta_primero() == nullptr){
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
void Lista< Tipo > :: baja(Tipo elemento) {
    Nodo< Tipo >* aux = this->primero;

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
        delete aux;
    }
}

//Consulta
template < class Tipo >
Tipo Lista< Tipo > :: consulta_primero() {
    if(this->primero != nullptr)
        return this->primero->obtener_dato();
    return nullptr;
}

template < class Tipo >
Tipo Lista< Tipo > :: consulta_ultimo(){
    return this->ultimo->obtener_dato();
}

template < class Tipo >
Tipo Lista< Tipo > :: consulta_dato(int posicion){
    int contador = 1;
    Nodo < Tipo >* aux = this->primero;
    while( contador < posicion ){
        aux = aux->obtener_siguiente();
    }
    return aux->obtener_dato();
}

//Vacia
template < class Tipo >
bool Lista< Tipo > :: vacia() {
    return this->primero == nullptr;
}


//Iterador
template < class Tipo >
void Lista<Tipo> :: inicializar(){
    this->actual = this->primero;
}

template < class Tipo >
bool Lista<Tipo> :: hay_siguiente(){
    return this->actual != nullptr;
}

template < class Tipo >
Tipo Lista<Tipo> :: siguiente(){
    Tipo dato = this->actual->obtener_dato();
    this->actual = this->actual->obtener_siguiente();
    return dato;
}



//Destructor
template < class Tipo >
Lista< Tipo > :: ~Lista() {
    while(!vacia() /*this->primero != nullptr*/){
        baja(this->primero->obtener_dato());
    }
}


#endif

