#ifndef ACCIONES_H_INCLUDED
#define ACCIONES_H_INCLUDED

#include "lista.h"
#include "escritor.h"
#include "lectura.h"
#include "genero.h"
#include "novela.h"
#include "historica.h"
#include "cuento.h"
#include "poema.h"

//Submenu_1
bool es_referencia_valida(char referencia);
void agregar_lectura(Lista<Lectura*>* lista_lecturas, Lista<Escritor*>* lista_escritores);
void quitar_lectura(Lista<Lectura*>* lista_lecturas);


//Submenu_2
Escritor* crear_escritor(Lista<Escritor*>* lista_escritores);
void agregar_escritor(Lista<Escritor*>* lista_escritores);
void cambiar_dato_escritor(Lista<Escritor*>* lista_escritores);



#endif // ACCIONES_H_INCLUDED
