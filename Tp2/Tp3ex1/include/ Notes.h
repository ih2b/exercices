#ifndef  NOTES_H
#define  NOTES_H


class  Notes
{
    public:
         Notes();
        void ajout(double);
      void enlever();
        double moyenne();
        double plusPetite();
        double plusGrande();
        double lireNote(uint16_t);
        uint16_t nombre();
        virtual ~ Notes();

    protected:

    private:
        double[10] notes;
        uint16_t nombreNotes;
};

#endif //  NOTES_H
