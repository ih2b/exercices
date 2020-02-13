#include "Cercle.h"
#include <iostream>
using namespace std;
Cercle::Cercle()
{
}
Cercle::Cercle(int couleur ,int epaisser, Point point ,int rayon ):ObjetGraphique(couleur,epaisser,point)
{
    this->rayon=rayon;
}
int Cercle::Rayon(){
    return this->rayon ;
}
void Cercle::modifierRayon(int nouveauRayon){
    this->rayon = nouveauRayon ;
}
void Cercle::afficher(){
 cout<<"Cercle rayon : "<<this->rayon<<" couleur "<<ObjetGraphique::Couleur()<<" epaisser : "<<ObjetGraphique::Epaisseur()<<endl;
}
void Cercle::effacer(){
cout<<"cercle effacé"<<endl;
}
Cercle::~Cercle()
{
    //dtor
}
