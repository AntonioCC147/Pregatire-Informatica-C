#include <iostream>
using namespace std;

int main()
{
    /*Se citeste un vector v cu n elemente numere intregi. Sa se analizeze valorile sale si sa se afiseze un mesaj care
    sa spuna ca acestea sunt "toate diferite", "toate identice", sau "oarecare" in functie de caz*/

    int v[100], n, i, j, aux, OK1 = 1, OK2 = 1;
    //OK1 - toate diferite | OK2 - toate identice | orice alt caz - oarecare

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> v[i];

    for(i = 0; i < n; i++)
        for(j = i; j < n; j++)
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    for(i = 0; i < n - 1; i++){
        if(v[i] == v[i+1])
            OK1 = 0;
        if(v[i] != v[i+1])
            OK2 = 0;
    }

    if(OK1 == 1)
        cout << "toate diferite";
    else if(OK2 == 1)
        cout << "toate identice";
    else
        cout << "oarecare";

    return 0;
}