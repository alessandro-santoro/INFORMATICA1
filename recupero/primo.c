#include <stdio.h>
#include <string.h>
#define N 3

struct studente
{
	char cog[20];
	char nome[20];
	int voto[10];
	char sezione[1];
	int anno;
	data nascita;
}typedef studente;

struct data
{
	int giorno;
	int mese;
	int anni;
}typedef data;

void inserisciDati(	studente s[]);
void stampaDati(studente s[]);

int main()
{
	studente s1[N];
	
	inserisciDati(s1);
	stampaDati(s1);
}

void inserisciDati(	studente s[])
{
	
	for(int i=0;i<N;i++)
	{
		printf("inserisci nome:\t");
		scanf("%s",s[i].nome);
		
		printf("inserisci cognome:\t");
		scanf("%s",s[i].cog);
		
		printf("inserisci sezione:\t");
		scanf("%s",s[i].sezione);
		
		printf("inserisci anno:\t");
		scanf("%d",s[i].anno);
		
		printf("inserisci giorno di nasctita:\t");
		scanf("%d",s[i].nascita.giorno);
		
		printf("inserisci mese di nasctita:\t");
		scanf("%d",s[i].nascita.mese);
		
		printf("inserisci anno di nasctita:\t");
		scanf("%d",s[i].nascita.anni);
		
		for(int c=0;c<10;c++)
		{
			printf("inserisci il %d° voto:\t",c+1);
			scanf("%d",s[i].voto[c]);
		}
	}
}

void stampaDati(studente s[])
{
	for(int i=0;i<N;i++)
	{
		printf("nome:\t%s",s[i].nome);
		printf("cognome:\t%s",s[i].cog);
		printf("sezione:\t%s",s[i].sezione);
		printf("anno:\t%d",s[i].anno);
		printf("gionro di nascita:\t",s[i].nascita.giorno);
		printf("mese di nascita:\t",s[i].nascita.mese);
		printf("anno dui nascita:\t",s[i].nascita.anni);
		for(int c=0;c<10;c++)
		{
			printf("%d° voto:\t%d",c+1,s[i].voto[c]);
		}
	}
}
