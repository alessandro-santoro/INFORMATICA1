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

int ricercaSentinella( int x, int []);

void bubble_sort(int []);

void MaxMinVettore(int *min, int *max, int []);

void copiaDispari(int [], int []);

void copiaPari(int [], int []);

void pariDispari(int [], int []);

int main()
{
    int vettore[n], vettore2[n];
    int risultato,num,max,min;
    int f = 1;

    carica_zero(vettore);
    carica_zero(vettore2);

    while( f )
    {

        risultato = menu();


        switch (risultato)
        {
            case 0 : printf("\n\n SEI USCITO DAL PROGRAMMA");

                     f = 0;
            break;

            case 1 : printf ("\n\n HAI SCELTO CARICA IL VETTORE");

                     printf("\n\n insrisci 10 numeri");

                     carica( vettore );
            break;

            case 2 : printf ("\n\n HAI SCELTO CARICA RANDOM IL VETTORE");
                
                     caricaRand( vettore );
            break;

            case 3 : printf ("\n\n HAI SCELTO STAMPA IL VETTORE");

                     stampovett(vettore);
            break;

            case 4 : printf ("\n\n HAI SCELTO CERCA NUMERO NEL VETTORE");
                 
                     printf("\ninserisci il numero da trovare:  ");
                     scanf("%d",& num);

                     cerca_num(num , vettore);
            break; 

            case 5 : printf ("\n\n HAI SCELTO CONTA MULTIPLI VETTORE");

                     risultato = contamultipli_vettori( vettore, num );
            break;

            case 6 : printf("\n\n HAI SCELTO RIBALTA VETTORE");

                     ribaltavett(vettore);
            break;

            case 7 : printf ("\n\n HAI SCELTO COPIA VETTORE IN UN'ALTRO ");
    
                     copiavett(vettore,vettore2);
            break;

            case 8 : printf("\n\n HAI SCELTO SOMMA DEL VETTORE");

                    risultato = somma_vettore(vettore);

                    printf("\nla somma e' %d", risultato);
            break;

            case 9 : printf ("\n\n HAI SCELTO MEDIA DEL VETTORE");

                     risultato = media_vettore(vettore);

                     printf("\nla media e' %d", risultato); 
            break;

            case 10 :printf("\n\n HAI SCELTO CONTA PARI E DISPARI DEL VETTORE");

                     contaDis_Par(vettore);
            break;

            case 11 : printf("\n\n HAI SCELTO CARICA DI ZERI IL VETTORE");

                     carica_zero(vettore);

            break;

            case 12 : printf("\n\n HAI SCELTO NUMERI PRIMI DEL VETTORE");

                     risultato = contaPrimivett(vettore);

                     printf("\ni numeri primi sono %d", risultato);
                     printf("\n");
                     stampovett(vettore);
            break;

            case 13 : printf("\n\n HAI SCELTO RICERCA A SENTINELLA");

                      stampovett(vettore);

                      printf("\n inserisci il numero da cercare:  ");
                      scanf("%d", & num);

                      risultato = ricercaSentinella( num , vettore);

                      printf("\n il numero che hai inserito (%d) e' nella %d° posizione del vettore",num, risultato);
            break;

            case 14 : printf("\n\n HAI SCELTO BUBBLE SORT");

                      printf("\n vettore all'inizio:  ");

                      stampovett(vettore);

                      bubble_sort(vettore);

                      printf("\n\n vettore dopo aver usato bubble sort:  ");

                      stampovett(vettore);
            break;

            case 15 : printf("\n\n HAI SCELTO MASSIMO E MINIMO DEL VETTORE");

                      MaxMinVettore(&min, &max, vettore);  

                      stampovett(vettore);  

                      printf("\n\n minimo del vettore:   %d", min);

                      printf("\n\n massimo del vettore:   %d", max);
            break;

            case 16 : printf("\n\n HAI SCELTO COPIA DISPARI\n\n");

                      copiaDispari(vettore,vettore2);
                      
                      printf("\n vettore con tutti i numeri:\n");
                      stampovett(vettore);

                      printf("\n\nvettore con numeri dispari:\n");
                      stampovett(vettore2);
            break;

            case 17 : printf("\n\n COPIA NUMERI PARI DEL VETTORE");

                      copiaPari(vettore,vettore2);

                      printf("\n vettore con tutti i numeri:\n");
                      stampovett(vettore);

                      printf("\n\n vettore con i numeri pari:\n");
                      stampovett(vettore2);
            break;
            
            case 18 : printf("\n\n HAI SCELTO DI ORDINARE IL VETTORE CON I PARI A SINISTRA E I DISPARI A DESTRA");
                      
                      pariDispari(vettore,vettore2);

                      printf("\n\n vettore dopo:\n");
                      stampovett(vettore2);

                

        }

    printf("\n\n permi invio per continuare:  ");
    getchar();
    getchar();
    system("clear");
    }

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
    printf("\n 13 per scegliere ricerca con sentinella                      *");
    printf("\n 14 per usare bubble sort                                     *");
    printf("\n 15 per trovare il massimo e il minimo del vettore            *");
    printf("\n 16 per copiare i nuermi dispari in un'altro vettore          *");
    printf("\n 17 per copiare i numeri pari in un'altro vettore             *");
    printf("\n 18 per carica pari a sinistra e i dispari a destra           *");
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
        printf("\ninserisci il %d° nuemro:   ",c+1);
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

int contaPrimivett(int v[])
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

int ricercaSentinella(int x, int v[])
{
    v[n] = x;

    int c=1;

    stampovett(v);

    while(v[c]!=x)
    {
        c++;
    }
    if(c<n)
    {
        return c;
    }
    else 
    {
        return -1;
    }

}

void bubble_sort(int v[])
{
    int fine = n-1;
    int scambio = 0;
    int a, i;

    do
    {
        scambio = 0;
        for(int c = 0; c<fine; c++)
        {
            if(v[c]>v[c+1])
            {
                scambio=1;
                a=v[c];
                v[c] = v[c+1];
                v[c+1] = a;
                
                i=c;
            }
        }
        fine = i;
    } while(scambio);
}

void MaxMinVettore(int *min, int *max, int v[])
{
    *min = v[0];
    *max = v[0];

    for(int c = 0; c<n; c++)
    {
        if(*min > v[c]) *min = v[c];
        if(*max<v[c]) *max = v[c];
    }
}

void copiaDispari(int v[], int v2[])
{
    int c,i=0;

    for( c = 0; c < n; c++)
    {
        if (v[c]%2==1)
        {
            v2[i] = v[c];
            i++;
        }
    }
}

void copiaPari( int v[], int v2[])
{
    int c,i=0;

    for(c = 0; c < n; c++)
    {
        if (v[c]%2==0)
        {
            v2[i] = v[c];
            i++;
        }
    }
}

void pariDispari(int v[], int v2[])
{
    int r,i=0;
    int x;

    printf("\n\n inserisci 1 per caricare il vettore manualmente e 0 per caricarlo randomicamente:  ");
    scanf("%d",&x);

    switch(x)
    {
        case 0 : printf("\n\n sto caricando il vettore...");
                 
                 caricaRand(v);
        break;

        case 1 : printf("\n\nhai scelto di caricare il vettore manualmente");
                 carica(v);
        break;

        default: printf("\n\n hai sbagliato numero");

    }

    for(int c = 0, sin = 0, des=n-1; c<n; c++)
    {

        if(v[c]%2==1)
        {
            v2[sin] = v[c];
            sin++;
        }
           
        else
        {
             v2[des] = v[c];
             des--;
        } 
    }
}