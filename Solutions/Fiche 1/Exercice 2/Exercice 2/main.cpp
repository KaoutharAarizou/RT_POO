/***
Ecrire un programme C++ permettant d’afficher:
1. AB,
2. l'hypoténuse d'un triangle rectangle de côtés A et B,
3. la tangente de A en n'utilisant que les fonctions sin et cos,
4. la valeur arrondie (en moins) de A/B puis à trois positions derrière la virgule de A/B.
***/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float A;
    float B;
    cout << "Entrez la valeur de A:  ";
    cin >> A;
    cout << "Entrez la valeur de B:  ";
    cin >> B;

    double resultat = pow(A, B);
    cout << "A exposant B est:  " << resultat << endl;

    resultat = sqrt(pow(A, 2) + pow(B, 2));
    cout << "l'hypotenuse d'un triangle rectangle de cotes A et B:  " << resultat << endl;


    resultat = sin(A)/cos(A);
    cout<<"La tangente de A est " << resultat <<endl;
    cout<<"La tangente de A (avec setprecision) est " << setprecision(2) << resultat <<endl << endl;

    cout << "La valeur a trois positions derriere la virgule de A/B (avec setprecision):   " << setprecision(4) << A/B << endl;

    resultat = floor(1000 * (A/B)) / 1000;
    cout << "La valeur a trois positions derriere la virgule de A/B (autre methode):   " << resultat  << endl;

}
