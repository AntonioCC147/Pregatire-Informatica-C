#include <iostream>
using namespace std;

void permutare(int V[], int n){
    int i, aux;

    aux = V[0];
    for(i = 0; i < n; i++)
        V[i] = V[i+1];
    V[n-1] = aux;
}

int main()
{
    /* Scrieti o functie care primeste ca parametru un tablou si il modifica in memorie permutand elementele sale la stanga cu
    o pozitie, de 5 ori. 
    Exemplu: 1 2 3 4 5 -> 2 3 4 5 1
    */

    int V[10], n, i;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> V[i];

    for(i = 0; i < 5; i++)
        permutare(V, n);

    for(i = 0; i < n; i++)
        cout << V[i] << " "; 

    return 0;
}