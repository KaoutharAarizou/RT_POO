#include <iostream>
#include <cstdlib>
#include<time.h>
#include<ctime>
using namespace std;

int i_Alea(int nbrmin,int nbrmax)
{
char nbr_Alea=0;
return nbr_Alea=rand()%(nbrmax-nbrmin+1)+nbrmin;
}

int main()
{
int nbrmin,nbrmax;
int strand(time(NULL));

cout<<"Entrez Nombre minimal: "<<endl;
cin>>nbrmin;
cout<<"Entrez Nombre maximal: "<<endl;
cin>>nbrmax;
cout<<"la lettre aleatoir entre ["<<nbrmin<<"-"<<nbrmax<<"]: "<<endl;

for(int i=nbrmin; i<nbrmax; i++)
 cout<<" "<<i_Alea(nbrmin,nbrmax)<<endl;

return EXIT_SUCCESS;
}
