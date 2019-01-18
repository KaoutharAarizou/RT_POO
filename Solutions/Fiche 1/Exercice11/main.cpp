#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int base;
    do
    {
        cout << "Entrez la base du triangle    [chiffre impaire]:  ";
        cin >> base;
    }
    while(base%2 == 0);

    for(int j=1; j<=base; j+=2)
    {
        cout << setw((base-j) / 2  + 1);
        for(int i=1; i<=j; i++)
            {
                cout <<"*";
            }
        cout << endl;

    }

    return 0;
}
