#include <iostream>
#include <string.h> //functie necesara folosirii sirurilor de caractere
using namespace std;

int main()
{
    /* 
        In unele variante, se poate utiliza functia <cstring>.

        Functii:
            - strlen(sir); -> returneaza lungimea unui sir
            - strcpy(sir1, sir2); -> copiaza sir2 in sir1 (absolut tot, sir1 DISPARE complet)
            - strncpy(sir1, sir2, n); -> copiaza sir2 in sir1, dar DOAR primele n caractere
            - strcat(sir1, sir2); -> lipeste sir2 langa sir1
            - strncat(sir1, sir2); -> lipeste sir2 langa sir1, dar DOAR primele n caractere
            - strcmp(sir1, sir2); -> compara sir1 cu sir2
                Intoarce 0 daca ele sunt egale, o valoare > 0 daca sir1 > sir2 si o valoare < 0 daca sir1 < sir2
            - strupr(sir); -> face tot sirul sa aiba caractere litere mari
            - strlwr(sir); -> face tot sirul sa aiba caractere litere mici
            - strstr(sir1, sir2); -> verifica daca sir2 se afla in sir1
            - strchr(sir1, car); -> intoarce un pointer catre prima aparitie a lui car in sir1, unde car este caracter
            - strtok(sir, sep); -> intoarce un pointer catre prima aparitie a lui sep (separator) in sir
    */

    return 0;
}