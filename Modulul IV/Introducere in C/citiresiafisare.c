#include <stdio.h>

int main()
{
    /*
        1. Citirea in limbajul de programare C:
            scanf("parametrii", &<variabila>, <&variabile>);

            Exemplu 1:
                int nr;
                scanf("%d", &nr);

            %d reprezinta un identificator al unei variabile intregi (d - decimal)
            %i - integer NU se foloseste
            %f - float
            %s - string
            %c - caracter
            %lf - long float
            %u - unsigned

            Exemplu 2:
                int nr1, nr2;
                scanf("%d%d", &nr1, &nr2);
            
            Exemplu 3:
                char sir[100];
                scanf("%s", sir); //NU sunt obligat sa-i adaug '&'

            Exemplu 4:
                int n1; float n2;
                scanf("%d%f", &n1, &n2);

            Citirea unui sir de caractere se mai poate face cu ajutorul functiei: gets(<nume>);
            Exemplu:
                char s[100];
                gets(s);

        2. Afisarea in limbajul de programare C:
            printf("parametrii", <variabila>, <variabile>);

            Exemplu 1:
                scanf("%d", &nr);
                printf("%d", nr);

            In interiorul lui printf putem sa afisam cum dorim variabilele, inclusiv adaugand text suplimentar, spatii, sau linii
            noi.

            Exemplu 2:
                scanf("%d%d", &nr1, &nr2);
                printf("Numarul 1 este %d, iar numarul 2 este %d.", nr1, nr2);

            Exemplu 3:
                scanf("%d%d", &nr1, &nr2);
                printf("Numarul 1 este %d\nNumarul 2 este %d", nr1, nr2);

            Exemplu 4:
                scanf("%f", &n);
                printf("%.2f", n * n);

            Exemplu 5:
                printf("Acesta este un mesaj.");

            Exemplu 6:
                puts(<variabila> / <text>);
                puts("Acesta este un mesaj");
    */

    return 0;
}