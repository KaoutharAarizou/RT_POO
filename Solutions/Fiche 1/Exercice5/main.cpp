/**
Ecrire un programme en C++ qui demande à l'utilisateur de taper un entier N et qui calcule u(N) défini
par :
u(0)=3
u(n+1)=3.u(n)+4

**/

#include <iostream>

using namespace std;

int main()
{
    int i, u = 3, N;

    cout << "Tapez N : ";
    cin>>N;

    for(i = 0; i < N; i++)
        u = u*3 + 4;

    cout << "u(" << N << ")  =  " << u <<endl;
    return 0;
}

