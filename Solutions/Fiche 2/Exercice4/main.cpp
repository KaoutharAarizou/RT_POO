#include <iostream>

using namespace std;

int fact(int valeur)
{
    int factoriel = 1;
    if (valeur == 0)
        return 1;
    else
    {
        for(int i=1; i<=valeur; i++)
        factoriel = factoriel *i;

        return factoriel;
    }

}

float coeff_binomial (int valeur1, int valeur2)
{
    float coefficient;
    coefficient = fact(valeur1) / (fact(valeur2) * fact(valeur1-valeur2));
    return coefficient;
}



int main()
{
    int N, M, taille;
    char choix = 'o';

    while(choix == 'o')
    {
        cout << "Taille triangle:  "; cin >> taille;

        for(int i = 0; i<taille; i++)
        {
            for(int j=0; j<=i; j++)
            cout << coeff_binomial(i, j) << "   ";
            cout << endl;
        }


        /*cout << endl << "Print value 1 :  ";
        cin >> N;
        cout << "Print value 2 :  ";
        cin >> M;
        cout << endl << "   Coefficient binomial =  " << coeff_binomial(N, M) << endl;*/
        cout << endl << "Voulez vous continuer ? [o/n]  "; cin >> choix; cout << endl;
    }
    return 0;
}
