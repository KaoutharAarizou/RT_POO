#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float epsilone, h0, h, v0, v1;
    int nbr_rebond;
    const float g = 9.81;

    cout << "Entrez les valeurs suivantes:  " << endl << "  epsilone: ";
    cin >> epsilone;
    while((epsilone >= 1.0) || (epsilone < 0.0))
    {
        cout << endl << "  epsilone doit être comprit entre 0 et 1: ";
        cin >> epsilone;
    }


    cout << endl << "  Hauteur initiale: ";
    cin >> h0;
    while(h0 <= 0.0)
    {
        cout << endl << "  La hauteur initiale doit être positive non nulle: ";
        cin >> h0;
    }

    cout << endl << "  Nombre de rebonds: ";
    cin >> nbr_rebond;
    while(nbr_rebond < 0)
    {
        cout << endl << "  La nombre de rebond doit être positif ou nul: ";
        cin >> nbr_rebond;
    }

    v0 = sqrt(2*g*h0);
    for (int i=1; i<=nbr_rebond; i++)
    {
        v1 = epsilone * v0;
        v0 = v1;
    }

    h = pow(v1, 2)/(2*g);

    cout << endl << endl << "       La hauteur obtenue vaut:  " << h << endl;
    return 0;
}
