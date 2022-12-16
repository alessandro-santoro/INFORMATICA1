/** ****************************************************************************************
* \mainpage esA_divisiore.c
*
* @brief chiesti 2 numeri all'utente visualizza tutti i nuemri compresi fra i 2 e ne faccia la somma
* 
* @author alessanro santoro
* @date 01/12/2022
*/

#include <stdio.h>

int main()

{
    int n1,n2,i,somma;

    printf("inserisci due nuemri interi:   ");
    scanf("%d%d",&n1,&n2);

    for( i = n1 ; i <= n2; i++)
    {
        printf("%d\t",i);
        somma+=i;
    }

    printf("\nsomma =  %d\n", somma);
    
    return 0;
}