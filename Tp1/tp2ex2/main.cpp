#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    /*Fraction F=Fraction(5,2);
    cout << F;
    F.set(1);
    F.affichage();
    F.set(4,8);
    cout << F;
*/
    Fraction F=Fraction(3,2);
    Fraction F2=Fraction();
    cout << F;
    F2=F.opposee();
    cout << F2;
    F.opposer();
    cout << F;
    F.set(4,12);
    cout << F;
    F.normalisee();
    cout << F;
    F.set(0,12);
    cout << F;
    F.normalisee();
    cout << F;


    return 0;
}
