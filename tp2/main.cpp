#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#include "escritor.h"
#include "lectura.h"
#include "lista.h"
#include "parser_ecritor.h"
#include "parser_lectura.h"
#include "reportes.h"
#include "menu.h"

int main()
{
    Lista<Escritor*>* lista_escritores = new Lista<Escritor*>();
    Parser_escritor parser_escritor = Parser_escritor(lista_escritores, "archivos/01_casos_basicos_escritores.txt");
    parser_escritor.procesar_entrada();

    Lista<Lectura*>* lista_lecturas = new Lista<Lectura*>();
    /*Parser_lectura parser_lectura = Parser_lectura(lista_lecturas, "archivos/01_casos_basicos_lectura.txt");
    parser_lectura.procesar_entrada(lista_escritores);*/


    Menu* menu = new Menu(lista_escritores, lista_lecturas);
    menu->iniciar_menu();

    return 0;
}
