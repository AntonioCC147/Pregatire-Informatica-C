#include <iostream>
using namespace std;

//Suma cifrelor unui numar:
int suma(int n){
    if(n <= 9)
        return n;
    else
        return suma(n / 10) + n % 10;
}
/*  Pasi:
    1. suma(123)
    2. suma(12) + 3
    3. suma(1) + 2
    4. 1
    5. 1 + 2 + 3 = 6
*/

//Factorialul unui numar:
int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
/*  Pasi:
    1. factorial(4)
    2. 4 * factorial(3)
    3. 3 * factorial(2)
    4. 2 * factorial(1)
    5. 1 * factorial(0)
    6. 1
    7. 1 * 2 * 3 * 4 = 24
*/

//CMMDC prin scaderi repetate
int cmmdc(int a, int b){
    if(a == b)
        return a;
    if(a > b)
        cmmdc(a-b, b);
    else
        cmmdc(a, b-a);
}

int main()
{
    /*
        Un subprogram recursiv consta in posibilitatea sa de a se autoapela de un numar finit de ori.
        Aceste subprograme pot sa fie atat cele care returneaza (int, float), sau care afiseaza (void).
    */

    return 0;
}