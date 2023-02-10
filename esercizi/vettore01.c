#include <stdio.h>
#include <limits.h>


#define num 10

int main()
{
    int r = 0;
    int vettore[num];

    for ( int i = 0 ; i < num ; i++)
    {
        printf(" inserisci un numero:   ");
        scanf(" %d", &vettore[i]);
    }
    for ( int i = 0 ; i < num ; i++)
    {
        printf(" %d\n", vettore[i]);
    }

    for ( int i = 0 ; i < num ; i++)
    {
        r += vettore[i];
    }

    printf(" \n somma = %d\n",r);
}