#include <iostream>
using namespace std;

int main()
{
    /*
        Sirurile de caractere reprezinta niste tablouri unidimensionale in care sunt stocate caractere.
        Fiecare sir de caractere se termina by default cu caracterul \0 care reprezinta un TERMINATOR.
        Sirurile de caractere sunt indentate AUTOMAT din 0.

        1. Cum declar un sir de caractere?
            - char caracter; //declar un singur caracter
            - char caracter2 = 'a';
            - char sir[20]; //declar un sir care poate contine 20 de caractere
            - char sir2[20] = "cuvant";
            - char vector[10][20]; //declar un vector cu 10 cuvinte, fiecare avand maxim 20 de caractere
            - char vector2[10][20] = {"cuvant1", "cuvant2", "cuvant3"};

        2. Cum citesc un sir de caractere?
            - daca vreau sa citesc un caracter sau un cuvant, pot folosi basic: cin >> sir;
            - daca vreau sa citesc un intreg sir de caractere, care contine si spatii
                albe (" "), folosesc functia: cin.get(sir, <numar_caractere_pe_care_vrea_sa_le_citesc>);
                Exemplu: cin.get(sir, 100);

        3. Cum afisez un sir de caractere?
            - afisarea se face ca la orice alta variabila: cout << sir;
    */

    return 0;
}