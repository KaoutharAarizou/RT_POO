#include <iostream>
#include <vector>


using namespace std;

int sommeDiv;

void som_div_method_1(int a, int &sommeDiv)
{
    /*Methode par passage par reference*/
    sommeDiv = 0;
    for(int i=1; i<a; i++)
    {
        if(a%i == 0)
            sommeDiv += i;
    }
}

void som_div_method_2(int a)
{
    /*Methode par variable globale
    La variable globale   "sommeDiv"  est déclaré en dehors du MAIN
    */
    sommeDiv = 0;
    for(int i=1; i<a; i++)
    {
        if(a%i == 0)
            sommeDiv += i;
    }
}

void som_div_method_3(int a, int *sommeDiv)
{
    /*Methode par pointeurs*/

    *sommeDiv = 0;
    for(int i=1; i<a; i++)
    {
        if(a%i == 0)
            *sommeDiv += i;
    }

}


bool parfait_method_1(int a)
{
    ///Appel de la première méthode de som_div
    int somme;
    som_div_method_1(a, somme);
    if(a == somme)
        return true;
    else
        return false;
}

bool parfait_method_2(int a)
{
    ///Appel de la deuxième méthode de som_div
    som_div_method_2(a);
    if(a == sommeDiv)
        return true;
    else
        return false;
}

bool parfait_method_3(int a)
{
    int somme;
    ///Appel de la troisième méthode de som_div
        som_div_method_3(a, &somme);
    if(a == sommeDiv)
        return true;
    else
        return false;

}



/**Fonction avec retour**/
vector <int> toutParfait(int limite)
{
    vector <int> chiffresParfaits;//Tableau qui contiendra tout les chiffres parfait retrouvés sous la limite

    for(int i = 1; i<=limite; i++)
    {
        if(parfait_method_1(i) == true)
        {
            chiffresParfaits.push_back(i);
        }
    }
    return chiffresParfaits;
}


void afficherTableau(vector <int> tableau)
{
    for(int i =0; i<tableau.size(); i++)
    {
        cout << tableau[i] << "     ";
    }
}


int main()
{
    int valeur;
    bool resultat;


    /**-------    Voir si un nombre est parfait ou non    -------**/


    cout << "Entrez un entier positif quelconque:   ";
    cin >> valeur;

    ///Methode 1
    resultat = parfait_method_1(valeur);
    if (resultat == true)
    {
        cout << endl << "       Le nombre introduit est parfait (par methode1)" << endl;
    }
    else
    {
        cout << endl << "       Le nombre introduit n'est pas parfait (par methode1)" << endl;
    }



    ///Methode 2
    resultat = parfait_method_2(valeur);
    if (resultat == true)
    {
        cout << endl << "       Le nombre introduit est parfait (par methode2)" << endl;
    }
    else
    {
        cout << endl << "       Le nombre introduit n'est pas parfait (par methode2)" << endl;
    }


    ///Methode
    resultat = parfait_method_3(valeur);
    if (resultat == true)
    {
        cout << endl << "       Le nombre introduit est parfait (par methode3)" << endl;
    }
    else
    {
        cout << endl << "       Le nombre introduit n'est pas parfait (par methode3)" << endl;
    }


    int limite;
    int reponse;
    cout << endl <<"Nous allons afficher tout les nombres parfait inferieur a une limite donnee" << endl
         << "Entrez une limite:   ";
         cin >> limite;


    vector <int> monTableau;
    monTableau = toutParfait(limite);
    cout << monTableau.size();
    afficherTableau(monTableau); //Affichage du tableau une fois rempli*/



    cout << endl << endl << endl;
    return 0;
}
