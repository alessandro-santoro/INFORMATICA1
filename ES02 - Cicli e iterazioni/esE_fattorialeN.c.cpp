/** ****************************************************************************************
* \mainpage esE_fattorialeN
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla 
*        tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato 
*        con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
* 
* @author alessandro santoro
* @date 04/12/2022
*/

#include <stdio.h>      

int main()  
{

    int n, c;        

    printf("Inserisci un numero: ");   
    scanf("%d", &n);

    if(n>0) 
	{                           
        for(c=n-1; c>0; c--) 
		{
            n *= c;                     
        }

        printf("\nIl fattoriale del numero inserito e' %d\n", n);     
    }
    else 
	{
        printf("\nNon e' possibile calcolare il fattoriale di un numero negativo");     
    }
}
