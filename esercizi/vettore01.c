#include <stdio.h>
#include <limits.h>


#define n 10

void gira_vettore(int []);

void carica_vettore(int []);

void stampa_vettore(int []);

void cerca_num(int x,int []);

void cerca_num_ris(int x, int[]);

int main()
{
    int vettore[n];
    int ris,num;

    carica_vettore(vettore);

    stampa_vettore(vettore);

    cerca_num_ris(num,vettore);
}

void gira_vettore(int v[])
{

    for(int c=0;c<n;c++)
    {
        
    }
}

void carica_vettore(int v[])
{
    printf("\ninserisci dieci numeri\n");
    for(int c=0; c<n; c++)
    {
        printf("\n\t\n");
        scanf("%d",&v[c]);
    }
}

void stampa_vettore(int v[])
{

    for (int c=0;c<n;c++)
    {
        printf("%d\t",v[c]);
    }
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