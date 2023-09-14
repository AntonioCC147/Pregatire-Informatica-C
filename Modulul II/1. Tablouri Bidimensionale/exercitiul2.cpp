#include <iostream>
using namespace std;

int main()
{
    /* Scrieti un program care citeste un tablou bidimensional cu m linii si n coloane si o valoare k, unde k < m si
    permuta elementele de pe linia k cu o pozitie spre stanga.
        Pentru:
            m = 4, n = 5
            1 4 5 8 2
            3 0 9 2 4
            0 1 2 3 0
            8 7 5 4 9
        si k = 3, matricea devine:
            1 4 5 8 2
            3 0 9 2 4
            1 2 3 0 0
            8 7 5 4 9
    */

    int M[10][10], m, n, k, i, j, aux;

    cin >> m >> n;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> M[i][j];

    cin >> k;

    aux = M[k-1][0];
    for(i = 0; i < n; i++)
        M[k-1][i] = M[k-1][i+1];
    M[k-1][n-1] = aux;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    return 0;
}