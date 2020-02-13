#include <iostream>
#include "Point.h"
#include "ObjetGraphique.h"
#include "Cercle.h"
#include "Ligne.h"
#include "Triangle.h"
using namespace std;




int main()
{
    Point P1 = Point(4,5);
    Point P2 = Point(1,3);
    Point P3 = Point(9,5);
    Point P4 = Point(8,5);
    Point P5 = Point(4,7);
    cout <<" Point x :"<< P1.x() << endl;
    cout <<"y :" <<P1.y() << endl;
    P1.deplacerDe(4,5);
    cout <<" Point x :"<< P1.x() << endl;
    cout <<"y :"<< P1.y() << endl;
    P1.deplacerVers(4,8);
    cout <<"nombre des points :"<< P1.NbPoints() << endl;
    Cercle C =Cercle(4,5,P1,6);
    C.modifierRayon(10);
    cout <<"Cercle Rayon :" <<C.Rayon() << endl;
    C.afficher();
    C.effacer();
    Ligne L = Ligne(6,5,P2,4,1);
    cout <<" Ligne angle :"<< L.getAngle()<< endl;
    cout <<" Ligne longueur :"<< L.getLongueur()<< endl;
    L.modifierLigne(52,6);
    L.afficher();
    L.effacer();
    Triangle T = Triangle(2,1,P3,1,8,3,1,P4,1,5,9,1,P5,1,4);
    T.afficher();

}
