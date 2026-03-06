//
// Created by danna on 5/3/2026.
//

#include "Autor.h"
#include "Libro.h"

Autor::Autor(string n)
{
    nombre=n;
    cant=0;
}
void Autor::agregar(Libro *libro)
{
    if (cant<10)
    {
        libros[cant]=libro;
        cant++;
    }
}
void Autor::mostrar()
    {
        cout<<"Autor: "<<nombre<<endl;
    cout<<"libros: "<<endl;
    for (int i=0; i<cant;i++)
    {
        cout<<libros[i]->getTitulo()<<endl;
    }
    }

string Autor::getNombre()
    {
        return nombre;
    }
