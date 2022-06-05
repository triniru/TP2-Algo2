#include <iostream>
#include "menu.h"

using namespace std;


Menu :: Menu(Lista<Escritor*>* lista_escritores, Lista<Lectura*>* lista_lecturas) {
    this->lista_escritores = lista_escritores;
    this->lista_lecturas = lista_lecturas;
}


void Menu :: iniciar_menu() {
    char opcion_seleccionada;
    mostrar_menu_inicial();
    opcion_seleccionada = pedir_opcion();
    procesar_opcion_menu(opcion_seleccionada);
}

void Menu :: iniciar_submenu_1() {
    char opcion_seleccionada;

    cout << "-------------------Modificar lectura-------------------" << endl;
    cout << "1. Agregar una nueva lectura a la lista." << endl
         << "2. Quitar una lectura de la lista." << endl << endl
         << "6. Volver atras." << endl << endl;

    opcion_seleccionada = pedir_opcion();
    procesar_opcion_submenu_1(opcion_seleccionada);

}

void Menu :: iniciar_submenu_2() {
    char opcion_seleccionada;

    cout      << "-------------------Modificar escritor-------------------" << endl;
    cout      << "1. Agregar un escritor." << endl
              << "2. Cambiar dato de un escritor (solo fecha de fallecimiento)." << endl<< endl
              << "6. Volver atras." << endl << endl;

    opcion_seleccionada = pedir_opcion();
    procesar_opcion_submenu_2(opcion_seleccionada);

}

void Menu :: iniciar_submenu_3() {
    char opcion_seleccionada;

    cout << "-------------------Listar escritor / lectura-------------------" << endl;
    cout << "1. Listar los escritores." << endl
         << "2. Listar todas las lecturas." << endl
         << "3. Listar las lecturas entre determinados anios." << endl
         << "4. Listar las lecturas de un determinado escritor." << endl
         << "5. Listar las novelas de determinado genero." << endl << endl
         << "6. Volver atras." << endl << endl;

    opcion_seleccionada = pedir_opcion();
    procesar_opcion_submenu_3(opcion_seleccionada);

}


char Menu :: pedir_opcion(){
    char opcion ;
    string aux;
    do{
        cout << "Ingrese la opcion que desea elegir: ";
        cin >> opcion;
        getline(cin, aux,'\n');
        cout << endl;
    } while(opcion > '9' || opcion < '0');

    return opcion;
}


void Menu :: menu_pausa() {
    system("pause");
    iniciar_menu();
}


void Menu :: mostrar_menu_inicial() {
    cout << "------------------------------------------------------- "<<endl;
    cout << "                    MENU PRINCIPAL                      "<< endl << endl
         << "1. Modificar lista de lecturas." << endl
         << "2. Modificar lista de escritores." << endl
         << "3. Listar escritor / lectura." << endl
         << "4. Sortear una lectura random para leer en una de las tertulias." << endl
         << "5. Armar una cola ordenada por tiempo de lectura, de menor a mayor." << endl<< endl
         << "6. Salir." << endl << endl;
    cout << "------------------------------------------------------- "<<endl;
}


void Menu :: procesar_opcion_menu(char opcion) {
   switch(opcion) {
        case '1' : iniciar_submenu_1(); break ;
        case '2' : iniciar_submenu_2(); break ;
        case '3' : iniciar_submenu_3(); break ;
        case '4' : mostrar_lectura_random(lista_lecturas); menu_pausa(); break ;
        case '5' : menu_pausa(); break ;
        case '6' : break ;
        default: cout << endl << "La opcion seleccionada no es valida." << endl; iniciar_menu(); break;
   }
}

void Menu :: procesar_opcion_submenu_1(char opcion) {
   switch(opcion) {
        case '1' : agregar_lectura(lista_lecturas, lista_escritores); menu_pausa(); break ;
        case '2' : quitar_lectura(lista_lecturas); menu_pausa(); break ;
        case '6' : iniciar_menu(); break ;
        default: cout << endl << "La opcion seleccionada no es valida." << endl; iniciar_menu(); break ;
   }
}

void Menu :: procesar_opcion_submenu_2(char opcion) {
   switch(opcion) {
        case '1' : agregar_escritor(lista_escritores); menu_pausa(); break;
        case '2' : cambiar_dato_escritor(lista_escritores); menu_pausa(); break ;
        case '6' : iniciar_menu(); break ;
        default: cout << endl << "La opcion seleccionada no es valida." << endl; iniciar_menu(); break;
   }
}

void Menu :: procesar_opcion_submenu_3(char opcion) {
   switch (opcion ) {
        case '1' : mostrar_escritores(lista_escritores); menu_pausa(); break ;
        case '2' : mostrar_lecturas(lista_lecturas); menu_pausa(); break ;
        case '3' : mostrar_lecturas_entre_anios(lista_lecturas); menu_pausa(); break ;
        case '4' : mostrar_lecturas_del_escritor(lista_lecturas); menu_pausa(); break ;
        case '5' : mostrar_lecturas_por_genero(lista_lecturas); menu_pausa(); break ;
        case '6' : iniciar_menu();    break ;
        default: cout << endl << "La opcion seleccionada no es valida." << endl; iniciar_menu(); break;
   }
}

Menu :: ~Menu(){}
