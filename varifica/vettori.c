/** ****************************************************************************************
* 
* @author alessandro santoro 
* @date 13/09/2023
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define N 10
# define C 5
# define R 5

int menu(void);

void caricarand(int v[]);

void stampavett(int v[]);

void carica(int v[], int x);
/*si inseriscano nell'array i primi N numeri pari maggiori di x. Il 2° parametro sia
chiesto all'utente nel main: N.B. se l'utente inserisce un numero dispari si faccia nel main quanto necessario
per passare il numero pari successivo*/

void nuovoInserisci(int v[],int x);
/*si inserisca il parametro x come primo elemento dell'array. Il secondo
elemento dell'array sia il doppio del primo, il terzo elemento sia il triplo del secondo, il quarto sia il quadruplo
del terzo e così via.*/

int conta(int v[], int x);
/*visualizza e conta gli elementi di indice pari maggiori di un intero x passato come
parametro; la funzione restituisce quanti sono i numeri maggiori di x. Il 2° parametro sia chiesto
all'utente nel main.*/

int massimo(int v[]);
/*Cerca il massimo fra gli elementi dell’array restituendo l'indice dell'elemento
massimo.*/

void causualimat(int m[][C]);
/*Si avvalori tutta la matrice con numeri casuali compresi fra 10 e 20*/

void stampamat(int m[][C]);
/*Stampi sul monitor tutta la matrice per righe (si vada a capo per ogni nuova riga)*/

void dispari(int m[][C], int y);
/*Si sostituisca ogni elemento dispari presente nella matrice con il valore Y (2° parametro)*/

int pariMat(int m [ ] [ C ], int x);
/*La funzione restituisce 1 se la matrice contiene solo numeri pari nella riga di indice x, zero
altrimenti
Nel main si richiami la funzione per tutte le righe della matrice*/

int main()
{
    srand(time(NULL));

    int vett[N];
    int matrice[R][C];
    int r;
    int n,n2;
    int k;



    while(k)
    {
        r = menu();

        switch(r)
            {
                case 0:
                        printf("\nFINE PROGRAMMA\n");
        
                break;

                 case 1:
                        printf("\nHAI SCELTO CARICA RANDOM vettore\n");

                        caricarand(vett);

                        stampavett(vett);
                break;

                case 2:
                        printf("\ncarica\n");

                        printf("\ninserisci un numero:  ");
                        scanf("%d",&n);

                        carica(vett,n);
                break;

                case 3:
                        printf("\nuovo inserisci\n");

                        printf("\ninserisci un numero:  ");
                        scanf("%d",&n);

                        nuovoInserisci(vett,n);
                break;

                case 4:
                        printf("\n conta\n");

                        printf("\n inserisci un numero:  ");
                        scanf("%d",&n);

                        r=conta(vett,n);

                        stampavett(vett);

                        printf("\n");

                        printf("\n%d",r);
                break;

                case 5:
                        printf("\n massimo\n");

                        r=massimo(vett);
                        stampavett(vett);

                        printf("\n%d",r);
                break;

                case 6:
                        printf("\n casuali matrice\n");

                        causualimat(matrice);

                        stampamat(matrice);
                break;

                case 7:
                        printf("\n stampa matrice\n");

                        stampamat(matrice);
                break;

                case 8:
                        printf("\n dispari matrice\n");

                        printf("\n inserisci un numero:  ");
                        scanf("%d",&n);

                        dispari(matrice,n);

                        stampamat(matrice);
                break;

                case 9:
                        printf("\n pari mat\n"),

                        for(int f=0;f<C;c++)
                        {
                            r=pariMat(matrice,n)
                        }

                break;

                default : printf(" hai sbagliato numero");     


        }

        printf("\n\n permi invio per continuare:  ");
        getchar();
        getchar();
        system("clear");
    }


}

int menu(void)
{
    int risp;

    printf("\n\n alessandro santoro \n");
    printf("\n 1 carica rand");
    printf("\n 2 carica");
    printf("\n 3 nuovo insersci");
    printf("\n 4 conta");
    printf("\n 5 massimo");
    printf("\n 6 casuali matrice");
    printf("\n 7 stampa matrice");
    printf("\n 8 dispari matrice");
    printf("\n 9 pari mat");

    scanf("%d",&risp);

    return risp;
}

void caricarand(int v[])
{
    for(int i=0;i<N;i++)
    {
        v[i] = rand() %41+10;
    }


}

void stampavett(int v[])
{
    for(int i=0;i<N;i++)
    {
        printf("\t%d",v[i]);
    }
}

void carica(int v[], int x)
{
    if(x%2==1)
    {
        x++;
    }
    for(int i=0;i<N;i++)
    {
        v[i]=x;
        x+=2;
    }
    stampavett(v);

}

void nuovoInserisci(int v[],int x)
{
    int c=0;
    v[0]=x;
    for(int i=0;i<N;i++)
    {

    }
    stampavett(v);
}

int conta(int v[], int x)
{
    int c=0;
    for(int i=0;i<N;i+=2)
    {
        if(v[i]>x)
        {
            c++;
        }
    }
    return c;
}

int massimo(int v[]) 
{
    int max = 0;
    for (int i = 0; i<N; i++)
    {
        if(v[i]>v[max]) max = i;
    }
    return max;
}

void causualimat(int m[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            m[i][j] = rand() %41+10;
        }
    }
}

void stampamat(int m[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("\t%d",m[i][j]);
        }
    }
}

void dispari(int m[][C], int y)
{
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<R;j++)
        {
            if(m[i][j]%2==1)
            {
                m[i][j]=y;
            }
        }
    }
}

int pariMat(int m [ ] [ C ], int x);
{
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<R;j++)
        {
            if(m[i][j]%2==0)
            {
                return 1
            }
        }
    }
    return 0;
}
