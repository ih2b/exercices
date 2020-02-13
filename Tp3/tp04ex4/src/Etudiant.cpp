#include "Etudiant.h"
#include "Personne.h"
#include <string>
using namespace std;
Etudiant::Etudiant(){}
Etudiant::Etudiant(string Nom ="lo" ,string Prenom="lo",string INE="bn123"):Personne(Nom ,Prenom)
{
    this->INE = INE;
}

Etudiant::~Etudiant()
{
    //dtor
}
void Etudiant::setINE(string INE) {
            this->INE = INE;
            }
string Etudiant::getINE() {
        return INE;
        }
ostream& Etudiant::lire(ostream& os)
              {
              Personne::lire(os);
              cout << "INE :" <<endl;
              os << INE << endl;
              return os;
              }
istream& Etudiant::ecrire(istream& is)
              {
              Personne::ecrire(is);
              cout <<"INE"<<endl;
              is >>INE ;
              return is ;
              }
/*void Etudiant::lire()
                    {
                    cout<<"Etudient : ("<<Nom<<" , "<<Prenom<<" , "<<INE<<" )";
                    }*/
