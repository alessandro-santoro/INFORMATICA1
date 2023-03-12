#include <stdio.h>
int contaDivisori(int x);
/*void stampa(int x, char z);

int leggere(int y);

float poligono(int x, float y);

int conta(char x);
*/
int main()
{
    int r, n1;
   /* float n2;
    char a='+',b='#';
    float ris;

    r= leggere(5);

    printf("\ni numeri sono %d",r);

    printf("\ninserisci il numero dei lati del poligono:  ");
    scanf("%d",&n1);
    printf("\ninserisci il valore di un lato del poligono:  ");
    scanf("%f",&n2);

    ris = poligono(n1,n2);

    printf("\nil perimetro del poligono e' %f",ris);

    printf("inserisci un numero");
    scanf("%d",&n1);

    stampa(n1,'+');
    */

    printf("\ninserisci il numero da dividere:   ");
    scanf("%d",&n1);

    r = contaDivisori(n1);

    printf("\n il numero %d ha %d divisori\n",n1, r);
}
/*
int leggere(int y)
{  
    int num1;
    int c=-1;


    do
    {
        printf("\ninserisci un numero:  ");
        scanf("%d",&num1);

        if (num1 % y == 0)
        {
            c++;
        }
    }while( num1!=0);

    return c;
}

float poligono(int x, float y)
{
    int p;

    if(x<=2)
    {
        printf("\nnon e' un poligono");
    }
    switch(x)
    {
        case 3: printf("\ne' un triangolo");
                p = y*3;
        break;

        case 4: printf("\ne' un quadrato");
                p = y*4;
        break;

        default: printf("\nha piu di 4 lati");
    }

    return p;
    
}

void stampa(int n, char z)
{
    for(int c=0;c<=n;c++)
    {
        printf("%c",z);
    }
}*/

int contaDivisori(int x)
{
    int i, ris=0;


    for(i = 1; i<=x; i++)
    {
        if(x%i==0) 
        ris  ++; 
    }


    return ris;
}

