#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"
#include"ObjetGraphique.h"

class Cercle:public ObjetGraphique
{
    public:
        Cercle();
        Cercle(int,int,Point,int);
        int Rayon();
        void modifierRayon(int);
        void afficher();
        void effacer();
        virtual ~Cercle();

    protected:

    private:
        int rayon;
};

#endif // CERCLE_H
