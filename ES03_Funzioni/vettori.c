#include<stdio.h>

#include <time.h>

#include <stdlib.h>

#define n 10

void scambio(int x, int y);

void carica(int[]);

void caricaRand(int []);

void stampovett(int []);

void cerca_num(int x,int []);

void cerca_num_ris(int x, int v[]);

int contamultipli_vettori(int [], int x);

int main()
{
    int vettore[n];
    int r,num;

    carica(vettore);

    caricaRand(vettore);

    stampovett(vettore);

    cerca_num_ris(num,vettore);

    r = contamultipli_vettori(vettore, num);

    printf("%d\n",r);


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
        printf("\ninserisci un nuemro\n");
        scanf("%d",& v[c]);
    }
}

void caricaRand(int v[])
{
    srand(time(NULL));
    for(int c = 0; c<n; c++)
    {
        v[c] = rand()%50 + 1;
    }
}

void stampovett(int v[])
{
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
        if(v[i]x==0)
        {
            c++;
        }
    }return c;
}