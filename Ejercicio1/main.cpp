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

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}