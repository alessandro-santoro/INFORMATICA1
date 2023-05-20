#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define C 5
#define R 5

int menu(void);

void caricaMatriceRand(int m[][C]);

void stampaMatrice(int [][C]);

void carica(int m[][C], int x);



int main()
{
    srand(time(NULL));

    int matrice[R][C];
    int r;
    int n;
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
    printf("\n 1 carica rand\n");
    printf("\n 2 carica\n");


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
    m[0][0]=x;
    for(int i=0;i<R;i++)
    {
        printf("%d\t",m[i][i]);
        m[i][i]+=2;
        for(int j=0;j<C;j++)
        {
            printf("%d\t",m[i][j]);
            m[i][j]+=2;
        }
    }
}
