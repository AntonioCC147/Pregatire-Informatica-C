#include <iostream>
using namespace std;

int main()
{
    //intreg (int), reale (float), caractere (char), boolene (bool)
    int nr, nr2;
    bool verify = true;
    int verify2 = 1;
    //true -> 1; false -> 0
    //Variabile: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm#

    //citirea si afisarea unei variabile
    cin >> nr; cout << nr;

    //atribuirea unei valori unei variabile
    //<nume_variabila> = <valoare>
    nr = 10; verify = false;
    nr = nr2 = -5;

    /*
    biblioteci:
    math.h / cmath -> functii matematice
    fstream -> fisiere text
    string.h / cstring -> functiile sirurilor de caractere
    */

    //incrementare / decrementar:
    //<nume_variabila>++; sau <nume_variabila>--
    //Creste / Descreste valoarea unei variabile
    nr++; nr--;

    return 0;
}