#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        static int NbPoints_ ;
        Point();
        Point(int,int);
        int x();
        int y();
        void deplacerDe(int,int);
        void deplacerVers(int,int);
        static int NbPoints();
        virtual ~Point();

    protected:

    private:
        int abscisse ;
        int ordonnee;


};
#endif // POINT_H
