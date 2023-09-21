#include <iostream>
using namespace std;

int main()
{
    /*
        Backtracking reprezinta metode care se pot folosi pentru rezvolarea unor probleme in care trebuie sa se genereze
    toate solutiile, eventual si dupa anumite reguli.
        Elementele care alcatuiesc o solutie trebuie sa fie distincte (nu putem aveea 2 solutii identice).
        Metoda Backtracking foloseste o rutina care apeleaza mai multe functii recursive, cu scopul de a ajunge la solutia
    dorita.

                                                    1     2    3      4        5
        Exemplu: Se considera multimea de materii {PCLP, ISO, AMAT, ALGAED, MECANICA}. Primele solutii sunt: {PCLP, ISO, AMAT},
    {PCLP, ISO, ALGAED}, {PCLP, ISO, MECANICA}, {ISO, ANMAT, ALGAED}. Care este ultima si penultima solutie?
        Raspuns: 123, 124, 125, 234, 235, 345 => ultimele 2 sunt: {ISO, ALGAED, MECANICA}, {AMAT, ALGAED, MECANICA}
    */

    return 0;
}