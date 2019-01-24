#include <iostream>

using namespace std;

void som_div(int a, int &somme)
{
    int resultat = 0;
    for(int i=1; i<a; i++)
    {
        if(a%i == 0) resultat = resultat +i;
    }
    somme = resultat;
}

int sommeDiviseurs(int a)
{
    int resultat = 0;
    for(int i=1; i<a; i++)
    {
        if(a%i == 0) resultat = resultat +i;
    }
    return resultat;
}

bool verifierAmis(int a, int b)
{
    if ((sommeDiviseurs(a) == b) && (sommeDiviseurs(b) == a))
        return true;
    else return false;

}

int amis(int a, int limite)
{
    for(int i=1; i<=limite; i++)
    {
        if (verifierAmis(a, i) == true)
            return i;
    }
}

void toutAmis(int intervalle)
{
    for(int a=1; a<intervalle; a++)
    {
        for(int j=a+1; j<=intervalle; j++)
        if (verifierAmis(a, j) == true) cout << "(" << a << ", " << j << ") " <<endl;
    }
}

void toutAmisdeVal(int x, int intervalle, int tableau[], int &indice)
{
    indice = 0;
    for(int i=1; i<intervalle; i++)
    {
        if (verifierAmis(i, x) == true)
        {
            tableau[indice] = i;
            indice ++;
        }
    }
}


int main()
{
    int valeur;
    int intervalle;
    int somme = 0;
    /*cout << "Entrez une valeur:  "; cin >> valeur;
    cout << endl << "Entrez la limite de l'intervalle:  "; cin >> intervalle;
    int monTableau[10];
    int tailleTab;
    toutAmisdeVal(valeur, intervalle, monTableau, tailleTab);

    for(int j=0; j<tailleTab; j++)
        cout << monTableau[j];
    */


    int x;
    //int intervalle;
    int choix;
    int a, b;
    cout << "MENU:  " << endl << "      1. Verifier si deux entier sont amis" << endl << "      2. Trouver l'ami d'un entier" << endl << "      3. Afficher tout les nombres amis d'un intervalle" << endl << endl;
    cin >> choix;

    switch(choix)
    {
    case 1:
        cout << "Entrez la valeur de a:  "; cin >> a;
        cout << "Entrez la valeur de b:  "; cin >> b;
        if(verifierAmis(a,b) == true) cout << a << " et " << b << "sont amis" << endl;
        else cout << a << " et " << b << "  ne sont pas amis." << endl;
        break;


    case 2 :
        cout << "Entrez la valeur de a:  "; cin >> a;
        cout << "Entrez la limite de l'intervalle:  "; cin >> intervalle;
        cout << "l'ami de " << a << " est: " << amis(a, intervalle) << endl;
        cout << "la somme de ses diviseurs est:   " << sommeDiviseurs(a) << endl;
        break;


    case 3 :
        cout << "Entrez la limite de l'intervalle:  "; cin >> intervalle;
        toutAmis(intervalle);
        break;

    }

    return 0;
}
