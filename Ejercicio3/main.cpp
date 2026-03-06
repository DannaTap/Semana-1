#include <iostream>
#include "Libro.h"
#include "Autor.h"
using namespace std;

int main()
{
    Autor * autor1= new Autor("Jose");
    Autor * autor2 = new Autor("Maria");

    Libro * libro1= new Libro("Frankeintein",autor1);
    Libro * libro2 = new Libro("Diario",autor2);
    Libro *libro3= new Libro("Bella Durmiente",autor2);

    autor1->agregar(libro1);
    autor2->agregar(libro2);
    autor2->agregar(libro3);

    cout <<"-----------------------------"<<endl;
    cout<<"      AUTORES Y LIBROS    "<<endl;
    cout <<"-----------------------------"<<endl;
    cout<< "Lista de autores:"<<endl;
    autor1->mostrar();
    autor2->mostrar();
    cout<<endl<<"lisa de libros:"<<endl;
    libro1->mostrar();
    libro2->mostrar();
    libro3->mostrar();

    return 0;
    }
