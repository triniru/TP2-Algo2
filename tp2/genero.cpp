#include "genero.h"

genero_t string_a_genero(string genero) {
    if(genero == "DRAMA")
        return DRAMA;
    else if(genero == "COMEDIA")
        return COMEDIA;
    else if(genero == "FICCION")
        return FICCION;
    else if(genero == "SUSPENSO")
        return SUSPENSO;
    else if(genero == "TERROR")
        return TERROR;
    else if(genero == "ROMANTICA")
        return ROMANTICA;
    else
        return HISTORICA;
}
