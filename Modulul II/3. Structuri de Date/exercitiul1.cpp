#include <iostream>
using namespace std;

int main()
{
    /* Scrieti o structura care defineste informatii despre un salariat. Cititi datele, apoi afisati numele celui care are
    ce mai mare salariu. */

    struct salariat{
        char nume[25], prenume[50];
        int CNP;
        float salariu;
    }S[100];

    int n, i, poz; float maxim = 0;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> S[i].nume >> S[i].prenume >> S[i].CNP >> S[i].salariu;

    for(i = 0; i < n; i++)
        if(S[i].salariu > maxim){
            maxim = S[i].salariu;
            poz = i;
        }

    cout << S[poz].nume << " " << S[poz].prenume;

    return 0;
}