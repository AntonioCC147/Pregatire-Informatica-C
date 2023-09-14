#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /* Scrieti o structura de date ce contine informatii despre o masina care contine: 2 caracter ce reprezinta initiala
    orasului (nu luam in considerare bucurestiul), numarul de inmatriculare si cele 3 caractere din placuta de inmatriculare,
    dar si plata per luna pe benzina. Sa se afiseze pretul total cheltuit pe un an de catre toate masinile din CT.
    Exemplu:
        CT 456 ABC 120
        BV 563 ACG 56
        CT 309 TGS 100
        CT 789 DTA 560
        TM 401 FTA 500
    Pret final: 120 + 100 + 560 = 780
    */

    struct masina{
        char oras[3], caractere[4];
        int numar, pret;
    }M[100];

    int n, i, sum = 0;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> M[i].oras >> M[i].numar >> M[i].caractere >> M[i].pret;

    for(i = 0; i < n; i++)
        if(strcmp("CT", M[i].oras) == 0)
            sum = sum + M[i].pret;

    cout << sum;

    return 0;
}