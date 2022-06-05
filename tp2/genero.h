#ifndef GENERO_H_INCLUDED
#define GENERO_H_INCLUDED

#include <string>
using namespace std;

typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, TERROR, ROMANTICA, HISTORICA} genero_t;


//----------Convertir tipo----------
//PRE: Genero es una palabra dentro del enum genero.
//POS: Asocia a genero con su genero_t.
genero_t string_a_genero(string genero);
//PRE
//POS
bool es_genero_valido(genero_t genero);

#endif // GENERO_H_INCLUDED
