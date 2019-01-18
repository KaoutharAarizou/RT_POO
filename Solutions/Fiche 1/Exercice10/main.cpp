#include <iostream>
#include <math.h>
using namespace std;


const double g(9.81); // la constante de gravité terrestre

int main()
{
      // Declarations -----------------------------------------
  double h_fin;        // maximum de hauteur
  double eps;          // coefficient de rebond de la balle
  double h0, h1;       // hauteurs avant et après le rebond
  double v0, v1;       // vitesses avant et apres le rebond


    cout << "Entrez les valeurs suivantes:  ";
    do{
            cout << endl << "  epsilone: ";
            cout << endl << "  epsilone doit être comprit entre 0 et 1: ";
            cin >> eps;

    }while((eps >= 1.0) || (eps < 0.0));


    do{
            cout << endl << "  Hauteur initiale   h0: ";
            cout << endl << "  La hauteur initiale doit être positive non nulle: ";
            cin >> h0;

        }while(h0 <= 0.0);

    do {
            cout << endl << "  Hauteur finale ";
            cout << endl << "  (0 < h_fin < "<<h0<<") :    ";
            cin >> h_fin;

        } while (h_fin <= 0.0 || h_fin >= h0);


    /*do{
        cout << endl << "  Hauteur desiree: ";
        cout << endl << "  La hauteur initiale doit être positive non nulle: ";

        if (hm <= 0)
        {
            cout << endl << "  La hauteur desiree doit etre positive non nulle: ";
            cin >> hm;
        }
        if (hm > h0)
        {
            cout << endl << "  La hauteur desiree doit etre inferieure a la hauteur initiale: ";
            cin >> hm;
        }

        }while((hm <= 0) || (hm > h0));*/



  double rebonds(0);
  // Boucle de calcul -------------------------------------
  do {
    ++rebonds;                 // une iteration par rebond
    v0 = sqrt(2.0 * g * h0);   // vitesse avant rebond
    v1 = eps * v0;             // vitesse apres le rebond
    h1 =(v1 * v1) / (2.0 * g); // hauteur après rebond
    h0 = h1;   // qui devient nouvelle haut. avant rebond suivant
  } while (h0 > h_fin);

  // Affichage du resultat --------------------------------

  cout << endl << endl <<"  La balle rebondit   " << rebonds
       << "    fois avant que la hauteur de rebond (" << h0
       << ")    soit inferieure a la limite:   " << h_fin << endl;


    return 0;
}
