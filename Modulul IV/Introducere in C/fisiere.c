#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        (!) Doar pentru fisiere text.
        
        1. Declararea unui fisier:
            FILE *<tag_fisier> = fopen(char* numeFisier, char* mod);

              Citire  Scriere  Adaugare  Citire + Scriere  Scriere + Citire  Adaugare + Citire
        Mod:    rt       wt       at           r+t                w+t                a+t

            Exemplu:
            FILE *fis("fis1.txt", "rt");
            Daca fisierul NU exista si il deschidem cu tipul "wt", atunci se va forma un nou fisier AUTOMAT.

            fis == NULL in cazul in care fisierul NU poate fi deschis.

        2. Citirea dintr-un fisier:
            fscanf(<fisier>, <parametrii>, <variabile>);
            fgets(<sir>, <lungime>, <fisier>);

        3. Afisarea intr-un fisier:
            fprintf(<fisier>, <parametrii>, <variabile>);
            fputs(<sir>, <fisier>);

        4. Inchiderea unui fisier:
            fclose(<nume_fisier>);

        5. Alte observatii:
            Daca avem un fisier deja existent care contine informatii si il deschidem cu "wt", atunci tot ce este in fisier
        va fi automat sters.
            EOF -> End of File (Sfarsit de fisier)

    */

    FILE *fis1 = fopen("fis1.txt", "rt"), *fis2 = fopen("fis2.txt", "wt");
    if(fis1 == NULL){
        puts("Nu exista fisierul.");
        exit(1);
    }

    /*
    int nr1, nr2;
    fscanf(fis1, "%d%d", &nr1, &nr2);
    printf("%d %d", nr1, nr2);

    fprintf(fis2, "%d\n%d", nr1, nr2);

    fclose(fis1); fclose(fis2);
    */

    int nr;
    fscanf(fis1, "%d", &nr);
    while(!feof(fis1)){
        printf("%d ", nr);
        fscanf(fis1, "%d", &nr);
    }

    return 0;
}