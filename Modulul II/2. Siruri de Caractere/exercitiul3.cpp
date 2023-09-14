#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /* Se citeste un sir care contine cuvinte separate prin spatii si caracterul ';'.
    Sa se ordoneze cuvintele si sa se afiseze ulterior pe ecran, pe linii separate.
    Ex: cirese; mar; para; gutuie; banane; se va afisa
        banane
        cirese
        gutuie
        mar
        para
    */

    char sir[100], cuv[20][20], aux[20], *p; int i, j, n = 0;

    cin.get(sir, 100);

    p = strtok(sir, " ;");
    while(p != NULL){
        strcpy(cuv[n++], p);
        p = strtok(NULL, " ;");
    }

    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(strcmp(cuv[i], cuv[j]) > 0){
                strcpy(aux, cuv[i]);
                strcpy(cuv[i], cuv[j]);
                strcpy(cuv[j], aux);
            }

    for(i = 0; i < n; i++)
        cout << cuv[i] << endl;

    return 0;
}