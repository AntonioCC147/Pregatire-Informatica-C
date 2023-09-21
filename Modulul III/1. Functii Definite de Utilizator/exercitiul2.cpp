#include <iostream>
using namespace std;

int concatenare(int a, int b){
    int c = a, p = 1, aux = b;

    while(aux != 0){
        p = p * 10;
        aux = aux / 10;
    }

    c = a * p + b;

    return c;
}

int main()
{
    /* Scrieti un program care primeste ca parametru 2 numere a si b si returneaza numarul c care reprezinta concatenarea dintre
    cele 2.
    Exemplu: a = 12, b = 45, c = 1245
    */

    int x, y, rez;

    cin >> x >> y;

    rez = concatenare(x, y);

    cout << rez;

    return 0;
}