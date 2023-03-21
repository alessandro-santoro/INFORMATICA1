#include<stdio.h>

#include <time.h>

#include <stdlib.h>

#define n 10

int menu (void);

void scambio(int x, int y);

void carica(int[]);

void caricaRand(int []);

void stampovett(int []);

void cerca_num(int x,int []);

int contamultipli_vettori(int [], int x);

void ribaltavett(int []);

void copiavett(int [],int []);

int somma_vettore(int []);

int media_vettore(int []);

void contaDis_Par(int []);

void carica_zero(int []);

int numPrimo(int x);

int contaPrimivett(int []);

int main()
{
    int vettore[n], vettore2[n];
    int risultato,num;

    risultato = menu();

    switch (risultato)
    {
        case 0 : printf("\n sei uscito dal programma");
        break;

        case 1 : printf ("\n hai scelto carica il vettore");
                
                 printf("\n insrisci 10 numeri");

                 carica( vettore );
        break;

        case 2 : printf ("\n hai scelto carica random il vettore");
                
                 caricaRand( vettore );
        break;

        case 3 : printf ("\n hai scelto stampa il vettore");

                 stampovett(vettore);
        break;

        case 4 : printf ("\n hai scelto cerca numero nel il vettore");
                 
                 printf("\ninserisci il numero da trovare:  ");
                 scanf("%d",& num);

                 cerca_num(num , vettore);
        break;

        case 5 : printf ("\n hai scelto conta multipli del vettore");

                 risultato = contamultipli_vettori( vettore, num );
        break;

        case 6 : printf("\n hai scelyto ribalta vettore");

                 ribaltavett(vettore);
        break;

        case 7 : printf ("\n hai scelto copia vettore in un'altro ");
    
                 copiavett(vettore,vettore2);
        break;

        case 8 : printf("\n hai scelto somma del vettore");

                risultato = somma_vettore(vettore);

                printf("\nla somma e' %d", risultato);
        break;

        case 9 : printf ("\n hai scelto media del vettore");

                 risultato = media_vettore(vettore);

                 printf("\nla media e' %d", risultato); 
        break;

        case 10 : printf("\n hai scelto conta i numeri pari e dispari del vettore");

                  contaDis_Par(vettore);
        break;

        case 11 : printf("\n hai scelto carica di zeri il vettore");

                  carica_zero(vettore);

        break;

        case 12 : printf("\n hai scelto numero primo di un vettore");

                  risultato = contaPrimivett(vettore);

                  printf("\ni numeri primi sono %d", risultato);
                  printf("\n");
                  stampovett(vettore);


        default : printf(" hai sbagliato numero");             

    }

    printf("\n\n permi invio per continuare:  ");
    getchar();
    getchar();
    system("clear");
}

int menu (void)
{

    int r;

    printf("\n                   programma alessandro santoro\n\n");

    printf("\n***************************************************************");
    printf("\n 1 carica vettore                                             *");
    printf("\n 2 carica random                                              *");
    printf("\n 3 stampa vettore                                             *");
    printf("\n 4 cerca numero nel vettore                                   *");
    printf("\n 5 conta i multipli del vettore                               *");
    printf("\n 6 ribalta il vettore                                         *");
    printf("\n 7 copia il vettore in un'altro                               *");
    printf("\n 8 somma del vettore                                          *");
    printf("\n 9 media del vettore                                          *");
    printf("\n 10 conta i numeri pari e dispari del vettore                 *");
    printf("\n 11 carica di zeri il vettore                                 *");
    printf("\n 12 per sapere quanti numeri primi ci sono nel vettore        *");
    printf("\n                                                              *");
    printf("\n 0 ESCI                                                       *");
    printf("\n***************************************************************");
    printf("\n\n inserisci il numero:  ");

    scanf("%d",& r);

    printf("\n\n");

    return r;
}

void scambio(int x, int y)
{
    int scambio;

    scambio = x;
    x = y;
    y = scambio;

}

void carica(int v[ ])
{
    int c;

    for(c = 0; c<n; c++)
    {
        printf("\ninserisci il %d° nuemro\n",c+1);
        scanf("%d",& v[c]);
    }

    stampovett(v);
}

void caricaRand(int v[])
{
    srand(time(NULL));
    for(int c = 0; c<n; c++)
    {
        v[c] = rand()%50 + 1;
    }

    stampovett(v);
}

void stampovett(int v[])
{
    printf("\n\n");
    for(int c = 0; c<n; c++)
    {
        printf("%d\t ", v[c]);
    }
    printf("\n\n");
}

void cerca_num(int x, int v[])
{
    for(int c=0;c<n;c++)
    {
        if(x==v[c])
        {
            printf("\nil numero e' %d",v[c]);
        }
    }

}

int contamultipli_vettori(int v[], int x)
{
    int c=0;

    for(int i =0; i<n; i++)
    {
        if(v[i]%x==0)
        {
            c++;
        }
    }return c;
}

void ribaltavett(int v[])
{
    int c,j,x;

    for(c=0,j=n-1;c<=n/2;c++,j--)
    {
        x=v[c];
        v[c]=v[j];
        v[j]=x;
    }

    stampovett(v);
}

void copiavett(int v1[],int v2[])
{
    for(int c=0;c<n;c++)
    {
        v2[c]=v1[c];
    }

    stampovett(v2);
}

int somma_vettore(int v[])
{
    int r=0;
    
    for (int c = 0; c < n; c++)
    {
        r = r + v[c];
    }

    return r;
}

int media_vettore(int v[])
{
    int r=0;

    r = somma_vettore(v);

    r = r/n;

    return r;
}

void contaDis_Par(int v[])
{
    int i,j;

    for(int c=0;c<n;c++)
    {
        if(v[c]%2==0)
        {
            i++;
        }

        else
        {
            j++;
        }
    }
    printf("\ni numeri pari sono %d e quelli dispari sono %d",i,j);
}


void carica_zero(int v[])
{
    int c ; 

    for( c = 0; c < n; c++)
    {
        v[c]=0;
    }

    stampovett(v);
}

int numPrimo(int x)
{
    int i=0;
    for(int c = 2; c<=x/2; c++)
    {
        if(x%c==0) i++;

    }
    return  i;
}

int contaPrimivett( int v[])
{
    int r, i;

    for ( int c = 0; c < n; c++)
    {
        r = numPrimo(v[c]);

        if ( r == 0)
        {
            i++;
        }
    }

    return i;
}