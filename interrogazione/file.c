#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define V 10
#define T 2

struct data {
    int gg;
    int mm;
    int aa;
} typedef data;

struct alunno {
    int matricola;
    char cognome[N];
    char nome[N];
    data nascita;
    int voti[V];
} typedef alunno;

void crea(char[]);

void stampa(char[]);

int main()
{
    crea("fout.dat");
    stampa("fout.dat");
}

void crea(char file[])
{

    alunno s1;
    FILE * err1 = fopen(file, "wb");

    for(int i = 0; i<T; i++)
    {
    	printf("---CARICA DATI STUDENTE---\n");
        s1.matricola = i+1;

        printf("inserisci cognome: ");
        scanf("%s", s1.cognome);

        printf("inserisci nome: ");
        scanf("%s", s1.nome);

        s1.nascita.gg = rand()%30+1;
        s1.nascita.mm = rand()%12+1;
        s1.nascita.aa = rand()%30+1980;

        for(int j = 0; j<V; j++) 
		{
            
            s1.voti[j] = rand()%10+1;
        }

        fwrite(&s1, sizeof(alunno), 1, err1);
    }
    fclose(err1);
}

void stampa(char file[])
{
    alunno s1;
    FILE*stampa=fopen(file,"rb");
    while(fread(&s1, sizeof(alunno), 1, stampa)>0)
    {
        printf("\n matricola:%d",s1.matricola);
        printf("\n cognome:%s",s1.cognome);
        printf("\n nome:%s",s1.nome);
        printf("\n data:%d/%d/%d\n",s1.nascita.gg,s1.nascita.mm,s1.nascita.aa);

        printf("voti:");
        for(int j=0;j<V;j++)
        {
            printf("\t%d",s1.voti[j]);
        }
    }
    fclose(stampa);
}