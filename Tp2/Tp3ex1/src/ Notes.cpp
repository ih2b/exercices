#include " Notes.h"

 Notes::Notes()
{
    nombreNotes = 0 ;
}
void Notes::ajout(double nouveauNote){
    notes[nombreNotes] = nouveauNote;
    nouveauNote++;

}
void Notes::enlever(){
    notes.erase(nouveauNote);
    nouveauNote--;
    }
double Notes::moyenne(){
    double moy =0;
    for (uint16_t i = 0; i =< nombreNotes; i++) {
        moy =+notes[i];
    }
    moy=moy/(nombreNotes+1);
    return moy;
}
double Notes::plusPetite() {
     double P =notes[0];
    for (uint16_t i = 1; i =< nombreNotes; i++) {
        if(P>notes[i]){
        P=notes[i]
        }
    }
    return P;
}
double Notes::plusGrande(){
     double G =notes[0];
    for (uint16_t i = 1; i =< nombreNotes; i++) {
        if(G<notes[i]){
        G=notes[i]
        }
    }
    return G;
}
double Notes::lireNote(uint16_t not){
    return notes[not];
}
uint16_t Notes::nombre(){
    return nombreNotes+1;
        }
 Notes::~ Notes()
{
    //dtor
}
