/** ****************************************************************************************
* 
* @author alessandro santoro 
* @date 13/09/2023
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define C 5
# define R 5

int menu(void);

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
                        printf("\n casuali matrice\n");

                        causualimat(matrice);

                        stampamat(matrice);
                break;

                case 2:
                        printf("\n stampa matrice\n");

                        stampamat(matrice);
                break;

                case 3:
                        printf("\n dispari matrice\n");

                        printf("\n inserisci un numero:  ");
                        scanf("%d",&n);

                        dispari(matrice,n);

                        stampamat(matrice);
                break;

                case 4:
                        printf("\n pari mat\n");

                        for(int f=0;f<C;f++)
                        {
                            r=pariMat(matrice,n);

                            printf("\n%d",r);
                        }
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
    printf("\n 1 casuali matrice");
    printf("\n 2 stampa matrice");
    printf("\n 3 dispari matrice");
    printf("\n 4 pari mat");

    scanf("%d",&risp);

    return risp;
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
        for(int j=0;j<R;j++)
        {
            if(m[i][j]%2==1)
            {
                m[i][j]=y;
            }
        }
    }
}

int pariMat(int m [ ] [ C ], int x)
{
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<R;j++)
        {
            if(m[i][j]%2==0)
            {
                return 1;
            }
        }
    }
    return 0;
}
