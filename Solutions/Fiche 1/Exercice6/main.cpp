/**
    Ecrire un programme en C++ qui demande à l'utilisateur de taper un entier N et qui calcule u(N) défini
par :
u(0)=1
u(1)=1
u(n+1)=u(n)+u(n-1)

**/

#include<iostream>

using namespace std;

int main()
{
    int i;
    int u =1;
    v = 1;
    int w, N;

    cout<<"Entrez la valeur de N : ";  cin >> N;
    w = 1;
    for(i = 2; i <= N; i++)
        {
            w = u + v;
            u = v;
            v = w;
        }

    cout << " u( " << N << " ) =  " << w << endl;
    return 0;
}
