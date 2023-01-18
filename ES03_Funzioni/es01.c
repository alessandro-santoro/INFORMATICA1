/** ****************************************************************************************
* \mainpage funzioni 
*
* @brief 
* 
* @author Alessandro Santoro
* @date 11/01/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<limits.h>


int med(int,int,int);       //restituisce il massimo comume divisore di due numeri 


int somma_divisori(int);        //restituisce la somma dei divisori di un numero inserito da tastiera


int area_rettangolo(int,int);       //restituisce l'aria di un rettangolo ricevendo in input la base e l'altezza

int main()
{
    printf("alessandro santoro \n");

    int num1,num2,ris=0,mcd;
    int num3,somma;
    int base,altezza,area;

    printf("inserisci il primo numero ");
    scanf("%d",&num1);
    printf("inserisci il secondo numero ");
    scanf("%d",&num2); 
    mcd=med(num1,num2,ris);
    printf("il massimo comune divisore e: %d\n",mcd);

    printf("\ninserisci un numero dal quale verranno sommati i divisori ");
    scanf("%d",&num3);
    somma=somma_divisori(num3);
    printf("la somma dei divisori di %d e %d \n",num3,somma);

    printf("\niserisci la base del rettangolo ");
    scanf("%d",&base);
    printf("iserisci l'altezza del rettangolo ");
    scanf("%d",&altezza);
    area=area_rettangolo(base,altezza);
    printf("l'area del rettangolo e %d\n",area);

    return 0;
}

int med(int num1,int num2,int ris)
{
    while (num2 != 0) 
    {
        ris = num2;
        num2 = num1 % num2;
        num1 = ris;
    }
    return num1;
}

int somma_divisori(int num3)
{
    int somma,cont;
    for(cont=1;cont<=num3;cont++)
    
        if(num3%cont==0)
        somma=somma+cont;
        return somma;  
       
}

int area_rettangolo(int x,int y)
{
    int ris;
    ris=x*y;
    return ris;
}