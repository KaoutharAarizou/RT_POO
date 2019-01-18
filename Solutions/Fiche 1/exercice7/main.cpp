#include <iostream>

using namespace std;

int main()
{
    int valeurs [60];
    int monNombre;

    cout << "Entrez un nombre positif comprit entre 1 et 50: ";
    cin >> monNombre;

    while((monNombre < 1) || (monNombre > 50))
    {
        cout << "Le chiffre introduit n'appartient pas a l'intervalle." << endl << "Entrez a nouveau un chiffre entre 1 et 50:  ";
        cin >> monNombre;
    }
    cout << endl << "pour un entier:  " << monNombre << " , la suite de Syracus donne: " << endl << endl;
    int iteration = 0;
    do {
            if (monNombre%2 == 0) {
                    monNombre = monNombre /2;
                    valeurs[iteration] = monNombre;
                    iteration ++;
            }
            else {
                    monNombre = monNombre *3 + 1;
                    valeurs[iteration] = monNombre;
                    iteration ++;}

    } while (monNombre != 1);


    for (int i=0; i<iteration; i++)
    {
        cout << valeurs[i] << "  ";
    }

    cout << endl << endl << "au bout de:    " << iteration << "  iterations." << endl;
    cout << "Le resultat vaut:  " << monNombre << endl;


    return 0;
}
