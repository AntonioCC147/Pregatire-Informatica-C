#include <iostream>
using namespace std;

int main()
{
    /*
        Structurile de date (neomogene) reprezinta un fel de "baza de date" in care puteti memora diverse elemente.

        1. Cum se declara o structura?
            struct <nume_structura>{
                <tip_data1> <nume1>
                <tip_data2> <nume2>
                <etc>
            }<nume_variabile>;

            Exemplu:
            struct student{
                char nume[25], prenume[50];
                int varsta;
            }ACS[100], FMI[50];

        2. Cum accesam un camp?
            - accesarea se face dupa urmatorul model: <nume_variabila>.<nume_camp>
            - Ex: ACS[0].nume; ACS[5].varsta;

        3. Structuri imbricate:
            - reprezinta o structura in interiorul altei structuri
            - Ex:
                struct eveniment{
                    char nume[20];
                    int nr_Invitati;
                    struct data{
                        int zi, luna, an;
                    }d;
                }E;
            - ce am scris mai sus reprezinta declararea unei structuri care reprezinta date despre un eveniment (nume, nr_Invitati),
                dar si data acestui eveniment, data ce paote fi accesata prin intermediul variabilei d.
            - daca vreau sa accesez ziua evenimentului, trebuie sa o iau "de jos in sus", pornind de la "cea mai importanta"
                variabila, pana la cea mai "neseminficativa"
            - Ex: E.d.zi; E.d.luna; E.d.an;
    */

    return 0;
}