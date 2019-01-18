/**Écrire un programme qui permet d’afficher une table de correspondance entre les températures en
Celsius et en Fahrenheit en sachant que : F=C*(9/5)+32. Commencer à 0° et procéder jusqu’à 100°
avec un pas de 20°.**/

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    double celcius;
    double fahrenheit;
    string reponse = "oui";

    do {

        cout <<"Entrez la température en Farenheit:  ";
        cin >> fahrenheit;

        celcius = (fahrenheit - 32.0 ) * 5.0/9.0;
        cout << fahrenheit << " Fahrenheit est " << celcius << " en celcius." << endl << endl;
        cout << "\t Voulez-vous continuer ? [oui/non]: ";
        cin >> reponse;
        cout << endl;

    }while(reponse == "oui");

    return 0;
}
