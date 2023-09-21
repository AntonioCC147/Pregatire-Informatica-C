#include <iostream>
using namespace std;

int main()
{
    /*
        1. Ce sunt mai exact functiile definite de utilizator?
            Reprezinta mici programe pe care le putem scrie in afara functiei main si pe care le putem apela ori de cate ori
        este necesar.
            Functiile sunt de 2 tipuri:
                - functii care returneaza valori
                - functii care furnizeaza / afiseaza valori

        2. Antetul functiei:
            Sintaxa: tip_data nume(parametrii){ ... }
            Exemplu: int suma(int a, int b){ ... } SAU void produs(int a, int b){ ... }
            - functia int ne spune ca va rezulta o valoare de tip int
            - functia void nu returneaza nimic, ci afiseaza sau eventual furnizeaza

        3. Furnizare:
            Furnizarea se refera la modificarea unei anumite valori prin intermediul unor parametrii de intrare.
            In mod general, functiile isi schimba valorile variabilelor inauntrul lor, insa, cand se revine la functia main,
        aceste valori raman neschimbate. Pe scurt, tot ce se intampla in cadrul si interiorul functiei, ramane acolo.
            Exista posibilitatea ca o valoare trimisa printr-un parametru sa i se schimbe valoarea, iar atunci cand se reintoarce
        in functia main, valoarea sa fie si ea schimbata. Acest lucru este posibil cu ajutorul simbolul '&' care reprezinta
        furnizarea propriu-zisa.
            Exemplu: void suma(int &s, int a, int b){ ... }

        4. Exemplu General:
            void suma(int &s, int a, int b){
                s = a + b;
            }
            int main(){
                int s = 0, a, b;

                cin >> a >> b;

                suma(s, a, b);

                cout << s;
            }

        Ce se intampla mai sus?
            - in main declaram variabilele
            - se citesc valorile celor 2 variabile
            - se apeleaza functia suma()
            - in cadrul functiei, 's' primeste valoarea lui "a + b"
            - se afiseaza 's' care are valoarea lui "a + b"
    */

    return 0;
}