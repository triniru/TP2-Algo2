#ifndef REPORTES_H_INCLUDED
#define REPORTES_H_INCLUDED

#include "lista.h"
#include "lectura.h"
#include "escritor.h"


//PRE: -
//POS: -
void mostrar_escritores(Lista<Escritor*>* lista_escritores);
//PRE: -
//POS: -
void mostrar_lecturas(Lista<Lectura*>* lista_lectura);
//PRE: -
//POS: -
void mostrar_lecturas_entre_anios(Lista<Lectura*>* lista_lectura);
//PRE: -
//POS: -
void mostrar_lecturas_del_escritor(Lista<Lectura*>* lista_lecturas);



#endif // REPORTES_H_INCLUDED
