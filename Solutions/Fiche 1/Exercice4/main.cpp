/** Un nombre entier est parfait s'il est égal à la somme de ses diviseurs (sauf lui même).
Ex : 6 = 1 + 2 + 3 est parfait.
 Ecrire un programme en C++ qui teste si un nombre saisi est parfait ou non.**/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char choix = 'o';
    while(choix == 'o')
    {
        int valeurSup;
        cout<< endl <<"Saisir un nombre entier quelconque:  "; cin >> valeurSup;

        cout << endl << "Le(s) nombre(s) parfait(s) entre 0 et " << valeurSup << " : " << endl;
        for (int j =2; j<valeurSup; j++)
        {
            int somme = 0;
            for (int i = 1; i<j; i++)
                {
                    if (j % i == 0) somme = somme + i;
                }
            if(somme == j)
            cout<<"  "<< j <<"  ";
        }

        cout << endl << endl << "  Voulez vous continuer ?[o/n]:  ";
        cin >> choix;
    }
    ///system("pause");
return 0;
}

