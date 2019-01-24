#include <iostream>
#include <math.h>
using namespace std;

int nombreChiffre (int long N)
{
    if(N < 0) N = -N;
    int nombre = 1;
    while(N < pow(10, nombre-1) || N >= pow(10, nombre))
    {
        nombre++;
    }
    return nombre;

}

int main()
{
    int valeur;
    cout << "Entrez N:  "; cin >> valeur;
    cout << "La valeur entree " << valeur << "  a  " << nombreChiffre(valeur) << "  chiffres.";
    return 0;
}
