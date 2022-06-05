#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "lista.h"
#include "escritor.h"
#include "lectura.h"
#include "genero.h"
#include "acciones.h"
#include "reportes.h"

class Menu {

private:

    Lista<Escritor*>* lista_escritores;
    Lista<Lectura*>* lista_lecturas;

public:
    //----------Constructor----------
    Menu(Lista<Escritor*>* lista_escritores, Lista<Lectura*>* lista_lecturas);

    //----------Iniciar Menu----------
    void iniciar_menu();

private:
    //----------Iniciar Submenues----------
    void iniciar_submenu_1();
    void iniciar_submenu_2();
    void iniciar_submenu_3();

    //----------Pedir Opcion----------
    char pedir_opcion();

    //----------Pausa el Menu----------
    void menu_pausa();

    //----------Mostrar
    void mostrar_menu_inicial();

    //----------Procesar Menues----------
    void procesar_opcion_menu(char opcion);
    void procesar_opcion_submenu_1(char opcion);
    void procesar_opcion_submenu_2(char opcion);
    void procesar_opcion_submenu_3(char opcion);

    //----------Destructor----------
    ~Menu();

};


#endif // MENU_H_INCLUDED
