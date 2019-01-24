#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

double F( double x, vector<double> V)
{
	double y = 0.0;
	for (int i = V.size()-1; i >= 0; i--)
		y += V[i] * pow(x, i);

	return y;
}
/*
double F2(double x)
{
    return pow(x, 2);
}*/

double trapez(double a, double b, int nbr_ech, vector<double> V)
{
	double somme = 0;
	double h = (b - a) / nbr_ech;

	for (int i = 1; i < nbr_ech; i++)
    {
        somme = somme + F(a + i * hauteur, V);
    }

	somme = (h/2) * (F(a, V) + F(b, V) + 2 * somme);
	return somme;
}

/*double simpson(double a, double b, int n, vector<double> f)
{
	double s1(0), s2(0), s, h;

	h = (b-a)/n;
	for (int i=1; i < n; i++)
		if (i%2 == 0)
			s1 += F(a + i * h, f);
		else
			s2 += F(a + i * h, f);

	s = h/3 * (F(a, f) + F(b, f) + 2*s1 + 4*s2);
	return s;
}*/

int main()
{
	double a, b;	int n;
	cout<< "entrez les bornes de l'intervale de integration [a, b]:\na = ";
	cin>>a;	cout<<"b = ";	cin>>b;

	cout<< "entrez le nbr de sous intervales n:  ";	cin>>n;

	int t;
	cout<< "Entrez le degre du polynome:  "; cin>>t;
	vector <double> T(t);

	cout << "       Entrez les coefficients:  " << endl;
	for (int i(T.size()-1); i >= 0; i--)
	{
		cout << "           T[" << i <<"]=";
		cin >> T[i];
	}

	cout<<"résultat de l'integrale I = "<<trapez(a, b, n)<<endl;

	/*char c('t');
	cout << "entrez votre chois t pour trapeze et s pour simpson"<<endl;
	cin >> c;*/



	/*switch (c)
	{
		case 't': cout<<"I = "<<trapez(a, b, n, T)<<endl;
			break;
		case 's': cout<<"I = "<<simpson(a, b, n, T)<<endl;
			break;
		default: cout << "erreur: tapez t ou s"<<endl;
	}*/

    return 0;
}

