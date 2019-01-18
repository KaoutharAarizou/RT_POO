#include <iostream>

using namespace std;

bool estParfait (int valeur)
{
    int somme = 0;
    for(int i = 1; i < valeur; i++)
        {
            if(valeur%i == 0)
            {
                somme += i;
            }
        }
         if (somme == valeur) return true;
         else return false;
}

int main()
{
    int valeur;
    int reponse;
    do {
            cout << endl << endl << "Choisissez une option: " << endl << "      1. Dire si un entier est parfait ou non" << endl <<
    "      2. Trouver les nombres parfaits dans un intervalle" << endl <<
    "      3. Quitter" << endl << endl;

    cin >> reponse;


    switch(reponse)
    {
        case 1:
             cout << "vous avez choisi option 1:" << endl;
             cout << "Entrez votre entier : ";
             cin >> valeur;
             if (estParfait(valeur) == true) cout << "    Le nombre " << valeur << " est parfait" << endl;
             else cout << "    le nombre " << valeur << " n'est pas parfait." << endl;
             break;


        case 2:
            cout << "vous avez choisi option 2:" << endl;
            cout << "Entrez la borne maximale de votre intervalle : ";
            cin >> valeur;
            cout << endl << "    Les nombres parfaits de la liste [ 0 - " << valeur << "]  sont:" << endl;

            for (int i = 1; i<valeur; i++)
                {

                    if (estParfait(i) == true) cout << "   " << i;
                }
            break;


        case 3:
            return 0;
            break;

    }

    } while(reponse != 3);
}
