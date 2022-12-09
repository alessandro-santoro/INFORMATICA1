/** ****************************************************************************************
* \mainpage esC_media.c
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri 
*        inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento 
*        dei dati.
* 
* @author alessandro santoro
* @date 03/12/2022
*/

#include <stdio.h>      

int main() 
{

	int num, c=0, somma=0;       
    float media=0;             

    do  						//ciclo richiesta input e somma numeri inseriti
    {                                         
        printf("Insersici un numero: ");
        scanf("%d", &num);

        media += num;

        if(num!=0) 
            c++;                                
    } while (num!=0);                         

    media /= c;             //calcolo media

    printf("\nLa media dei numeri e' %.2f\n", media);
}

