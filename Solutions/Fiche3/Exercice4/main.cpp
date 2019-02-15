#include <iostream>
#include <vector>

using namespace std;


void trierTab(vector <int> &tableau)
{
    int minimum;

    for(int i =0; i<tableau.size(); i++)
    {
        minimum = tableau[i];
        int indice = i;

        for(int j=i+1; j<tableau.size(); j++)
        {
            if(tableau[j] < minimum)
            {
                minimum = tableau[j];
                indice = j;
            }

        }
        cout <<endl << "pour i = " << i <<  "  ---  minimum = " << minimum << endl;
        int aux = tableau[i];
        tableau[i] = minimum;
        tableau[indice] = aux;

    }

}


void remplirTab(vector <int> &tableau)
{
    for(int i = 0; i<tableau.size(); i++)
    {
        cin >> tableau[i];
    }
}

void afficherTab(vector <int> tableau)
{
    for(int i=0; i<tableau.size(); i++)
    {
        cout << tableau[i] << "   ";
    }
}


int main()
{
    int taille;
    cout << "Donner la taille du tableau:  ";
    cin >> taille;

    vector <int> tab(taille);
    vector <int> tabResultat(taille);

    remplirTab(tab);

    cout << endl << endl;
    afficherTab(tab);

    trierTab(tab);

    cout << "apres Tri:    " << endl;
    afficherTab(tab);
    return 0;
}
