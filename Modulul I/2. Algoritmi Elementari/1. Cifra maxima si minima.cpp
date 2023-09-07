#include <iostream>
using namespace std;

int main()
{
    //Cifra maxima:
    int nr, maxim = 0;

    cin >> nr;

    while(nr != 0){
        if(nr % 10 > maxim)
            maxim = nr % 10;
        nr = nr / 10;
    }

    cout << maxim;

    //Cifra minima:
    int nr2, minim = 9;

    cin >> nr2;

    while(nr2 != 0){
        if(nr2 % 10 < minim)
            minim = nr2 % 10;
        nr2 = nr2 / 10;
    }

    cout << minim;

    return 0;
}