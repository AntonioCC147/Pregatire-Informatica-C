#include <iostream>
using namespace std;

void f(int x){
    cout << x;

    if(x > 0){
        if(x % 2 == 0)
            cout << '*';
        f(x / 2);
        cout << "*";
    }
}

int main()
{
    /* Determina afisarea apelului f(9).
    
    Pasi:
        1. f(9)
        2. Se afiseaza 9
        3. f(4)
        4. Se afiseaza 4, Se afiseaza *
        5. f(2)
        6. Se afiseaza 2, Se afiseaza *
        7. f(1)
        8. Se afiseaza 1
        9. f(0)
        10. Se afiseaza 0
        11. Ne intoarcem si afisam * de atatea ori cat am "coborat"
    */

    f(9); //94*2*10****

    return 0;
}