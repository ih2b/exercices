#include "Cylindre.h"

Cylindre::Cylindre()
{
    //ctor
}

Cylindre::Cylindre(double D ,double H)
{
    this->D =D;
    this->H =H;
}
double Cylindre::get_D()
{
return this->D;
}
void Cylindre::set_D(double D)
{
    this->D=D;
}
double Cylindre::get_H(){
    return this->H;
}
void Cylindre::set_H(double H)
{
    this->H=H;
}
double Cylindre::rayon_de_la_base()
{
    return D/2;
}
double Cylindre::surface_de_la_base()
{
    return this->rayon_de_la_base()*this->rayon_de_la_base()*3.14 ;
}
double Cylindre::volume_de_la_base()
{
    return 3,14 * this->rayon_de_la_base() ;
}
double Cylindre::perimetre_de_la_base()
{
    return 2 * this->volume_de_la_base();
}
double Cylindre::surface_laterale()
{
    return this->volume_de_la_base()*this->H;
}
Cylindre::~Cylindre()
{
    //dtor
}
