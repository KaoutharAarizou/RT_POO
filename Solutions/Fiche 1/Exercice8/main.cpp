/**
Ecrire un programme C++ qui calcule une valeur approchée de sin(x) à un rang k entré au clavier, et
pour une valeur x exprimée en radians.
**/
#include <iostream>
#include <math.h>
using namespace std;

int factoriel (int valeur)
{
    int resultat = 1;
    for (int i=valeur; i>= 1; i--)
    {
        resultat = resultat *i;
    }
    return resultat;
}

double fct_Sin(double x,int k)
{
	double resultat = 0.0;
	for(int i=0; i<=k; i++)
	{
		resultat +=  pow(-1, i) * pow(x, 2*i + 1)  /  factoriel(2*i + 1);
	}
	return resultat;
}

#define PI 3.14159265
int main()
{
    int rang; double sinus; double x_rad; double x_deg;

    cout << "Entrez la valeur de x en degre: "; cin >> x_deg;
    cout << endl << "Entrez la valeur du rang k: "; cin >> rang;

    ///Convertir en Radian
    x_rad = x_deg * PI / 180;
        cout << x_rad << endl << endl;
    sinus = fct_Sin(x_rad, rang);

    cout << "calcul fonction: " << sinus << endl;
    cout << "calcul fonction predefinie:  " << sin(x_rad) << endl;
    return 0;
}
