#include <iostream>
#include "Notes.h"
#include "Eleve.h"
using namespace std;

int main()
{
Notes N =Notes();
    N.ajout(10);
    N.ajout(15);
    N.ajout(20);
    N.ajout(10);
    N.ajout(14);
    N.ajout(16);
    N.enlever();
    N.enlever();
    cout << N.lireNote(1) << endl;
    cout << N.nombre() << endl;
    cout << N.plusGrande()<< endl;
    cout << N.plusPetite()<< endl;
    cout << N.moyenne()<< endl;
    Eleve E =Eleve("hi","test");
    Eleve K =Eleve();
    K= E.nouvelleIdentite();
    K.ajouterNote(10);
    K.enleverNote();
    return 0;
}
