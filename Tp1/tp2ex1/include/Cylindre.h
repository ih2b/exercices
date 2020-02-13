#ifndef CYLINDRE_H
#define CYLINDRE_H


class Cylindre
{
    public:
        Cylindre();
        Cylindre(double,double);
        virtual ~Cylindre();
        double get_D();
        void set_D(double);
        double get_H();
        void set_H(double);
        double rayon_de_la_base();
        double surface_de_la_base();
        double volume_de_la_base();
        double perimetre_de_la_base();
        double surface_laterale();
    protected:

    private:
        double D;
        double H;
};

#endif // CYLINDRE_H
