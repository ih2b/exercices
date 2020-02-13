#ifndef LIGNE_H
#define LIGNE_H
#include "ObjetGraphique.h"


class Ligne : public ObjetGraphique
{
    public:
        Ligne();
        Ligne(int,int,Point,int,double);
        double getAngle();
        int getLongueur();
        void modifierLigne(int,double);
        void afficher();
        void effacer();
        virtual ~Ligne();

    protected:

    private:
        int longueur;
        double angle;
};

#endif // LIGNE_H
