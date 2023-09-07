#include <iostream>
using namespace std;

int main()
{
    //300 -> 2^2 * 3 * 5^2

    int nr, d = 2, p;

    cin >> nr;

    while(nr > 1){
        p = 0;
        while(nr % d == 0){
            nr = nr / d;
            p++;
        }
        if(p != 0)
            cout << d << "^" << p << " ";
        d++;
    }

    return 0;
}