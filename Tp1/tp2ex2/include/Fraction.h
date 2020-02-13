#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction
{
    public:
        Fraction();
        Fraction(int,int);
        int getNumrateur();
        void setNumrateur(int);
        int getDenominateur();
        void setDenominateur(int);
        void set(int,int);
        void set(int);
        void affichage();
        void opposer();
        Fraction opposee();
        int PGCD(int,int);
        void normalisee();
        friend ostream & operator << (ostream &os, const Fraction &F);
        virtual ~Fraction();

    protected:

    private:
    int numrateur;
    int denominateur;
};

#endif // FRACTION_H
