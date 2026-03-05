//
// Created by danna on 3/3/2026.
//

#ifndef UNTITLED1_PERRO_H
#define UNTITLED1_PERRO_H
#include <iostream>
using namespace std;
#include "Mamifero.h"

class Perro:public Mamifero{
public:
    void tipo()override
    {
        cout<<"Tipo: Perro"<<endl;
    }
    void nombre()
    {
        cout<<"Se llama perro"<<endl;
    }
};


#endif //UNTITLED1_PERRO_H