//
// Created by danna on 3/3/2026.
//

#ifndef UNTITLED1_MAMIFERO_H
#define UNTITLED1_MAMIFERO_H
#include <iostream>
using namespace std;
#include "Animal.h"

class Mamifero:public Animal{
public:
    void tipo()override{
        cout<<"Tipo: Mamifero"<<endl;
    }

};


#endif //UNTITLED1_MAMIFERO_H