#include <iostream>
using namespace std;

int main()
{
    //Un numar este palindrom daca citit de la stanga la dreapta este acelasi cu el citit de la dreapta la stanga
    //Exemplu: 121 -> 121

    int nr, aux, inv = 0;

    cin >> nr; aux = nr;

    while(aux != 0){
        inv = inv * 10 + aux % 10;
        aux = aux / 10;
    }

    if(nr == inv)
        cout << "Numarul este palindrom";
    else
        cout << "Numarul nu este palindrom";

    return 0;
}