#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

/// allocation d'un tableau 2D.
double**  allocation (double **t, int nl, int nc)
{
	t = new double *[nl];
	for (int i=0; i<nl; i++)
		t[i] = new double [nc];

	return t;
}

///******************************************************************
/// desallocation d'un tableau 2D.
void desallocation(double **t, int rows)
{
	 for (int i=0; i < rows; i++)
		delete [] t[i];
	delete [] t;
}
///******************************************************************
/// concaténation de deux tableaux 2D.
double** concat(double** A, double** B, int rows, int colsA, int colsB)
{
    double** AB = 0;
    AB = allocation(AB, rows, colsA+colsB);

    for (int i=0; i < rows; i++)
    {
        for (int j=0; j < colsA+colsB; j++)
        {
            if (j >= colsA)
                AB[i][j] = B[i][j-colsA];
            else
                AB[i][j] = A[i][j];

        }
    }
    return AB;
}
///******************************************************************
/// transposée d'un tableau 2D carré.
double** transpoz(double** A, int taille)
{
    double** MT = 0; ///MT est une matrice carrée
    MT = allocation(MT, taille, taille);

    for (int i = 0; i < taille; i++)
        for (int j = 0; j < taille; j++)
        {
            MT[i][j] = A[taille - 1 - j][taille - 1 - i];
        }
    return MT;
}
///******************************************************************
/// tri de lignes d'un tableau 2D carré.
double** triLignes(double** ML, int taille)
{
    double aux;
    for (int i = 0; i < taille; i++)
    {
        for (int k = 0; k < taille; k++)
        {
            for (int j = 0; j < taille-1; j++)
            {
                if (ML[i][j] > ML[i][j+1])
                {
                    aux = ML[i][j];
                    ML[i][j] = ML[i][j+1];
                    ML[i][j+1] = aux;
                }
            }
        }
    }

    return ML;
}
///******************************************************************
///fonction pour saisir les valeurs d'un tableau 2D.
void saisir (double **t, int nl, int nc)
{
	for (int i=0; i < nl; i++)
		for (int j=0; j < nc; j++)
			t[i][j] = rand()%10;
}
///******************************************************************
///fonction pour afficher les valeurs d'un tableau 2D.
void affichage (double **t, int nl, int nc)
{
	for (int i=0; i < nl; i++)
	{
		for (int j=0; j < nc; j++)
			cout<<t[i][j]<<"  ";
		cout<<endl;
	}
}




///******************************************************************

int main()
{
	double **A, **B, **AB;
	int N(2), K(3), i, j;
	int rowsA, colsA, rowsB, colsB;


    cout     << "Donner la taille de la matrice A:" << endl
             << "   " << " - Nombre Lignes:   "; cin >> rowsA;
        cout << "   " << " - Nombre Colonnes:   "; cin >> colsA;


    cout     << endl << "Donner la taille de la matrice B:" << endl
             << "   " << " - Nombre Lignes:   "; cin >> rowsB;
        cout << "   " << " - Nombre Colonnes:   "; cin >> colsB;


	A = allocation (A, rowsA, colsA);
	B = allocation (B, rowsB, colsB);


    srand(time(0));
    saisir (A, rowsA, colsA);
    saisir (B, rowsB, colsB);

    cout<< endl << "A:"<<endl;
    affichage (A, rowsA, colsA);


    cout<< endl << "B:"<<endl;
    affichage (B, rowsB, colsB);

    //concaténation des deux matrices A et B (collage horizontal des matrices).
    AB = concat(A, B, rowsA, colsA, colsB);

    cout << endl <<"AB (concatenation de A & B) :"<<endl;
    affichage (AB, rowsA, colsA+colsB);


    double **M, **MT, **ML = 0;
    int taille;
    cout<< endl << "taille de la matrice caree:";  cin>>taille;

    M = allocation (M, taille, taille);
    MT = allocation (MT, taille, taille);
    ML = allocation (MT, taille, taille);

    saisir (M, taille, taille);

    cout << endl <<"Matrice M:"<<endl;
    affichage (M, taille, taille);

    MT = transpoz(M, taille);
    cout <<  endl << "Matrice MT (transposee de M): " << endl;
    affichage (MT, taille, taille);


    ///trier toutes les lignes de la matrice ML.
    ML = triLignes(MT, taille);

    cout << endl <<"Matrice ML (tri de lignes de MT):"<<endl;
    affichage (ML, taille, taille);


    cout << endl << endl;
    desallocation(A, rowsA);
    cout << "desalloc de A efectuee !!" << endl;
    desallocation(B, rowsB);
    cout << "desalloc de B efectuee !!" << endl;
    desallocation(AB, colsA);
    cout << "desalloc de AB efectuee !!" << endl;


    desallocation(M, taille);
    cout << "desalloc de M efectuee !!" << endl;
    desallocation(MT, taille);
    cout << "desalloc de MT efectuee !!" << endl;
    desallocation(ML, taille);
    cout << "desalloc de ML efectuee !!" << endl;

    return 0;
}
