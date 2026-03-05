#include <iostream>
using namespace std;
#include "Animal.h"
#include "Mamifero.h"
#include "Perro.h"

int main()
{
Perro p1;

    Animal *a1= &p1;
    a1->tipo();

    Mamifero *m1= &p1;
    m1->tipo();


    //Downcast

    Perro p2;
    Animal *a2 = &p2;
    Perro *perroC = dynamic_cast<Perro*>(a2);

    if (perroC == nullptr)
    {
        cout<<"No hubo downcast"<<endl;
    }else
    {
        perroC->nombre();
    }

    Mamifero m2;
    Animal *a3= &m2;
    Perro *perroC2 = dynamic_cast<Perro*>(a3);
    if (perroC2 == nullptr)
    {
        cout<<"No hubo downcast"<<endl;
    }else
    {
        perroC2->nombre();
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}