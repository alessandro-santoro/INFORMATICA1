#include <stdio.h>
#include <stdlib.h>

#define n 10

void stampa(int []);

void caricaa(int []);

//void carica(int [], int x);

//void nuovoInserisci(int [], int x);

int conta(int [], int x);

void inserire(int v[], int v2[]);

int main()
{
    int vettore1[n], vettore2[n], num, ris ;

   /* printf("inserisci un numero:  ");
    scanf("%d",&num);
    
    if(num%2==1)
    {
        num++;
    }

    carica(vettore1,num);

    printf("inserisci un numero:  ");
    scanf("%d",&num);

    nuovoInserisci(vettore1,num);
    caricaa(vettore1);
    printf("inserisci un numero:  ");
    scanf("%d",&num);

    ris=conta(vettore1,num);
    printf("%d",ris);*/
    caricaa(vettore1);
    inserire(vettore1,vettore2);
    

}
void caricaa(int v[])
{
    int c;
    for(c =0;c<n;c++)
    {
        printf("inserisci un numero");
        scanf("%d",&v[c]);
    }


}

void stampa(int v[])
{
    for(int c = 0; c<n;c++)
    {
        
        printf("%d\t",v[c]);
    }
    printf("\n\n");
}

/*void carica(int v[], int x)
{
    int j,c;
    v[j]=x;
    for( c = 0 ; c< n ; c++)
    {
        printf("%d\t",v[j]);
        v[j]+=2;

    }
    printf("\n\n");
}

void nuovoInserisci(int v[],int x)
{
    int c,j=1,i=0;
    v[i]=x;
    for( c = 0; c < n; c++)
    {

        v[i]=v[i]*j;
        printf("%d\t", v[i]);
        j++;
    }
}

int conta(int v[], int x)
{

    int i=0;

    for(int c = 0; c<n; c++)
    {
        if(v[c]>x)
        {
            i++;
        }
    }
    return i;
}*/

void inserire(int v[], int v2[])
{
    int c,j,x;
    printf("vettore allinizio\n");
    stampa(v);

    for(c=0,j=n-1;c<=n/2;c++,j--)
    {
        x=v[c];
        v[c]=v[j];
        v[j]=x;
  
    }
    printf("vettore dopo scambio\n");
    stampa(v);
    for(c=0;c<n;c++)
    {
        v2[c]=v[c];
        v2[c]=v2[c]*2;
    }
    printf("vettore alla fine\n");
    
    
   
    stampa(v2);
}