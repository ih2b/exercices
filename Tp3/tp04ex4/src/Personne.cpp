#include "Personne.h"
#include <iostream>
Personne::Personne(string Nom ="lo",string Prenom="lo")
{
   this->Nom =Nom;
   this->Prenom=Prenom;
}
Personne::Personne()
{
}


Personne::~Personne()
{
    //dtor
}
void Personne::setNom(string Nom) {
            this->Nom = Nom;
            }
string Personne::getNom() {
        return Nom;
        }
void Personne::setPrenom(string Prenom) {
            this->Prenom = Prenom;
            }
string Personne::getPrenom() {
        return Prenom;
        }
istream& Personne::ecrire(istream& is)
              {
              cout << "nom" <<endl;
              is >> Nom;
              cout <<"prenom"<<endl;
              is >>Prenom ;
              return is ;
              }
ostream& Personne::lire(ostream& os) const
              {
              cout << "nom :" <<endl;
              os << Nom << endl;
              cout <<"prenom :"<<endl;
              os << Prenom ;
              return os ;
              }
ostream & operator << (ostream &os, const Personne& P)
{
    return P.lire(os);
}
istream & operator >> (istream &os,  Personne& P)
{
    return P.ecrire(os);
}
