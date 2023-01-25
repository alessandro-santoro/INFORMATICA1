/** ****************************************************************************************
* \mainpage funzioni 
*
* @brief 
* 1) Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce 
*    il loro massimo comune divisore utilizzando l'algoritmo di Euclide. 
* 2) Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero 
*    e restituisce la somma dei suoi divisori.
* 3) Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e 
*    l'altezza di un rettangolo e restituisce l'area. 
* 
* @author alessandro santoro
* @date 13/01/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

/** ****************************************************************************************
* @brief menu che chiede ad inizio programma quale funzione usare
* @param nessuno
* @retval la scelta dell'utente
*
* @author Alessandro Santoro
* @version 1.0 13/01/2023 versione iniziale
*/
int menu();


/** ****************************************************************************************
* @brief restituisce il massimo comume divisore di due numeri
* @param n1 primo numero
* @param n2 secondo numero
* @retval l' MCD di n1 e n2
*
* @author Alessandro Santoro
* @version 1.0 13/01/2023 versione iniziale
*/
int mcd(int,int,int);



/** ****************************************************************************************
* @brief restituisce la somma dei divisori di un numero inserito da tastiera
* @param n3
* @retval somma dei divisori
*
* @author Alessandro Santoro
* @version 1.0 13/01/2023 versione iniziale
*/
int somma_divisori(int);


/** ****************************************************************************************
* @brief restituisce l'aria di un rettangolo ricevendo in input la base e l'altezza
* @param base
* @param altezza
* @retval area di base e altezza
*
* @author Alessandro Santoro
* @version 1.0 13/01/2023 versione iniziale
*/

int area_rettangolo(int,int);

int main()
{
    int n1,n2,ris=0,r;
   

    do
    {
        r = menu();
        switch(r)
        {
            case 0: printf("\n Fine programma \n");     // fine programma
            
                    break;
                   
                   
            case 1: printf(" hai scelto mcd \n");
            
					printf("\n inserisci il primo numero: ");
                    scanf("%d",&n1);
                    
                    printf("\n inserisci il secondo numero: "); // chiedo valori all'utente 
                    scanf("%d",&n2); 
                    
                   ris = mcd ( n1 , n2 , ris );     //calcolo mcd
                    
                    printf("il massimo comune divisore e: %d\n",ris); //stampo a scermo il risultato
                    
                    break;
                    
                    
            case 2: printf("\nhai scelto somma divisori");
            
					printf("\ninserisci un numero dal quale verranno sommati i divisori:  ");        //chiedo valori all'tente 
                    scanf("%d",&n1);
                    
                    ris = somma_divisori ( n1 );  // calcolo la somma dei divisori
                    
                    printf("la somma dei divisori di %d e %d \n",n1,ris); //stampo a scermo il risultato
                    
                    break;
                    
            case 3: printf("\n hai scelto area rettangolo");
					printf("\ninserisci la base del rettangolo:  ");        // chiedo valori all'utente 
                    scanf("%d",&n1);
                    
                    printf("inserisci l'altezza del rettangolo:  ");
                    scanf("%d",&n2);
                    
                    ris = area_rettangolo ( n1 , n2 );      // calcolo area rettangolo
                    
                    printf("l'area del rettangolo e %d\n",ris);  //stampo a scermo il risultato
                    
                    break;
                    
                    
            default: printf("hai inserito un numero sbagliato\n");     
			
			                      
        }
        //system("pause");
        getchar();
        getchar();
    }
    while(r!=0);
   
    return 0;
}

int menu()
{
	system("clear");
    int risp;
    printf("\n\n alessandro santoro \n");
    printf("\n digita 0 per uscire dal programma\n");
    printf("\n digita 1 per calcolare l'mcd tra due numeri interi\n");
    printf("\n digita 2 per calcolare la somma tra i divisori du un numero intero\n");
    printf("\n digita 3 per calcolare l'area di un rettangolo con base e altezza ineri\n");  // menu del programma
    printf(" inserisci:  ");
    scanf("%d",&risp);
    return risp;
}

int mcd(int n1,int n2,int ris)
{
    while (n2 != 0) 
    {
        ris = n2;
        n2 = n1 % n2;       // funzione mcd
        n1 = ris;
    }
    return n1;
}

int somma_divisori(int num3)
{
    int ris,cont, somma=0;
    for(cont=1;cont<=num3;cont++)
    
        if(num3%cont==0)
        somma=somma+cont;       //funzione somma divisori
        return somma;  
       
}

int area_rettangolo(int x,int y)
{
    int ris;
    ris=x*y;        //funzione area rettangolo
    return ris;
}