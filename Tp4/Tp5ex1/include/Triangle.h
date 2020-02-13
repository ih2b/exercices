#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"
#include "Ligne.h"

class Triangle
{
    public:
        Triangle();
        Triangle(int  ,int , Point , int  ,double ,int  ,int , Point , int  ,double ,int  ,int , Point , int  ,double );
        void afficher();
        virtual ~Triangle();

    protected:

    private:
    Ligne lignes[3];
};

#endif // TRIANGLE_H
