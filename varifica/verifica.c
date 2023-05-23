#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define C 5
#define R 5

int menu(void);

void caricaMatriceRand(int m[][C]);

void stampaMatrice(int [][C]);

void carica(int m[][C], int x);

void nuovoInserisci(int m[][C], int x);

void caricaa(int x, int m[][C]);

void inserisci(int m[][C], int x);

int cancella(int [][C],int x);

int conta(int m[][C],int x, int y);

int massimo(int m[][C]);

void ribaltaDiagonale(int m[][C]);

void ribaltaMatrice(int m[][C]);

int main()
{
    srand(time(NULL));

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
                        printf("\nHAI SCELTO CARICA RANDOM MATRICE\n");

                        caricaMatriceRand(matrice);

                        stampaMatrice(matrice);
                break;

                case 2:
                        printf("\n carica\n");

                        printf("\n inserisci il numero:  ");
                        scanf("%d",&n);

                        if(n%2==1)
                        {
                            n++;
                        }

                        carica(matrice,n);
                break;

                case 3: 
                        printf("\n nuovo inserisci\n");

                        printf("\n inserisci il numero:  ");
                        scanf("%d",&n);

                        nuovoInserisci(matrice,n);
                break;

                case 4:
                        printf("\n caricaa\n");

                        printf("\n inserisci il numero:  ");
                        scanf("%d",&n);

                        caricaa(n,matrice);
                break;

                case 5:
                        printf("\n inserisci\n");

                        printf("\n inserisci un numero:  ");
                        scanf("%d",&n);

                        inserisci(matrice,n);
                break;

                case 6:
                        printf("\n cancella\n");

                        printf("\n inserisci il numero:  ");
                        scanf("%d",&n);

                        r=cancella(matrice,n);

                        printf("\n i numeri eliminati sono %d", r);
                break;

                case 7:
                        printf("\n carica\n");

                        printf("\n inserisci il numero:  ");
                        scanf("%d",&n);

                        printf("\n inserisci il numero:  ");
                        scanf("%d",&n2);

                        if(n>n2)
                        {
                            for(int jj=n;jj<n2;jj--)
                            {

                            }
                        }

                        r=conta(matrice,n,n2);

                        printf("\n i numeri sono %d",r);
                break;         

                case 8:
                        printf("\n massimo\n");

                        r=massimo(matrice);

                        printf("\n il massimo e' %d\n\n",r);
                        stampaMatrice(matrice);    
                break;       

                case 9:
                        printf("\n ribalta diagonale\n");

                        ribaltaDiagonale(matrice);
                break;  

                case 10:
                        printf("\n ribarlta matrice\n");

                        ribaltaMatrice(matrice);
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
    printf("\n 3 nuovo inserisci");
    printf("\n 4 carica seconda verifica");
    printf("\n 5 inserisci");
    printf("\n 6 cancella");
    printf("\n 7 conta ");
    printf("\n 8 massimo");
    printf("\n 9 ribalta diagonale");
    printf("\n 10 ribalta matrice");

    scanf("%d",&risp);

    return risp;
}

void caricaMatriceRand(int m[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            m[i][j] = rand() %41+10;
        }
    }


}

void stampaMatrice(int m[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
           printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void carica(int m[][C], int x)
{

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            m[i][j]=x;
            x+=2;
        }
    }
    stampaMatrice(m);
}

void nuovoInserisci(int m[][C], int x)
{
    int c=1;
    for(int i=0; i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            m[i][j]=m[i][j-1]*c;
            c++;
        }
    }
    stampaMatrice(m);
}

void caricaa(int x,int m[][C])
{
    int c=1;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            m[i][j]=c*x;
            c++;
        }
    }
    stampaMatrice(m);
}

void inserisci(int m[][C], int x)
{
    int n=0;

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("\n inserisci:  ");
            scanf("%d",&n);

            if(n>x)
            {
                m[i][j]=n;
            }

            else
            {
                printf("\nnumero sbagliato\n");

                printf("\n inserisci unn numero superiore a %d\n",x);
                printf("\n inserisci:  ");
                scanf("%d",&n);
            }
        }
    }
    stampaMatrice(m);
}

int cancella(int m[][C],int x)
{
    int c=1,z=0;
    printf("\n matrice prima\n");
    stampaMatrice(m);
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(c*x==m[i][j])
            {
                m[i][j]=0;
                z++;
            }
        }
    }
    printf("\n matrice dopo\n");
    stampaMatrice(m);
    return z;
}

int conta(int m[][C],int x, int y)
{
    int c=0;
    stampaMatrice(m);
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(m[i][j]>x && m[i][j]<y)
            {
                c++;
            }
        }
    }
    return c;
}

int massimo(int m[][C])
{
    int max = m[0][0];

    for(int i = 0; i < R; i++)

        for(int j = 0; j < C; j++)

            if(m[i][j] > max) max = m[i][j];
    
    return max;
}

void ribaltaDiagonale(int m[][C])
{
    int x=0;
    printf("\n\n");
    stampaMatrice(m);
    for(int i=0,j=R-1;i<=R/2;i++,j--)
    {
        x=m[i][i];
        m[i][i]=m[j][j];
        m[j][j]=x;
    }
    printf("\n\n");
    stampaMatrice(m);
}

void ribaltaMatrice(int m[][C])
{
    int z,y=0,x=0;
    printf("\n\n");
    stampaMatrice(m);
    for(int i=0,j=C*R;i<=C*R/2;i++,j--)
    {
        z=m[i][x];
        m[i][x]=m[j][y];
        m[j][y]=z;
    }
    printf("\n\n");
    stampaMatrice(m);
}