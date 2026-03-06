//
// Created by danna on 5/3/2026.
//

#ifndef SEMANA1EJE3_AUTOR_H
#define SEMANA1EJE3_AUTOR_H

#include <iostream>
using namespace std;
class Libro;

class Autor
{
private:
    string nombre;
    Libro *libros[15];
    int cant;

public:
    Autor(string n);
    void agregar(Libro *libro);
    string getNombre();
    void mostrar();

};


#endif //SEMANA1EJE3_AUTOR_H