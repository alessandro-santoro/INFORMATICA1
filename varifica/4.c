#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define N 10
# define C 5
# define R 5

int menu(void);

void caricarand(int v[]);

void carica(int v[], int x);

void stampavett(int v[]);

void nuovoInserisci(int v[],int x);

int conta(int v[], int x);

void causualimat(int m[][C]);

void stampamat(int m[][C]);

void dispari(int m[][C], int y);

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
                        printf("\n casuali matrice\n");

                        causualimat(matrice);

                        stampamat(matrice);
                break;

                case 6:
                        printf("\n stampa matrice\n");

                        stampamat(matrice);
                break;

                case 7:
                        printf("\n dispari matrice\n");

                        printf("\n inserisci un numero:  ");
                        scanf("%d",&n);

                        dispari(matrice,n);

                        stampamat(matrice);
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
    printf("\n 5 casuali matrice");
    printf("\n 6 stampa matrice");
    printf("\n 7 dispari");

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

void stampavett(int v[])
{
    for(int i=0;i<N;i++)
    {
        printf("\t%d",v[i]);
    }
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
    for(int i=0;i<N;i++)
    {
        if(v[i]>x)
        {
            c++;
        }
    }
    return c;
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
        printf("\n");

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
        printf("\n");

        for(int j=0;j<R;j++)
        {
            if(m[i][j]%2==1)
            {
                m[i][j]=y;
            }
        }
    }
}