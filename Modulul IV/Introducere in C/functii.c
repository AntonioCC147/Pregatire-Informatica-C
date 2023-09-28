#include <stdio.h>

/*
void suma(int a, int b, int &s){
    s = a + b;
}
*/

//VS

void suma(int a, int b, int *s){
    *s = a + b;
    (*s)++;
    //NU *s++; pentru ca prima data se va efectua s++, iar apoi *(s++)
}

int main()
{
    /*
    suma(a, b, s);

    cout << s; //ramanea salvat
    */

    int a, b, s = 0;

    scanf("%d%d", &a, &b);

    suma(a, b, &s);

    printf("%d", s);

    return 0;
}