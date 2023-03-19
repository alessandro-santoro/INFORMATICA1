#include<stdio.h>

#include <time.h>

#include <stdlib.h>

#define n 10
/*
void scambio(int x, int y);
*/
void carica(int[]);
/*
void caricaRand(int []);
*/
void stampovett(int []);
/*
void cerca_num(int x,int []);

void cerca_num_ris(int x, int v[]);

int contamultipli_vettori(int [], int x);

void ribaltavett(int v[]);

void copiavett(int [],int []);

int somma_vettore(int []);

int media_vettore(int []);*/

void contaDis_Par(int []);

void carica_zero(int []);

int main()
{
    int vettore[n], vettore2[n];
    int risultato,num;

    
    carica(vettore);
/*
    caricaRand(vettore);

    stampovett(vettore);

    cerca_num_ris(num,vettore);

    risultato = contamultipli_vettori(vettore, num);

    printf("%d\n",r);

    ribaltavett(vettore);

    copiavett(vettore,vettore2);

    risultato = somma_vettore(vettore);
    
    printf("la somma e' %d", risultato);

    risultato = media_vettore(vettore);

    printf("la media e' %d", risultato);*/

    risultato = stampoDis_Par(vettore);

}
/*

void scambio(int x, int y)
{
    int scambio;

    scambio = x;
    x = y;
    y = scambio;

}
*/
void carica(int v[ ])
{
    int c;

    for(c = 0; c<n; c++)
    {
        printf("\ninserisci un nuemro\n");
        scanf("%d",& v[c]);
    }

    stampovett(v);
}
/*
void caricaRand(int v[])
{
    srand(time(NULL));
    for(int c = 0; c<n; c++)
    {
        v[c] = rand()%50 + 1;
    }

    stampovett(v);
}
*/
void stampovett(int v[])
{
    for(int c = 0; c<n; c++)
    {
        printf("%d\t ", v[c]);
    }
    printf("\n\n");
}
/*
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

void cerca_num_ris(int x, int v[])
{
    printf("\ninserisci il numero da trovare:  ");
    scanf("%d",&x);

    cerca_num(x,v);

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
}*/

void contaDis_Par(int v[])
{
    int i,j;

    for(int c=0;c<n;++)
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
    for(int c = 0; c < n; c++)
    {
        v[c]=0;
    }
}
