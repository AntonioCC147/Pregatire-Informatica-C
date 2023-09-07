#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Definirea unui fisier de intrare:
    //ifstream <nume_fisier>(<calea_fisiereului>);
    //Ex:
    ifstream f("fisier1.txt");

    //Definirea unui fisier de iesire:
    //ofstream <nume_fisier>(<calea_fisierului>);
    //Ex:
    ofstream g("fisier2.txt");

    //Citire din fisier:
    //f >> <nume_variabile>
    int nr;
    //f >> nr;

    //Afisarea in fisier:
    //g << <nume_variabile>
    //g << nr;

    //Citeste toate numerele din fisier1.txt si afiseaza in fisier2.txt doar pe cele pare.
    while(f >> nr)
        if(nr % 2 == 0)
            g << nr << " ";

    //Inchiderea unui fisier:
    //<nume_fisier>.close();
    //Exemplu:
    f.close(); g.close();

    return 0;
}