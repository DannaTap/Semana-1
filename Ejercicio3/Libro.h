//
// Created by danna on 5/3/2026.
//

#ifndef SEMANA1EJE3_LIBRO_H
#define SEMANA1EJE3_LIBRO_H

#include <iostream>
using namespace std;
class Autor;

class Libro
{
private:
    string titulo;
    Autor *autor;
public:
    Libro(string t, Autor *a);
    void mostrar();
    string getTitulo();

};


#endif //SEMANA1EJE3_LIBRO_H