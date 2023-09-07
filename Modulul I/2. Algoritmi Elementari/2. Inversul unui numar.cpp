#include <iostream>
using namespace std;

int main()
{
    //Inversul unui numar: 123 -> 321

    int nr, inv = 0;

    cin >> nr; //nr = 123

    while(nr != 0){
        inv = inv * 10 + nr % 10;
        nr = nr / 10;
        /*
            inv = 0 * 10 + 3 = 3
            nr = 12
            inv = 3 * 10 + 2 = 32
            nr = 1
            inv = 32 * 10 + 1 = 321
            nr = 0
        */
    }

    cout << inv;

    return 0;
}