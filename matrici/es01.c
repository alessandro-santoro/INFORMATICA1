#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define C 5
#define R 5

int menu(void);

void caricaMatriceRand(int m[][C]);

void stampaMatrice(int [][C]);

void caricaZero(int m[][C]);

void caricaMatrice(int m[][C]);

void stampaDiagonale(int m[][R]);

int cerca_num(int x,int m[][C]);

int numeri_uguali(int x,int m[][C]);

int cerca_num_perRiga(int m[][C]);

int ricercaSentinellaMat(int x,int m[][C])



int main()
{
    srand(time(NULL));

    int matrice[R][C];
    int r;
    int n;
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

                case 5: 
                        printf("\n HAI SCELTO STAMPA DIAGONALE\n");

                        stampaMatrice(matrice);

                        stampaDiagonale(matrice);
                break;

                case 6:
                        printf("\n HAI SCELTO CERCA NUMERO NELLA MATRICE \n");

                        printf("\n inserisci il numero da cercare:  ");
                        scanf("%d", &n);

                        stampaMatrice(matrice);

                        r=cerca_num(n,matrice);
                        
                        printf("\nil numero e' %d", r);
                break;
                
                case 7:
                        printf("\n HAI SCELTO NUMERI UGUALI\n");

                        printf("\n inserisci il numero da cercare:  ");
                        scanf("%d", &n);

                        stampaMatrice(matrice);

                        r=numeri_uguali(n,matrice);

                        printf("\n i numeri uguali al numero inserito sono %d", r);
                break;

                case 8: 
                        printf("\n HAI SCELTO CERCA NUMERO PER RIGA\n");

                        stampaMatrice(matrice);

                        r=cerca_num_perRiga(matrice);
                break;

                case 9:
                        printf("\n HAI SCELTO RICERCA SENTINELLA MATRICE\n");

                        stampaMatrice(matrice);

                        printf("\n inserisci il numero da cercare:  ");ù
                        scanf("%d",&n);

                        r=ricercaSentinellaMat(n,matrice);

                        printf("\n il numero(%d)e' nella posizione %d%d",n,r);

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
    printf("\n digita -5- per stampare la diagonale\n");
    printf("\n digita -6- per cercare un numero nella matrice\n");
    printf("\n digita -7- per sapere quanti numeri uguali ci sono\n");
    printf("\n digita -8- per cerca num per riga\n");

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
    for(int i=0;i<R;i++)
    {
        printf("\n%d° riga ",i);
        

        for(int j=0;j<C;j++)
        {
            printf("\t %d° colonna ",j);
            scanf("%d",& m[i][j]);
        }
    }
}

void stampaDiagonale(int m[][R])
{
    for(int i=0;i<R;i++)
    {
        printf("%d\n",m[i][i]);

        for(int j=0;j<C;j++)
        {
            printf("\t");
        }
    }
}

int cerca_num(int x, int m[][C])
{
    for(int i =0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(m[i][j]==x)
            {
                return m[i][j];
            }
        }
    }
}



int numeri_uguali(int x,int m[][C])
{
    int c=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(m[i][j]==x)
            {
                c++;
            }
        }
    }
    return c;
}

int cerca_num_perRiga(int m[][C])
{
    int num;

    for(int i=0;i<R;i++)
    {
        printf("\n inserisci il numero da cercare:  ");
        scanf("%d",&num);

        for(int j=0;j<C;j++)
        {
            if(m[i][j]==num)
            {
                printf("\n il numero c'e' %d",m[i][j]);
            }
        }
    }
}

ricercaSentinellaMat(int x,int m[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            
        }
    }
}