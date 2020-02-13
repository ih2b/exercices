#include "Notes.h"

Notes::Notes()
{
   nombreNotes = 0;
}
void Notes::ajout(double nouveauNote){
    notes[nombreNotes] = nouveauNote;
    nombreNotes++;

}
void Notes::enlever(){
    notes[nombreNotes]=notes[nombreNotes+1];
    nombreNotes =nombreNotes-1;
    }
double Notes::moyenne(){
    double moy =0;
    for (int i = 0; i < nombreNotes; i++) {
        moy = moy+notes[i];
    }
    moy=moy/(nombreNotes+1);
    return moy;
}
double Notes::plusPetite() {
     double P =notes[0];
    for (int i = 0; i < nombreNotes; i++) {
        if(P>notes[i]){
        P=notes[i];
        }
    }
    return P;
}
double Notes::plusGrande(){
     double G =notes[0];
    for (int i = 0; i < nombreNotes; i++) {
        if(G<notes[i]){
        G=notes[i];
        }
    }
    return G;
}
double Notes::lireNote(int nt){
    return notes[nt];
}
int Notes::nombre(){
    return nombreNotes;
        }
Notes::~Notes()
{
    //dtor
}
