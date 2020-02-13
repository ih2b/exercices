#include "Triangle.h"
#include "Ligne.h"
#include <iostream>
using namespace std;
Triangle::Triangle()
{
    //ctor
}
Triangle::Triangle(int couleur1 ,int epaisser1, Point point1, int longueur1 ,double angle1,int couleur2 ,int epaisser2, Point point2, int longueur2 ,double angle2,int couleur3 ,int epaisser3, Point point3, int longueur3 ,double angle3)
{
    Ligne L1 = Ligne(couleur1,epaisser1,point1,longueur1,angle1);
    Ligne L2 = Ligne(couleur2,epaisser2,point2,longueur2,angle2);
    Ligne L3 = Ligne(couleur3,epaisser3,point3,longueur3,angle3);
    this->lignes[0]=L1;
    this->lignes[1]=L2;
    this->lignes[2]=L3;

}
void Triangle::afficher(){
    cout<<"tringle avec ligne 1 Longueur :"<< lignes[0].getLongueur()<< "angle :" <<lignes[0].getAngle()<<"ligne 2 Longueur :"<< lignes[1].getLongueur()<< "angle :" <<lignes[1].getAngle()<<"ligne 3 Longueur :"<< lignes[2].getLongueur()<< "angle :" <<lignes[2].getAngle()<<endl;

}
Triangle::~Triangle()
{
    //dtor
}
