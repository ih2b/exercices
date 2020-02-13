#ifndef NOTES_H
#define NOTES_H


class Notes
{
    public:
        Notes();
        void ajout(double);
        void enlever();
        double moyenne();
        double plusPetite();
        double plusGrande();
        double lireNote(int);
        int nombre();
        virtual ~Notes();

    protected:

    private:
    double notes[10];
    int nombreNotes;
};

#endif // NOTES_H



