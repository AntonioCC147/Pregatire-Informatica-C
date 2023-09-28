#include <stdio.h>

void eliminare(int V[], int *n){
    for(int i = 0; i < *n; i++)
        if(V[i] == 0){
            for(int j = i; j < *n; j++)
                V[j] = V[j+1];
            (*n)--;
        }
}

int main()
{
    //Scrieti o functie care primeste un vector si elimina toate elementele nule.

    int V[100], n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &V[i]);

    eliminare(V, &n);

    for(int i = 0; i < n; i++)
        printf("%d ", V[i]);

    return 0;
}