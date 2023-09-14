#include <iostream>
using namespace std;

int main()
{
    /* Tablourile Bidimensionale sau Matricile pot fi considerate ca o suprapunere de vectori. 
        Matricea este impartita pe linii si coloane.
        In memorie, matricea este reprezentata liniar.

        1 2 3
        4 5 6
        7 8 9

        1. Cum se initializeaza?
            <tip_data> <nume_variabila>[<numar_linii>][<numar_coloane>]
            Ex: int M[10][5]; => 50 de elemente

            Alta metoda: X[3][3] = {[1, 2, 3], [4, 5, 6], [7, 8, 9]};

        2. Cum se citeste?
            Presupunem ca avem o matrice cu m linii si n coloane:
            cin >> m >> n;

            for(i = 0; i < m; i++) //linia
                for(j = 0; j < n; j++) //coloana
                    cin >> M[i][j];

        3. Cum se afiseaza?
            for(i = 0; i < m; i++){
                for(j = 0; j < n; j++)
                    cout << M[i][j] << " ";
                cout << endl;
            }

        4. Diagonalele (pe matrici patratice):
            1. Diagonala principala:
                i == j

            2. Diagonala secundara:
                i + j == n - 1
    */

    return 0;
}