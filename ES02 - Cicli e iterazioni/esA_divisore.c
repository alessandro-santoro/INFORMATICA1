/** ****************************************************************************************
* \mainpage esA_divisiore.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author alessanro santoro
* @date 01/12/2022
*/

#include <stdio.h>

int main() 
{
	int num, d;
	
	printf("Inserisci un numero: ");
	scanf("%d", &num);
	
	for(d = 2; d <= num/2; d++)
	{
		if(num%d==0)
			printf("%d e' un divisore\n", d);
	}	
}
