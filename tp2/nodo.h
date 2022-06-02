#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "escritor.h"

typedef Escritor* Dato;

class Nodo {
private:
	Dato dato;
	Nodo* anterior;
	Nodo* siguiente;             //C++ permite hacer esto

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
    //~Nodo();
};

#endif // NODO_H_INCLUDED
