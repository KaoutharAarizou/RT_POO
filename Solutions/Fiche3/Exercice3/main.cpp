#include <iostream>
#include <vector>

using namespace std;


void manip(vector <int> tableau, int *i_max, int *i_min, int *maximum, int *minimum)
{
    *maximum = tableau[0];
    *minimum = tableau[0];
    *i_min = 0;
    *i_max = 0;

    for(int i = 0; i<tableau.size(); i++)
    {
        if(tableau[i] < *minimum)
        {
            *minimum = tableau[i];
            *i_min = i;
        }


        if(tableau[i] > *maximum)
        {
            *maximum = tableau[i];
            *i_max = i;
        }

    }
}

void remplir(vector <int> &tableau, int taille)
{
    for(int i = 0; i<taille; i++)
    {
        cin >> tableau[i];
    }
}

int main()
{
    int taille; int maximum; int minimum;
    int i; int j;

    cout << "Donner la taille:  ";
    cin >> taille;
    vector <int> T(taille);

    cout << "   remplir le tableau:  " << endl;
    remplir(T, taille);
    //void manip(vector <int> tableau, int* i_max, int* i_min, int* maximum, int* minimum)
    manip(T, &i, &j, &maximum, &minimum);

    cout << "       Le maximum =   " << maximum << "  Position dans le tableau:  " << i+1 << endl;
    cout << "       Le minimum =   " << minimum << "  Position dans le tableau:  " << j+1 << endl;
    return 0;
}
