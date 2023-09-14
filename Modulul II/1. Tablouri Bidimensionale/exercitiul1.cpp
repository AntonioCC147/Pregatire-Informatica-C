#include <iostream>
using namespace std;

int main()
{
    /* Scrieti un program care citeste o matrice patratica si afiseaza conturul acesteia. 
    Pentru:
    1 2 0 3
    4 5 5 6
    3 5 9 1
    7 8 1 9
    se afiseaza: 1 2 0 3 6 1 9 1 8 7 3 4
    */
    int M[10][10], n, i, j;

    cin >> n;

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> M[i][j];

    for(i = 0; i < n; i++)
        cout << M[0][i] << " ";

    for(i = 1; i < n; i++)
        cout << M[i][n-1] << " ";

    for(i = n - 2; i >= 0; i--)
        cout << M[n-1][i] << " ";

    for(i = n - 2; i >= 1; i--)
        cout << M[i][0] << " ";

    return 0;
}