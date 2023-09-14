#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define C 5
#define R 5

int menu(void);

void caricarand(int v[]);

void carica(int v[], int x);

void stampavett(int v[]);

void nuovoInserisci(int v[],int x);

int main()
{
    srand(time(NULL));

    int vett[C];
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

    scanf("%d",&risp);

    return risp;
}

void caricarand(int v[])
{
    for(int i=0;i<C;i++)
    {
        v[i] = rand() %41+10;
    }


}

void carica(int v[], int x)
{
    if(x%2==1)
    {
        x++;
    }
    for(int i=0;i<C;i++)
    {
        v[i]=x;
        x+=2;
    }
    stampavett(v);

}

void stampavett(int v[])
{
    for(int i=0;i<C;i++)
    {
        printf("\t%d",v[i]);
    }
}

void nuovoInserisci(int v[],int x)
{
    int c=0;
    v[0]=x;
    for(int i=0;i<C;i++)
    {

    }
    stampavett(v);
}