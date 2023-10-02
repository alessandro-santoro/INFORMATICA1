/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 1/10/2023
*
*/

#include <stdio.h>
#include <string.h>

#define N 10

struct data
{
    int giorni;
    char mese[12];
    int anno;
} typedef data;

struct studente
{
    int matricola;
    char cogn[20];
    char nome[20];
    data nascita;
    int voti[N];
} typedef studente;

void inserimento(studente *st1);

void stampa(studente st1);

int main()
{
    studente s1;
    studente s2;

    inserimento(&s1);

    s2=s1;

    stampa(s2);
}

void inserimento(studente *st1)
{
    printf("\n inserisci numero matricola:\t");
    scanf("%d",&st1->matricola);

    printf("\n inserisci il cognome:\t");
    scanf("%s",st1->cogn);

    printf("\n inserisci il nome:\t");
    scanf("%s",st1->nome);

    printf("\n insersci il giorno di nascita:\t");
    scanf("%d",&st1->nascita.giorni);

    printf("\n insersci il mese di nascita:\t");
    scanf("%s",st1->nascita.mese);

    printf("\n insersci il anno di nascita:\t");
    scanf("%d",&st1->nascita.anno);

    for(int i=0;i<N;i++)
    {
        printf("inserisci il %d voto:\t",i+1);
        scanf("%d",&st1->voti[i]);
    }
}

void stampa(studente st1)
{
    printf("\n numero matricola:\t%d",st1.matricola);
    printf("\n nome studente:\t%s\t%s",st1.cogn,st1.nome);
    printf("\n data di nascita studente:\t%d|%s|%d",st1.nascita.giorni,st1.nascita.mese,st1.nascita.anno);
    for(int i=0;i<N;i++)
    {
        printf("\n%d°:\t%d",i+1,st1.voti[i]);
    }
}