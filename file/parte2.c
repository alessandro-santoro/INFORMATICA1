/*********************************************************************************************
*  @author alessandro santoro
*  @date 13/11/2023                                                                           
*********************************************************************************************/

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

// funzione per scrivere un file di N record con N costante posta a 10; 
void crea(char[]);

//funzione in C per leggere e stampare su monitor le informazioni del file di record 
//(si usi il controllo di fine file e non il ciclo for con N perché la funzione sia vali 
//da quale che sia il numero di record del file (quindi anche diverso da N)
void stampa(char[]);

//conta quante volte è presente uno studente che ha il cognome uguale alla stringa passata
// in output; la funzione restituisce un intero
int ricercaCog(char [], char []);

//) per ogni studente visualizza il suo cognome, la media dei suoi voti, il suo voto più alto 
//e il suo voto più basso. 
void InfVoti(char[]);

//la funzione cerca un cognome (stringa passata come parametro) nel file e restituisce la 
//posizione della sua prima occorrenza. (Es .se il cognome è trovato come 2° record si restituisce 2).
//Si restituisca  -1  se non esiste quel cognome nel file.
int trova(char[], char[]);


int main()
{
	int r;
	char l[N];
    srand(time(NULL));

    crea("alunni.dat");

    stampa("alunni.dat");
    
    printf("\n\ncognome da cercare: ");
    scanf("%s", l);
	r = ricercaCog(l,"alunni.dat");
	printf("\n\ncognomi uguali:%d",r);
	
	InfVoti("alunni.dat");
	
	r = trova("alunni.dat", "santoro");
    printf("\nposizione primo santoro: %d\n", r);
    
}

void crea(char file[])
{

    alunno s1;
    FILE * err1 = fopen(file, "ab");

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
    FILE * err1 = fopen(file, "rb");
    alunno s1;
    while(fread(&s1, sizeof(alunno), 1, err1)>0)
    {
        printf("\n\n--DATI STUDENTE--\n\n");

        printf("numero matricola: %d\n", s1.matricola);
        printf("cognome: %s\n", s1.cognome);
        printf("nome: %s\n", s1.nome);
        printf("giorno di nascita: %d/%d/%d\n", s1.nascita.gg, s1.nascita.mm, s1.nascita.aa);
        printf("-voti-\n");
        for(int j = 0; j<V; j++)
		{
            printf("%d\t", s1.voti[j]);
        }
        printf("\n\n");
    }
    fclose(err1);
    
}

int ricercaCog(char cogn[], char file[])
{
	FILE * err1 = fopen(file, "rb");
	alunno s1;
	int cont=0;
	while(fread(&s1, sizeof(alunno), 1, err1)>0)
    {
        if(strcmp(s1.cognome, cogn) == 0) 
			cont++;
    }
    return cont;
}

void InfVoti(char file[])
{
	FILE * err1 = fopen(file, "rb");
    alunno s1;
    int m = 0, max = 0, min = 0;

    while(fread(&s1, sizeof(alunno), 1, err1)>0)
        {
            printf("\n\n--DATI STUDENTE--\n\n");
            
            printf("cognome: %s\n", s1.cognome);
            for(int j = 0; j<V; j++)
            {
                m+=s1.voti[j];

                if(max < s1.voti[j]) max = s1.voti[j];

                if(min > s1.voti[j]) min = s1.voti[j];
            }

            m/=V;

            printf("media dei voti: %d\n", m);
            printf("massimo dei voti: %d\n", max);
            printf("minimo dei voti: %d\n", min);

            printf("\n\n");
        }
    fclose(err1);
}

int trova(char file[], char nome[])
{
    FILE * fp = fopen(file, "rb");

    alunno buffer;
    int c=-1;

    if(fp!=NULL)
        while(!feof(fp))
        {
            fread(&buffer, sizeof(alunno), 1, fp);

            if(strcmp(buffer.cognome, nome)==0) 
            {
                c = ftell(fp) / sizeof(alunno);
                break;
            }
        }

    return c;
    fclose(fp);
}

