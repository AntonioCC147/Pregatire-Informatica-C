#include <iostream>
using namespace std;

int cifMax(int n){
    if(n <= 9)
        return n;
    else{
        int cif = n % 10, maxim = cifMax(n / 10);

        if(cif > maxim)
            return cif;
        else
            return maxim;
    }
}
/*  Pasi:
        cifMax(4856)

        cif = 3
        maxim = cifMax(4856)
        cif = 6
        maxim = cifMax(485)
        cif = 5
        maxim = cifMax(48)
        cif = 8
        maxim = cifMax(4)
        cif = 8, maxCif = 4 => return 8
        cif = 5, maxCif = 8 => return 8
        cif = 6, maxCif = 8 => return 8
        cif = 3, maxCif = 8 => return 8
*/

int main()
{
    /* Scrieti o functie recursiva care sa returneze cifra maxima a unui numar. */

    cout << cifMax(4856); //8

    return 0;
}