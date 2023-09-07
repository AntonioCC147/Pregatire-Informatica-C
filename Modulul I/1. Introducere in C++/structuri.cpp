#include <iostream>
using namespace std;

int main()
{
/*
    1. Structura Alternativa - if:
    if(conditie)
        expresie1/expresii1
    else
        expresie2/expresii2

    - verificam conditia
    - daca este indeplinita, vom executa expresie1/expresii1
    - altfel, vom executa expresie2/expresii2
    - NU ewste obligatoriu sa avem "else"

    int nr;

    cin >> nr;

    if(nr % 2 == 0)
        cout << "Numarul este par.";
    //else
        //cout << "Numarul este impar.";
*/
/*
    2. Structura Repetitiva cu Test Initial - while
    while(conditie){
        expresie/expresii
    }

    - verificam conditia
    - daca este indeplinita, vom executa expresie/expresii
    - verificam din nou conditia
    - daca este indeplinita, vom executa expresie/expresii
    - altfel ne oprim
    - si asa mai departe

    int nr, k = 0;

    cin >> nr;

    while(nr != 0){
        if(nr % 2 == 0)
            k++;
        nr = nr / 10;
        //123 / 10 -> [12.3] -> 12
    }

    cout << k;
*/
/*
    3. Structura Repetitiva cu Test Initial - for
    for(i = 0; i <= nr; i++) SAU for(i = nr; i >= 0; i--)
        expresie/expresii            expresie/expresii

    - se atribuie initial lui i valoarea 0 / nr
    - se verifica daca i < nr / i >= 0
    - daca da, se executa expresie/expresii
    - se incrementeaza / decrementeaza valoarea
    - se verifica din nou conditia

    Alte variante:
    int nr = 0;
    for( ; nr < 100; nr=nr+2)

    int n, nr, i, k = 0;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> nr;
        if(nr % 2 == 0)
            k++;
    }

    cout << k;
*/
/*
    4. Structura Repetitiva cu Test Final - do...while
    do{
        expresie/expresii
    }while(conditie);

    - execut expresie/expresii
    - verific conditia
    - daca este indeplinita, reiau executarea expresie/expresii
    - altfel, ma opresc

    int nr;

    cin >> nr;

    do{
        cout << nr % 10 << " ";
        nr = nr / 10;
    }while(nr != 0);
*/

    return 0;
}