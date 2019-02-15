#include <iostream>
#include <vector>

using namespace std;


void remplirTabl(vector<int> &tableau)
{
    for (int i=0; i < tableau.size(); i++)
    {
        cout << "Inserer tab["<<i<<"]      ";
        cin >> tableau[i];
    }
}

void afficherTableau(vector<int> tableau)
{
    for(int i =0; i<tableau.size(); i++)
    {
        cout << tableau[i] << "  ";
    }
}

void eliminerNull(vector<int> &tableau)
{
    int taille = tableau.size();
    for(int itter =0; itter < taille ; itter++)
    {
        for(int i =0; i< taille; i++)
        {
            if(tableau[i] == 0)
            {
                tableau.erase(tableau.begin() + i);
                tableau.push_back(0);
            }
        }
    }
}


int main()
{
    cout << "Inserer Taille Tableau:  " << endl;
    int taille;
    cin >> taille;
    vector <int> monTableau(taille);

    remplirTabl(monTableau);

    cout << endl << endl << "Avant" << endl;
    cout << "  "; afficherTableau(monTableau);


    eliminerNull(monTableau);

    cout << endl << "Apres" << endl;
    cout << "  "; afficherTableau(monTableau);

    return 0;
}
