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

int main()
{
    Lista<Escritor*>* lista_escritores = new Lista<Escritor*>();
    //Lista<Escritor*>* lista_escritores = nullptr;
    Parser_escritor parser_escritor = Parser_escritor(lista_escritores, "archivos/01_casos_basicos_escritores.txt");
    parser_escritor.procesar_entrada();
    mostrar_escritores(lista_escritores);


    return 0;
}
