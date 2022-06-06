#include <iostream>
#include <fstream>
#include <string>
#include<time.h>

using namespace std;
#include "escritor.h"
#include "lectura.h"
#include "lista.h"
#include "parser_ecritor.h"
#include "parser_lectura.h"
#include "reportes.h"
#include "menu.h"

int main(int argc, char** argv)
{
    srand((unsigned)time(NULL));

    if(argc < 3){
        cout << "La cantidad de argumentos no es valida." << endl;
        return -1;
    }

    Lista<Escritor*>* lista_escritores = new Lista<Escritor*>();
    Parser_escritor parser_escritor = Parser_escritor(lista_escritores, argv[1]);
    parser_escritor.procesar_entrada();

    Lista<Lectura*>* lista_lecturas = new Lista<Lectura*>();
    Parser_lectura parser_lectura = Parser_lectura(lista_lecturas, argv[2]);
    parser_lectura.procesar_entrada(lista_escritores);


    Menu* menu = new Menu(lista_escritores, lista_lecturas);
    menu->iniciar_menu();

    delete(lista_lecturas);
    delete(lista_escritores);

    return 0;
}
