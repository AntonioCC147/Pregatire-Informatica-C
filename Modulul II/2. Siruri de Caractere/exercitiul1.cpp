#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /* Scrieti un program care citeste un sir si afiseaza pe ecran cate cuvinte au acelasi numar de vocale si consoane. */

    char sir[100], *p; int v, c, i, k = 0;

    cin.get(sir, 100);

    p = strtok(sir, " ");
    while(p != NULL){
        v = c = 0;
        for(i = 0; i < strlen(p); i++)
            if(strchr("aeiou", p[i]) != NULL)
                v++;
            else
                c++;
        if(v == c)
            k++;
        p = strtok(NULL, " ");
    }

    cout << k;

    return 0;
}