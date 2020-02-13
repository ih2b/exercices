#include <iostream>
#include "Cylindre.h"
using namespace std;

int main()
{
    Cylindre C1 = Cylindre(2,4);
    cout << C1.rayon_de_la_base() << endl;
    cout << C1.surface_de_la_base() << endl;
    cout << C1.volume_de_la_base() << endl;
    cout << C1.perimetre_de_la_base() << endl;
    cout << C1.surface_laterale() << endl;
    return 0;
}
