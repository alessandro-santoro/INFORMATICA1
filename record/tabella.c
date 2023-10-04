/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 1/10/2023
*
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N 10
#define T 3

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

void inserimento(studente st1[]);

void stampa(studente st1[]);

int main()
{
    srand(time(NULL));

    studente s1[T];


    inserimento(s1);
    stampa(s1);

}

void inserimento(studente st1[])
{
    for(int j=0;j<T;j++)
    {
        printf("\n inserisci numero matricola:\t");
        scanf("%d",&st1[j].matricola);

        printf("\n inserisci il cognome:\t");
        scanf("%s",st1[j].cogn);

        printf("\n inserisci il nome:\t");
        scanf("%s",st1[j].nome);

        printf("\n insersci il giorno di nascita:\t");
        scanf("%d",&st1[j].nascita.giorni);

        printf("\n insersci il mese di nascita:\t");
        scanf("%s",st1[j].nascita.mese);

        printf("\n insersci il anno di nascita:\t");
        scanf("%d",&st1[j].nascita.anno);

        for(int i=0;i<N;i++)
        {
            printf("inserisci il %d voto:\t",i+1);
            st1[j].voti[i]=rand()%10+1;
        }
    }

}

void stampa(studente st1[])
{
    for(int j=0;j<T;j++)
    {
        printf("\n\n\n <<<studente %d>>>",j+1);
        printf("\n\n numero matricola:\t%d",st1[j].matricola);
        printf("\n\n nome studente:\t%s\t%s",st1[j].cogn,st1[j].nome);
        printf("\n\n data di nascita studente:\t%d|%s|%d",st1[j].nascita.giorni,st1[j].nascita.mese,st1[j].nascita.anno);

        printf("\n voti:");
        for(int i=0;i<N;i++)
        {
            printf("\t%d",st1[j].voti[i]);
        }
    }
}

