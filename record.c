#include <stdio.h>
#include <string.h>

#define N 10

struct data
{
    int giorni;
    char mesi[12];
    int anno;
};

struct studente
{
    char cogn[20]:
    char nome[20];
    struct data,studente
    int voti[10];
};

int main()
{
    studente s1;

    printf("\ninserisci il cognome:  ");
    scanf("%s",s1.cogn);

    printf("\n inscerisi il nome:  ");
    scanf("%s",s1.nome);

    printf("\n inserisci la data di nascita\n");
    printf("\n inserisci il giorno:  ");
    scanf("%s",s1.data.giorni);
    printf("\n inserisci il mese:  ");
    scanf("%s",s1.data.mese);
    printf("\n inserisci il giorno:  ");
    scanf("%s",s1.data.anno);

    do{
       printf("\n inserisci il voto:  ");
       scanf("%d",&s1.voti[N]);
       c++; 
    }while(c<N);

}