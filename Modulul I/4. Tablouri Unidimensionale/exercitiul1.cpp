#include <iostream>
using namespace std;

int main()
{
    /*Se da un vector v cu n elemente numere intregi. Sa se construiasca alti 2 vectori, primul continand numai elementele
    pare, iar al doilea numai elemente impare.*/

    int v[100], par[100], impar[100], n, i, npar = 0, nimpar = 0;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> v[i];

    for(i = 0; i < n; i++)
        if(v[i] % 2 == 0)
            par[npar++] = v[i];
            /*
            Explicatie:
                initial npar = 0
                par[0] = v[i];
                npar++; -> npar din 0 devine 1
            */
        else
            impar[nimpar++] = v[i];

    for(i = 0; i < npar; i++)
        cout << par[i] << " ";
    cout << endl;

    for(i = 0; i < nimpar; i++)
        cout << impar[i] << " ";

    return 0;
}