#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

class Lista {
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	//Constructor
	//PRE: -
	//POS: construye una Lista vacía
	Lista();

	//Alta
	//PRE: e es un Dato valido
	//POS:
	void alta(Dato elemento);

	//Baja
	//PRE: la lista no puede estar vacía
	//POS:
	void baja(Dato elemento);

	//Consulta
	//PRE: la lista no puede estar vacía
	//POS:
	Dato consulta_primero();

    //PRE
    //POS
    Dato consulta_ultimo();

	//Vacia
	//PRE: -
	//POS: devuelve true si la lista está vacía, false de lo contrario
	bool vacia();

	//Destructor
	~Lista();
};

#endif

