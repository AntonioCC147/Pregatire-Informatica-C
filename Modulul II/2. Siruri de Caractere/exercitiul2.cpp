#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /* Scrieti un program care citeste de la tastatura un sir cu maxim 100 de caractere si un cuvant cu maxim 5.
    Sa se afiseze pe ecran cate cuvinte din sirul principal il au drept prefix pe cuvantul citit.
    Ex: pentru sirul: maine este mai si maine merg la mare sa tamai si cuvantul mai se afiseaza 3
    */

    char sir[100], cuv[5], *p; int k = 0;

    cin.get(sir, 100); cin.get(); cin.get(cuv, 5); //cin >> cuv;

    p = strtok(sir, " ");
    while(p){
        if(strlen(strstr(p, cuv)) == strlen(p)) //verific strict daca il gasim pe cuv in p si este si prefix
            k++;
        p = strtok(NULL, " ");
    }

    cout << k;

    return 0;
}