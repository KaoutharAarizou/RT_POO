#include <iostream>
#include <cstdlib>
#include<time.h>
#include<ctime>
using namespace std;

char alpha(char ltrmin,char ltrmax)
{
    char alfa_Alea=0;
    return alfa_Alea = ltrmin + rand()%(ltrmax - ltrmin+1);
}

int main()
{
    char ltrmin,ltrmax;
    int strand(time(NULL));

    cout<<"Entrez la letter minimal: "<<endl;
    cin>>ltrmin;
    cout<<"Entrez la lettre maximal: "<<endl;
    cin>>ltrmax;

    cout<<"la lettre aleatoir entre ["<<ltrmin<<"-"<<ltrmax<<"]: "<<endl;

    cout<<" "<<alpha(ltrmin,ltrmax)<<endl;

    return EXIT_SUCCESS;
}
