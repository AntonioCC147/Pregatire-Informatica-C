#include <iostream>
using namespace std;

int main()
{
    /*
        A. Grafuri Neorientate:
            - este o pereche ordonata de multimi, notata de fel cu G = (X, U), unde X reprezinta multimea nodurilor, iar U
        reprezinta multimea muchiilor

        1. Definiti Generale:
            - un nod / varf este un element al multimii X care poate sa fie reprezentat printr-un cerc
            - o muchie este o pereche neordonata de noduri ce poate fi reprezentata in plan printr-un segment de dreapta / arc
            - un nod izolat are mereu gradul 0
            - un nod terminal are mereu gradul 1
            - suma tuturor gradelor ese egala cu dublul numarului de muchii

        2. Lanturi & Cicluri:
            - un lant reprezinta o succesiune de noduri, conectate prin muchii
            - un ciclu reprezinta un lant a carui prim si ultim nod este identic
            - un ciclu hamiltonian reprezinta un ciclu care trece prin toate muchiile grafului
            - un ciclu eulerian reprezinta un ciclu care trece prin toate nodurile grafului, iar fiecare nod are mereu gradul par

        3. Tipuri de grafuri:
            - subgraful reprezinta un graf obtinut dintr-un graf initial din care eliminam noduri si toate muchiile care se
        leaga de acestea
            - graful partial reprezinta un graf obtinut dintr-un graf initial din care eliminam anumite muchii, lasand nodurile
        neatinse
            - graful regulat reprezinta un graf in care toate nodurile au grade egale
            - graful complet reprezinta un graf in care oricare dintre doua noduri sunt adiacente intre ele
            - graful aciclic reprezinta un graf care nu contine niciun ciclu
            - graful conex reprezinta un graf care nu contine noduri izolate

        4. Modele de reprezentare:
            4. 1. Matrice de adiacenta:
                - se considera o matrice patratica
                - M[i][j] = 1 daca exista muchie intre nodul i si nodul j
                - M[i][j] = 0 in cazul anterior contrar
                - pe diagonala principala elementele vor fi mereu 0
                - matricea este simetrica fata de diagonala principala

            4. 2. Lista de adiacenta:
                - se considera o lista x: y, z, etc. unde x reprezinta indicele nodului, iar y, z, etc. sunt nodurile incidente

        B. Grafuri Orientate:
            - este o pereche ordonata de multimi, notata de fel cu G = (X, U), unde X reprezinta multimea nodurilor, iar U
        reprezinta multimea muchiilor

        1. Definiti Generale:
            - un nod / varf este un element al multimii X care poate sa fie reprezentat printr-un cerc
            - un arc este o pereche ordonata de noduri ce poate fi reprezentata in plan printr-o sageata
            - un nod izolat are mereu gradul 0
            - un nod terminal are mereu gradul 1
            - suma gradelor interne = suma gradelor externe = nr de arce
            - un grad intern reprezinta numarul de arce care iese din nod
            - un grad extern reprezinta numarul de arce care intra in nod

        2. Drumuri & Circuite:
            - un drum este o succesiune de noduri, cu proprietatea ca sunt legate prin arce
            - circuitul reprezinta un drum al carui inceput si sfarsit duce catre acelasi nod

        3. Tipuri de grafuri:
            - subgraful reprezinta un graf obtinut dintr-un graf initial din care eliminam noduri si toate arcele care se
        leaga de acestea
            - graful partial reprezinta un graf obtinut dintr-un graf initial din care eliminam anumite arce, lasand nodurile
        neatinse
            - graful complet reprezinta un graf ion care oricare dintre doua noduri sunt adiacentre intre ele
            - graful orientat tare conex in care pentru oricare doua noduri distincte exista cel putin un drum

        4. Modele de reprezentare:
            4. 1. Matrice de adiacenta:
                - se considera o matrice patratica
                - M[i][j] = 1 daca exista arc intre nodul i si nodul j
                - M[i][j] = 0 in cazul anterior contrar
                - pe diagonala principala elementele vor fi mereu 0
                - matricea este mai este simetrica fata de diagonala principala

            4. 2. Lista de adiacenta:
                - se considera o lista x: y, z, etc. unde x reprezinta indicele nodului, iar y, z, etc. sunt nodurile incidente

        C. Arbori:
            - un arbore este un graf conex aciclic
            - un arbore are n varfuri si n-1 muchii
            - radacina se afla la cel mai inalt nivel

        1. Metode de reprezentare:
            1. 1. Matrice de adiacenta:
                - se considera o matrice patratica
                - M[i][j] = 1 daca exista muchie intre nodul i si nodul j
                - M[i][j] = 0 in cazul anterior contrar
                - pe diagonala principala elementele vor fi mereu 0
                - matricea este simetrica fata de diagonala principala

            1. 2. Lista de adiacenta:
                - se considera o lista x: y, z, etc. unde x reprezinta indicele nodului, iar y, z, etc. sunt nodurile incidente
    */

    return 0;
}