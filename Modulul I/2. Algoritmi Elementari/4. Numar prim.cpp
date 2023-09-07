#include <iostream>
using namespace std;

int main()
{
    //Un numar este prim daca se imparte doar la 1 si la el insusi.

    int nr, div, OK = 1;

    cin >> nr;

    for(div = 2; div <= nr / 2; div++)
        if(nr % div == 0)
            OK = 0;

    if(OK == 1)
        cout << "Numarul este prim.";
    else
        cout << "Numarul nu este prim.";

    return 0;
}