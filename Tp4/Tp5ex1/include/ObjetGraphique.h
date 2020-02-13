#ifndef OBJETGRAPHIQUE_H
#define OBJETGRAPHIQUE_H
#include "Point.h"

class ObjetGraphique
{
    public:
        ObjetGraphique();
        ObjetGraphique(int,int,Point);
        Point pointDeBase();
        int Couleur();
        int Epaisseur();
        void modifierTrace(int,int);
        void deplacerVers(int,int);
        void deplacerDe(int,int);
        virtual void afficher() =0;
        void effacer();
        static int GetNbObjetsGraphiques();
        virtual ~ObjetGraphique();

    protected:

    private:
        Point point;
        int couleur;
        int epaisser;
        static int NbObjetsGraphiques;

};

#endif // OBJETGRAPHIQUE_H
