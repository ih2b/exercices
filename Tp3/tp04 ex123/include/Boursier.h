#ifndef BOURSIER_H
#define BOURSIER_H

#include <Etudiant.h>


class Boursier : public Etudiant
{
    public:
        Boursier();
        Boursier(string,string,string,string);
        virtual ~Boursier();
        void setNumDossier(string);
        virtual std::ostream& lire(std::ostream& os) ;
        void ecrire(istream& is);
        string getNumDossier();

    protected:

    private:
        string NumDossier ;
};

#endif // BOURSIER_H
