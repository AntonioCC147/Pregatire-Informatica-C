#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /* Scrieti o structura de date cu referire la detalii despre o banca. Aceasta contine numele, varsta si suma din cont.
    Se considera 2 tablouri A si B ce reprezinta 2 banci diferite. Se doreste creearea unui tablou C care contine fuziunea
    acestor 2 banci. Daca o persoana apare si la banca A si la banca B, in banca C va aparea o singura data cu suma adunata
    de la cele 2 banci.
    Exemplu:
        Pentru banca A:
            Andrei 18 100
            Bianca 20 500
            Matei 45 1000
        Pentru banca B:
            Augustin 30 550
            Bianca 20 500
            Matei 45 100
            Iulia 19 300
        Banca C devine:
            Andrei 18 100
            Bianca 20 1000
            Matei 45 1100
            Augustin 30 550
            Iulia 19 300     
    */

    struct banca{
        char nume[25];
        int varsta, suma;
    }A[100], B[100], C[200];

    int n1, n2, i, j, n3 = 0, OK;

    cin >> n1;
    for(i = 0; i < n1; i++)
        cin >> A[i].nume >> A[i].varsta >> A[i].suma;

    cin >> n2;
    for(i = 0; i < n2; i++)
        cin >> B[i].nume >> B[i].varsta >> B[i].suma;

    for(i = 0; i < n1; i++){
        OK = 0;
        for(j = 0; j < n2; j++)
            if(strcmp(A[i].nume, B[j].nume) == 0){
                strcpy(C[n3].nume, A[i].nume);
                C[n3].varsta = A[i].varsta;
                C[n3].suma = A[i].suma + B[j].suma;
                n3++; OK = 1;
                strcpy(B[j].nume, "NULL");
            }
        if(OK == 0){
            strcpy(C[n3].nume, A[i].nume);
            C[n3].varsta = A[i].varsta;
            C[n3].suma = A[i].suma;
            n3++;
        }
    }

    for(i = 0; i < n2; i++){
        if(strcmp(B[i].nume, "NULL") != 0){
            strcpy(C[n3].nume, B[i].nume);
            C[n3].varsta = B[i].varsta;
            C[n3].suma = B[i].suma;
            n3++;
        }
    }

    for(i = 0; i < n3; i++)
        cout << C[i].nume << " " << C[i].varsta << " " << C[i].suma << endl;

    return 0;
}