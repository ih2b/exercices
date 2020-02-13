#include "Eleve.h"

Eleve::Eleve()
{
    this->notes = Notes() ;
}
Eleve::Eleve(string nom ,string prenom)
{
    this->nom = nom;
    this->prenom = prenom;
    this->notes = Notes() ;
}
Eleve Eleve::nouvelleIdentite(){
Eleve E =Eleve();
    cin >> E;
    return E;
}
void Eleve::ajouterNote(double note){
    this->notes.ajout(note);
 }
void Eleve::enleverNote(){
    this->notes.enlever();
}
istream & operator >> (istream &os,  Eleve &E)
{
    cout << " nom :";
    os >> E.nom;
    cout << "Prenom";
    os >> E.prenom;
    return os;
}
Eleve::~Eleve()
{
    //dtor
}

