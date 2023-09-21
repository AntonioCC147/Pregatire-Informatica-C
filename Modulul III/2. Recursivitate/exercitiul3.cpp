#include <iostream>
using namespace std;

long fibo(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibo(n-2) + fibo(n-1); 
}

int main()
{
    /* Scrieti un program recursiv care afiseaza al n-lea element din sirul lui Fibonacci.
    Sirul lui Fibonacci: 1 1 2 3 5 8 13 21 44 65 etc. */

    cout << fibo(17); //1597

    return 0;
}