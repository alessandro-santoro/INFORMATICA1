/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 13/09/2023
*
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define V 10
#define T 5

struct data {
    int gg;
    int mm;
    int aa;
} typedef data;

struct alunno {
    char cognome[N];
    data nascita;
    int voti[V];
} typedef alunno;

//funzione per scrivere un file di N record
void crea(char[]);

//funzione in C per leggere e stampare su monitor le informazioni del file di record (si usi il controllo di fine file e non 
//il ciclo for con N perché la funzione sia vali da quale che sia il numero di record del file (quindi anche diverso da N))
void stampa(char[]);

//conta quante volte è presente uno studente che ha il cognome uguale alla stringa passata in output; la funzione restituisce un intero
int conta(char[], char[]);




int main(int argc, char *argv[])
{
    int r;

    srand(time(NULL));

    crea("alunni.dat");

    stampa("alunni.dat");

    r = conta("alunni.dat", "santoro");
    printf("\nsantoro: %d\n", r);
}


void crea(char file[])
{

    alunno t;
    FILE * fp = fopen(file, "ab");

    if(fp!=NULL){
        for(int i = 0; i<T; i++)
        {
            printf("---CARICA STUDENTE---\n");

            printf("inserisci cognome: ");
            scanf("%s", t.cognome);

            t.nascita.gg = rand()%30+1;
            t.nascita.mm = rand()%12+1;
            t.nascita.aa = rand()%30+1990;

            for(int j = 0; j<V; j++) {
                
                t.voti[j] = rand()%10+1;
            }

            fwrite(&t, sizeof(alunno), 1, fp);
        }
    }
    fclose(fp);
}


void stampa(char file[])
{
    FILE * fp = fopen(file, "rb");
    alunno t;
    int n;

    if(fp!=NULL){
        while(!feof(fp))
        {
            n = fread(&t, sizeof(alunno), 1, fp);
            if(n>0)
            {
                printf("\n\n--STUDENTE--\n\n");
                printf("cognome: %s\n", t.cognome);
                printf("giorno di nascita: %d/%d/%d\n", t.nascita.gg, t.nascita.mm, t.nascita.aa);
                printf("-voti-\n");
                for(int j = 0; j<V; j++){
                    printf("%d\t", t.voti[j]);
                }
                printf("\n\n");
            }
        }
    }
    fclose(fp);
}

int conta(char file[], char z[])
{
    FILE * fp = fopen(file, "rb");

    alunno t;
    int c = 0;

    if(fp != NULL){
        while(!feof(fp))
        {
            fread(&t, sizeof(alunno), 1, fp);

            if(strcmp(t.cognome, z) == 0) c++;
        }
    }
    fclose(fp);

    return c;
}