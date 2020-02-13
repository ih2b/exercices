#include "ObjetGraphique.h"
#include <iostream>
using namespace std;
int ObjetGraphique::NbObjetsGraphiques =0 ;
ObjetGraphique::ObjetGraphique()
{
    NbObjetsGraphiques++;
}
ObjetGraphique::ObjetGraphique(int couleur ,int epaisser, Point point)
{
    this->couleur = couleur;
    this->epaisser = epaisser;
    this->point = point;
    NbObjetsGraphiques++;
}
Point ObjetGraphique::pointDeBase(){
    return this->point;
}
int ObjetGraphique::Couleur(){
    return this->couleur;
}
int ObjetGraphique::Epaisseur(){
    return this->epaisser;
}
void ObjetGraphique::modifierTrace(int nouvelleCouleur ,int nouvelleEpaisseur){
    this->couleur = nouvelleCouleur;
    this->epaisser = nouvelleEpaisseur;
}
void ObjetGraphique::deplacerVers(int VersX,int VersY){
    this->point.deplacerVers(VersX,VersY);
}
void ObjetGraphique::deplacerDe(int surX,int surY){
    this->point.deplacerDe(surX,surY);
}

void ObjetGraphique::effacer(){
cout<<"objet effacé"<<endl;
}
int ObjetGraphique::GetNbObjetsGraphiques(){return NbObjetsGraphiques;}
ObjetGraphique::~ObjetGraphique()
{
    //dtor
}
