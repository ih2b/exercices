#include <iostream>
#include "Personne.h"
#include "Etudiant.h"
#include "Boursier.h"
using namespace std;
void Menu(Personne p2){
int i ;
cout << "choisi 1:personne 2:etudiant 3:boursier "<<endl;
cin >>i ;
if(i==1){
Personne P=Personne();
p2 =P;
p2.ecrire(cin);
}else if (i==2){
Etudiant E=Etudiant();
p2 =E;
p2.ecrire(cin);
}else if (i==3 ){
Boursier B=Boursier();
p2 =B;
p2.ecrire(cin);
}
}
int main()
{
Personne tab[10];
Personne P1=Personne();
Etudiant E1=Etudiant();
Boursier B1=Boursier();
P1.ecrire(cin);
P1.lire(cout);
E1.ecrire(cin);
E1.lire(cout);
B1.ecrire(cin);
B1.lire(cout);
/*Personne *tab[10]={
  new Boursier("Freeman","Gordon","1234","AZ123P"),
  new Personne("Hugo","Victor"),
  new Etudiant("Babbit","Charlie","1452")};
  tab[1]->Personne::~Personne();
  delete [] tab[1];
  tab[2]->Personne::~Personne();
  delete [] tab[2];*/
Menu(tab[0]);
cout << P1;
cin >> P1;

    return 0;
}
