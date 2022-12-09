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
    printf("Esercizio F santoro alessandro\n");
	
    int bit, num=0, c=7;

    printf("inserisci 8 bit\n");
	scanf("%d",&num);    

    do{
        scanf("%d", &bit);  //leggo un bit alla volta        

        num += pow(2, c) * bit;    //converto il singolo bit in decimale

        c--;        //decremento la potenza di 1                
    } while (c>-1);      //continuo il ciclo fino a quando la potenza non raggiunge lo 0            

    printf("\nConversione in decimale = %d\n", num);          
}
