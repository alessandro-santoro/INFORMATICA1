/** ****************************************************************************************
* \mainpage esA_divisiore.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author alessanro santoro
* @date 01/12/2022
*/

#include <stdio.h>    //librerie

int main() 
{
	int num, d;
	
	printf("Inserisci un numero: ");   // chiedo un numero/valore all'utente
	scanf("%d", &num);
	
	for(d = 2; d <= num/2; d++)     //itero tutti gli interi da 2 al numero inserito
	{
		if(num%d==0)
			printf("%d e' un divisore\n", d);     //controllo se l'indice e' un divisore
	}	
}
