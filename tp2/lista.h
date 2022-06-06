#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

template < class Tipo >

class Lista {
private:
	Nodo<Tipo>* primero;
	Nodo<Tipo>* ultimo;
	Nodo<Tipo>* actual;
	int cantidad;

public:
	//----------Constructor----------
	//PRE: -
	//POS: Construye una Lista vacía.
	Lista();


	//----------Alta----------
	//PRE: Elemento es un Dato valido.
	//POS: Agrega un elemento a la Lista.
	void alta(Tipo elemento);


	//----------Baja----------
	//PRE: La Lista no puede estar vacia.
	//POS: Elimina un elemento de la Lista.
	void baja(Tipo elemento);


	//----------Consulta----------
	//PRE: La Lista no puede estar vacia.
	//POS: Devuelve el primer elemento de la Lista.
	Tipo consulta_primero();
    //PRE: La Lista no puede estar vacia.
    //POS: Devuelve el ultimo elemento de la Lista.
    Tipo consulta_ultimo();
    //PRE:
    //POS:
    Tipo consulta_dato(int posicion);
    //PRE:
    //POS:
    int consulta_cantidad();


	//----------Buscar----------
    //PRE
    //POS
    Tipo buscar(Tipo dato_a_buscar);
    //PRE
    //POS
    Tipo buscar_minimo(Tipo inicial, int minimo_anterior);

	//----------Vacia----------
	//PRE: -
	//POS: Devuelve true si la Lista está vacía, false de lo contrario.
	bool vacia();

	//----------Iterador----------
	//PRE
	//POS
	void inicializar();
	//PRE
	//POS
    bool hay_siguiente();
	//PRE
	//POS
	Tipo siguiente();


	//----------Destructor----------
	//PRE
	//POS
	~Lista();
};


//Constructor
template < class Tipo >
Lista<Tipo> :: Lista() {

    this->primero = nullptr;
    this->ultimo = nullptr;
    this->actual = nullptr;
    this->cantidad = 0;

}


//Alta
template < class Tipo >
void Lista<Tipo> :: alta(Tipo elemento) {

    Nodo<Tipo>* nodo = new Nodo<Tipo>(elemento);

    if(this->consulta_primero() == nullptr){
        this->primero = nodo;
        this->ultimo = nodo;

    } else {
        inicializar();
        while(actual != nullptr && actual->obtener_dato()->comparar(elemento) < 0){
            actual = actual->obtener_siguiente();
        }

        if(actual == nullptr){
            nodo->cambiar_anterior(this->ultimo);
            this->ultimo->cambiar_siguiente(nodo);
            this->ultimo = nodo;

        } else if(actual->obtener_anterior() == nullptr){
            nodo->cambiar_siguiente(actual);
            nodo->obtener_siguiente()->cambiar_anterior(nodo);
            this->primero = nodo;

        } else {
            nodo->cambiar_siguiente(actual);
            nodo->cambiar_anterior(actual->obtener_anterior());
            nodo->obtener_siguiente()->cambiar_anterior(nodo);
            nodo->obtener_anterior()->cambiar_siguiente(nodo);
        }
    }
    this->cantidad++;
}


//Baja
template < class Tipo >
void Lista<Tipo> :: baja(Tipo elemento) {

    Nodo<Tipo>* aux = this->primero;

    while(aux->obtener_dato()->comparar_para_baja(elemento) != 0 && aux != nullptr) {
        aux = aux->obtener_siguiente();
    }

    if(aux != nullptr) {
        if(aux != this->primero) {
            aux->obtener_anterior()->cambiar_siguiente(aux->obtener_siguiente());

        } else {
            this->primero = aux->obtener_siguiente();
        }

        if(aux != this->ultimo) {
            aux->obtener_siguiente()->cambiar_anterior(aux->obtener_anterior());

        } else {
            this->ultimo = aux->obtener_anterior();
        }

        aux->borrar();
        delete aux;
        this->cantidad--;
    }
}


//Consulta
template < class Tipo >
Tipo Lista<Tipo> :: consulta_primero() {

    if(this->primero != nullptr)
        return this->primero->obtener_dato();

    else
        return nullptr;

}

template < class Tipo >
Tipo Lista<Tipo> :: consulta_ultimo() {
    return this->ultimo->obtener_dato();
}

template < class Tipo >
Tipo Lista<Tipo> :: consulta_dato(int posicion) {

    int contador = 1;
    Nodo <Tipo>* aux = this->primero;

    while(contador < posicion ) {
        aux = aux->obtener_siguiente();
        contador++;
    }

    return aux->obtener_dato();
}

template < class Tipo >
int Lista<Tipo> :: consulta_cantidad(){
    return cantidad;
}


//Buscar
template < class Tipo >
Tipo Lista<Tipo> :: buscar(Tipo dato_a_buscar){
    this->inicializar();
    bool encontrado = false;
    Tipo aux = nullptr;
    while(encontrado == false && hay_siguiente()){
        aux = siguiente();
        if(aux->comparar(dato_a_buscar) == 0){
            encontrado = true;
        }
    }
    if(encontrado == false)
        return nullptr;
    return aux;
}

template < class Tipo >
Tipo Lista<Tipo> :: buscar_minimo(Tipo inicial, int minimo_anterior){

    if(this->primero == nullptr)
        return nullptr;

    Tipo minimo = inicial;

    this->actual = this->primero;

    while(this->actual != nullptr){

        Tipo dato_actual = this->actual->obtener_dato();

        if(dato_actual->comparar_minutos_lectura(minimo, minimo_anterior) < 0){
                minimo = dato_actual;
        }
        this->actual = this->actual->obtener_siguiente();
    }

    return minimo;
}



//Vacia
template < class Tipo >
bool Lista<Tipo> :: vacia() {
    return this->primero == nullptr;
}


//Iterador
template < class Tipo >
void Lista<Tipo> :: inicializar() {
    this->actual = this->primero;
}


template < class Tipo >
bool Lista<Tipo> :: hay_siguiente() {
    return this->actual != nullptr;
}


template < class Tipo >
Tipo Lista<Tipo> :: siguiente() {

    Tipo dato = this->actual->obtener_dato();
    this->actual = this->actual->obtener_siguiente();
    return dato;

}



//Destructor
template < class Tipo >
Lista< Tipo > :: ~Lista() {

    while(!vacia()) {
        baja(this->primero->obtener_dato());
    }
}


#endif

