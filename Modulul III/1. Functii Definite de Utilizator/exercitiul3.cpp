#include <iostream>
using namespace std;

void prime(int x, int y, int &n1, int &n2){
    n1 = n2 = 0;
    int i, div, OK;

    for(i = x + 1; i <= y; i++){
        OK = 1;
        for(div = 2; div <= i / 2; div++)
            if(i % div == 0)
                OK = 0;
        if(OK == 1){
            if(n1 == 0)
                n1 = i;
            n2 = i;
        }
    }
}

int main()
{
    /* Scrieti o functie care primeste ca parametru 2 numere x si y si furnizeaza in n1 si n2 cel mai mic si cel mai mare
    numar prim din intervalul (x, y]. */

    int a, b, nr1, nr2;

    cin >> a >> b;

    prime(a, b, nr1, nr2);

    cout << nr1 << " " << nr2;

    return 0;
}