/**Ecrire un programme en C++ qui demande à l’utilisateur de taper 20 entiers et qui affiche le plus petit
de ces entiers.**/

#include <iostream>

using namespace std;

int main()
{
    int petiteValeur = 0;
    int valeur;

    for (int i = 0; i < 20; i++)
    {
        cout << "Entrez valeur numero " << i << "  :  ";
        cin >> valeur;

        if(valeur < petiteValeur) petiteValeur = valeur;
    }

    cout << "La plus petite valeur que vous avez introduite est: " << petiteValeur << endl;
    return 0;
}
