#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define C 4
#define R 3

int menu(void);

void caricaMatriceRand(int m[][C]);

void stampaMatrice(int [][C]);


int main()
{
    srand(time(NULL));

    int matrice[R][C];
    int r;
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


        }
    }


}

int menu(void)
{
    int risp;

    printf("\n\n alessandro santoro \n");
    printf("\n digita 0 per uscire dal programma\n");
    printf("\n digita 1 per caricare random la matrice\n");


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