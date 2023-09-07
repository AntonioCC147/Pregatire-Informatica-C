#include <iostream>
using namespace std;

int main()
{
    //CMMDC prin scaderi repetate

    int a, b, CMMDC;

    cin >> a >> b;

    while(a != b){
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }

    CMMDC = a; //SAU CMMDC = b;
    cout << CMMDC;

    //CMMMC -> (a * b) / CMMMDC;
    int a2, b2, x, y, CMMDC, CMMMC;

    cin >> a2 >> b2; x = a2; y = b2;

    while(x != y){
        if(x > y)
            x = x - y;
        else
            y = y - x;
    }

    CMMDC = x; //SAU CMMDC = y;

    CMMMC = (a2 * b2) / CMMDC;
    cout << CMMDC;

    return 0;
}