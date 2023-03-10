#include <stdio.h>



int leggere(int y);

float poligono(int x, float y);

int main()
{
    int r, n1;
    float n2;

    r= leggere(5);

    printf("\ni numeri sono %d",r);

    printf("\ninserisci il numero dei lati del poligono:  ");
    scanf("%d",&n1);
    printf("\ninserisci il valore di un lato del poligono:  ");
    scanf("%f",&n2);

    r = poligono(n1,n2);

    printf("\nil perimetro del poligono e' %",r);
}

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
