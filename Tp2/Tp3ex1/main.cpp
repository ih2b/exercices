#include <iostream>
#include "Notes.h"
using namespace std;

int main()
{
    Notes N=Notes();
    N.ajout(10);
    cout << N.lireNote(0) << endl;
    return 0;
}
