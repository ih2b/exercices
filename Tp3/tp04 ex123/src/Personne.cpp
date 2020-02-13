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
void Personne::ecrire(istream& is)
              {
              cout << "nom" <<endl;
              is >> Nom;
              cout <<"prenom"<<endl;
              is >>Prenom ;
              }
virtual std::ostream& Personne::lire(std::ostream& os) const
              {
              cout << "nom :" <<endl;
              os << Nom << endl;
              cout <<"prenom :"<<endl;
              os << Prenom ;
              }
ostream & operator << (ostream &os, const Personne& P)
{
    os << P.lire(os) ;
    return os;
}
istream & operator >> (istream &os,  Personne& P)
{
    cout << " nom :";
    os >> P.Nom;
    cout << "Prenom";
    os >> P.Prenom;
    return os;
}
