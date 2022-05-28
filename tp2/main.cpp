#include <iostream>

using namespace std;
#include "escritor.h"
#include "novela.h"

int main()
{
    Escritor escritor("Julio Cortazar", "argentino", 1914, 1984);
    escritor.mostrar_escritor();
    Novela rayuela("Rayuela", 88, 1963, &escritor, 'F');
    rayuela.mostrar_novela();

    return 0;
}
