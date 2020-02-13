#include "Fraction.h"
#include <iostream>

using namespace std;
Fraction::Fraction()
{
    //ctor
}
Fraction::Fraction(int numrateur,int denominateur)
{
    this->denominateur = denominateur;
    this->numrateur = numrateur;
}
int Fraction::getNumrateur(){
    return this->numrateur;
}
void Fraction::setNumrateur(int numrateur){
    this->numrateur=numrateur;
}
int Fraction::getDenominateur(){
    return this->denominateur ;
}
void Fraction::setDenominateur(int denominateur){
    this->denominateur=denominateur;
}
void Fraction::set(int numrateur,int denominateur){
this->denominateur =denominateur;
this->numrateur =numrateur;
}
void Fraction::set(int numrateur){
this->denominateur =1;
this->numrateur =numrateur;
}
void Fraction::opposer(){
this->numrateur = (-1) * this->numrateur ;
}
Fraction Fraction::opposee(){
Fraction F = Fraction(this->denominateur,this->numrateur);
return F;
}
void Fraction::affichage(){
    cout <<this->numrateur <<"/"<<this->denominateur<< endl;
}
 ostream & operator << (ostream &os, const Fraction &F)
{
    os << F.numrateur ;
    os << "/" << F.denominateur<< endl;
    return os;
}
int Fraction::PGCD(int a, int b){
    while(b!=0){
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}
void Fraction::normalisee(){
    int r;
    r=PGCD(this->numrateur,this->denominateur);
    this->numrateur=this->numrateur/r;
    this->denominateur=this->denominateur/r;
    if(this->numrateur == 0){
        this->denominateur=1;
        }
}
Fraction::~Fraction()
{
    //dtor
}
