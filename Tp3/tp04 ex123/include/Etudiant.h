#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <Personne.h>


class Etudiant : public Personne
{
    public:
        Etudiant();
        Etudiant(string,string,string);
        virtual ~Etudiant();
        void setINE(string);
        virtual std::ostream& lire(std::ostream& os) ;
        void ecrire(istream& is);
        string getINE();

    protected:

    private:
        string INE ;
};

#endif // ETUDIANT_H
