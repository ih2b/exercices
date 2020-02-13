#include "Ligne.h"
#include <iostream>
using namespace std;
Ligne::Ligne()
{
    //ctor
}
Ligne::Ligne(int couleur ,int epaisser, Point point, int longueur ,double angle):ObjetGraphique(couleur,epaisser,point)
{
    this->longueur = longueur;
    this->angle = angle ;
}
int Ligne::getLongueur(){
    return this->longueur;
}
double Ligne::getAngle(){
    return this->angle;
}
void Ligne::modifierLigne(int nouvelleLongeur,double nouvelAngle){
this->longueur = nouvelleLongeur;
this->angle = nouvelAngle;
}
void Ligne::afficher(){
    cout<<"ligne longueur :"<<this->longueur<<" couleur : "<<ObjetGraphique::Couleur()<<" epaisser : "<<ObjetGraphique::Epaisseur()<<endl;
}
void Ligne::effacer()
{
    cout<<"Ligne effacé"<<endl;
}
Ligne::~Ligne()
{
    //dtor
}
