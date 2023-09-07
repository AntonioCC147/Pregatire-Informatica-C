#include <iostream>
using namespace std;

int main()
{
    //Declararea unui vector: <tip_variabila> <nume_vector>[<numar_element>]
    int V[100];

    //Vectorul V are 100 de elemente, fiecare initializare cu o valoare RANDOM

    for(int i = 0; i < 100; i++)
        cout << V[i] << " ";

    //Daca vreau ca vectorul sa aiba toate elementele nule, voi declara:
    int V2[100] = {0};

    for(int i = 0; i < 100; i++)
        cout << V2[i] << " ";

    //Alte metode de declarare: int V3[10] = {1, 5, 2, 6, 9}; -> urmatoarele 5 elemente au valori RANDOM

    //Citirea:
    for(int i = 0; i < 100; i++)
        cin >> V[i];
    /*PS: Se incepe de fiecare data cu indicele din 0
    -------------
    |  |  |  |  |
    -------------
     0  1  2  3
     */

    return 0;
}