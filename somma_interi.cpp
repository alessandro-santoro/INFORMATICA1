/*
file: somma_interi
autore: alessandro santoro
data: 21/9/22

somma di due numeri interi e stampa
a schermo del risultato
*/

#include<stdio.h>

int main()
{
	// dichiarare le due vartiabili di input
	int num,num2;
	//dichiariamo variabili di output
	int ris;
	
	// input di due nbumeri interi
	printf("inserire il primo numero");
	scanf("%d",&num1);
	printf("inserire il primo numero");
	scanf("%d",&num2);
	
	//elaborazione: somma
	//assegna alla variabile ris
	// il risultato della espressione 
	ris= num1+num2;
	
	// output: un numero intero
	printf("la somma dei due numeri e %d, ris");
	
	// termino il programma 
	return 0;
}
