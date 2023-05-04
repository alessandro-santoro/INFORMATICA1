#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define C 4
#define R 3

int menu(void);

void caricaMatriceRand(int m[][C]);

void stampaMatrice(int [][C]);

void caricaZero(int m[][C]);

void caricaMatrice(int m[][C]);


int main()
{
    srand(time(NULL));

    int matrice[R][C];
    int r;
    int k;

    caricaZero(matrice);

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
                        printf("\nHAI SCELTO STAMPA MATRICE\n");

                        stampaMatrice(matrice);
                break;

                case 3: 
                        printf("\nHAI SCELTO CARICA ZERO MATRICE\n");

                        stampaMatrice(matrice);
                break;

                case 4: 
                        printf("\n HAI SCELTO CARICA MANUALMENTE MATRICE\n"),

                        caricaMatrice(matrice);

                        stampaMatrice(matrice);
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
    printf("\n digita -0- per uscire dal programma\n");
    printf("\n digita -1- per caricare random la matrice\n");
    printf("\n digita -2- per stampare la matrice\n");
    printf("\n digita -3- per caricare a zero la matrice\n");
    printf("\n digita -4- per caricare manualmente la matrice\n");


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

void caricaZero(int m[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            m[i][j]= 0;
        }
    }
}

void caricaMatrice(int m[][C])
{
    int rig=0,col=0;

    for(int j=0;j<C;j++)
    {
        printf("\t %d° colonna",col);
        col++;
    }

    for(int i=0;i<R;i++)
    {
        printf("\n%d° riga",rig);
        rig++;

        for(int j=0;j<C;j++)
        {
            printf("\t\t");
            scanf("%d",& m[i][j]);
        }
    }
}