#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

typedef void* Dato;

class Nodo{
private:
	Dato dato;
	Nodo* anterior;
	Nodo* siguiente;             //C++ permite hacer esto

public:
	//Constructor
	//PRE: -
	//POS: construye un nodo con elemento como dato, y siguiente y anterior en nullptr
	Nodo(Dato elemento);

	//PRE: n es un puntero válido
	//POS: cambia el puntero anterior por n
	void cambiar_siguiente(Nodo* siguiente);

    //PRE
    //POS
    void cambiar_anterior(Nodo* anterior);

	//PRE
	//POS
	Dato obtener_dato();

    //PRE
    //POS
	Nodo* obtener_siguiente();

	//PRE
	//POS
	Nodo* ontener_anterior();
};

#endif // NODO_H_INCLUDED
