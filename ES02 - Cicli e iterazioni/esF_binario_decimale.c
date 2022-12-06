/** ****************************************************************************************
* \mainpage esF_binario_decimale.c
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*        L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit 
*        più significativo. Il programma dovrà visualizzare il numero decimale corrispondente. 
*        Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la 
*        libreria math.h.
* 
* @author alessandro santoro
* @date 06/12/2022
*/

//inclusione librerie
#include <stdio.h>     
#include <math.h>

int main()  
{
    int bit, num=0, c=7;

    printf("inserisci 8 bit\n");
	scanf("%d",&num);    

    do{
        scanf("%d", &bit);          

        num += pow(2, c) * bit;    

        c--;                        
    } while (c>-1);                 

    printf("\nConversione in decimale = %d\n", num);          
}
