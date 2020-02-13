#ifndef PERSONNE_H
#define PERSONNE_H
using namespace std;
#include <string>
#include <iostream>


class Personne
{
    public:
        Personne();
        Personne(string , string );
        virtual ~Personne();
        void setNom(string);
        string getNom();
        void setPrenom(string);
        string getPrenom();
        virtual istream&  ecrire(istream& is);
        virtual ostream&  lire(ostream& os) const;
        friend ostream & operator << (ostream &os, const Personne& P);
        friend istream & operator >> (istream &os,  Personne& P);
    protected:

    private:
        string Nom;
        string Prenom;
};


#endif // PERSONNE_H
