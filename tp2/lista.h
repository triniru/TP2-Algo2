#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

class Lista {
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	//----------Constructor
	//PRE: -
	//POS: Construye una Lista vacía.
	Lista();


	//----------Alta
	//PRE: Elemento es un Dato valido.
	//POS: Agrega un elemento a la Lista.
	void alta(Dato elemento);


	//----------Baja
	//PRE: La Lista no puede estar vacia.
	//POS: Elimina un elemento de la Lista.
	void baja(Dato elemento);


	//----------Consulta
	//PRE: La Lista no puede estar vacia.
	//POS: Devuelve el primer elemento de la Lista.
	Dato consulta_primero();
    //PRE: La Lista no puede estar vacia.
    //POS: Devuelve el ultimo elemento de la Lista.
    Dato consulta_ultimo();

	//----------Vacia
	//PRE: -
	//POS: Devuelve true si la Lista está vacía, false de lo contrario.
	bool vacia();

	//----------
	//PRE
	//POS
	//Destructor
	~Lista();
};

#endif

