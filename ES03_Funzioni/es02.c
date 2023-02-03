/** ****************************************************************************************
* \mainpage funzioni 
*
* @brief 
* 1)  Scrivere la funzione “int menu()” che visualizzi un menù e che chieda all’utente un 
*     numero corrispondente all’operazione eseguire, 0 per uscire. Restituendo tale valore 
*     al termine.  Aggiungere alla funzione main le chiamate alle quattro funzioni per testarle. 
*     Chiedere all'utente di inserire i valori necessari per ogni funzione e stampare il risultato ottenuto.
* 2) 
* 3) Scrivere la funzione int pari_dispari(in numero), attraverso sottrazioni successive determinare se il 
*    numero passato alla funzione è pari o dispari, restituire 0 se il numero è pari, 1 se dispari.
* 4)
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
* @version 1.0 03/02/2023 versione iniziale
*/
int menu();


/** ****************************************************************************************
* @brief programma che esegue la secuenza di fibonacci
* @param n1
* @retval r
*
* @author Alessandro Santoro
* @version 1.0 03/02/2023 versione iniziale
*/
int fibonacci(int);



/** ****************************************************************************************
* @brief chiede un numero all'utente e determina se il numero inserito è pari o dispari
* @param 
* @retval 
*
* @author Alessandro Santoro
* @version 1.0 03/02/2023 versione iniziale
*/
int pari_dispari ()


/** ****************************************************************************************
* @brief 
* @param 
* @param 
* @retval 
*
* @author Alessandro Santoro
* @version 1.0 03/02/2023 versione iniziale
*/

int area_rettangolo(int,int);

int main()
{
    int n1, r;
   

    do
    {
        r = menu();
        switch(r)
        {
            case 0: printf("\n Fine programma \n");     // fine programma
            
                    break;
                   
                   
            case 1: printf("\n inserisci un numero\n");
                    scanf("%d",&n1);
                    
                    break;
                    
                    
            case 2: 
                    break;
                    
            case 3: 
                    
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

    scanf("%d",&risp);
    return risp;
}

int mcd(int n1,int n2,int ris)
{

}

int somma_divisori(int num3)
{

}

int area_rettangolo(int x,int y)
{

}