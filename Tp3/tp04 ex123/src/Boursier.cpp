#include "Boursier.h"
#include <string>
#include "Personne.h"
#include "Etudiant.h"
using namespace std;
Boursier::Boursier(){}
Boursier::Boursier(string Nom="lo" ,string Prenom="lo",string INE="lo",string NumDossier="lo"): Etudiant(Nom,Prenom,INE)
{
    this->NumDossier = NumDossier;
}

Boursier::~Boursier()
{
    //dtor
}
void Boursier::setNumDossier(string NumDossier) {
            this->NumDossier = NumDossier;
            }
string Boursier::getNumDossier() {
        return NumDossier;
        }
void Boursier::lire(ostream& os)
              {
              Personne::lire(os);
              cout << "NumDossier :" <<endl;
              os << NumDossier << endl;
              }
void Boursier::ecrire(istream& is)
              {
              Personne::ecrire(is);
              cout <<"NumDossier"<<endl;
              is >>NumDossier ;
              }
