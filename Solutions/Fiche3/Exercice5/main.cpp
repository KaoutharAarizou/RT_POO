#include <iostream>

using namespace std ;

//*********************************************************************
//fonction pour saisir les valeurs d'un tableau.
void SaisirTab(int *tab, int nbr)
{
    for(int i=0; i<nbr; i++)
        {
            cout << "tab[" << i << "]= ";
            cin>>tab[i];
        }
}

//*****************************************************************
//fonction pour afficher les valeurs d'un tableau.
void AffTab(int *tab, int nbr)
{
    for(int i=0; i<nbr; i++)
        cout<<tab[i]<<" ";
}

//*************************************************************
//fonction pour trier un tableau en ordre croissant.
int TriCroiss(int *tab, int nbr)
{
    int nmbItter = 0;
    int temp;
    for(int i=0; i < nbr; i++)
    for(int j(0); j < nbr-1; j++)
        if(tab[j] > tab[j+1])
        {
          temp = tab[j];
          tab[j] = tab[j+1];
          tab[j+1] = temp;
          nmbItter++;
         }

    return nmbItter;
}

//*****************************************************************
int main()
{
	int n;
	cout<<"saisir la taille du tab:"<<endl;
	cin>>n;

	//allocation dynamique d la tableau t.
    int *t = new int [n];

    cout<<"saisir le tableau"<<endl;
    SaisirTab(t,n); //appele la fonction SaisirTab.

	//afficher le tableau avant le trier.
	cout<<"Affichage du tab avant le trier"<<endl << endl;
    AffTab(t,n);

    int itterations;

    itterations = TriCroiss(t,n); //appele la fonction TriCroiss.

    cout<< endl << endl << "Affichage du tableau en ordre croissant (Tri au bout de  " << itterations << "  itterations)  " << endl << endl;
    AffTab(t,n);

    cout << endl;
	//desallocation le tableau t.
    delete []t;

  //**************************
  return 0;
}
