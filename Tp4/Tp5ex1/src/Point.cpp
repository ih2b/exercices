#include "Point.h"
int Point::NbPoints_ = 0 ;
Point::Point()
{
    NbPoints_ =NbPoints_+1;
}
Point::Point(int x ,int y)
{
    this->abscisse = x;
    this->ordonnee = y;
    NbPoints_++;
}
int Point::x(){
    return this->abscisse;
}
int Point::y(){
    return this->ordonnee;
}
void Point::deplacerDe(int x,int y){
    this->abscisse =this->abscisse+x;
    this->ordonnee =this->ordonnee+y;
}
void Point::deplacerVers(int x,int y){
    this->abscisse = x;
    this->ordonnee = y;
}
int Point::NbPoints() {
         return NbPoints_;
      }
Point::~Point()
{
    //dtor
}
