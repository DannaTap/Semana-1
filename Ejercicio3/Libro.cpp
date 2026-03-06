//
// Created by danna on 5/3/2026.
//

#include "Libro.h"
#include "Autor.h"


Libro::Libro(string t, Autor *a)
{
    titulo=t;
    autor=a;
}

void Libro::mostrar()
{
    cout<<"El libro: "<< titulo<<" fue escrito por: "<< autor->getNombre() << endl;
}

string Libro::getTitulo()
{
    return titulo;
}
