#include <iostream>
using namespace std;

int main()
{
    /* Scrieti un program care citeste o matrice cu m linii si n coloane si k, k < n si elimina coloana k.
    Pentru:
            m = 4, n = 6
            1 4 5 8 2 7
            3 0 9 2 4 7
            0 1 2 3 0 4
            8 7 5 4 9 2
        si k = 4, matricea devine:
            1 4 5 2 7
            3 0 9 4 7
            0 1 2 0 4
            8 7 5 9 2
    */

    int M[10][10], m, n, k, i, j;

    cin >> m >> n;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> M[i][j];

    cin >> k;

    for(i = 0; i < n; i++)
        for(j = k - 1; j < n; j++)
            M[i][j] = M[i][j+1];
    n--;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    return 0;
}