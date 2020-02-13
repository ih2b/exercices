#ifndef ELEVE_H
#define ELEVE_H
#include <istream>
#include <iostream>
#include <string>
#include "Notes.h"
using namespace std;
using std::string ;
class Eleve
{
    public:
        Eleve();
        Eleve(string,string);
        Eleve nouvelleIdentite();
        void ajouterNote(double);
        void enleverNote();
        friend istream & operator >> (istream &os,  Eleve &E);
        virtual ~Eleve();

    protected:

    private:
    string nom;
    string prenom;
    Notes notes;

};


#endif // ELEVE_H
