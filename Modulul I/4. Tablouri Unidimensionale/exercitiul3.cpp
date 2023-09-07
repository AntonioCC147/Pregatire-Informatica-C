#include <iostream>
using namespace std;

int main()
{
    /*Se da un vector v cu n elemente numere intregi si p, un numar natural. Sa se permute la stanga toate elementele vectorului
    cu p pozitii*/

    int v[100], n, p, i, aux;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> v[i];

    cin >> p;

    while(p){
        aux = v[0];
        for(i = 0; i < n - 1; i++)
            v[i] = v[i+1];
        v[n-1] = aux;
        p--;
    }

    for(i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}