/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 13/09/2023
*
*/

#include <stdio.h>
#include <string.h>

#define R 20
#define C 10

void carica(char m[][C]); 	//nella funzione si chiedano all’utente R stringhe di lunghezza massima C-1
void stampa(char m[][C]);  //stampa sul monitor le stringhe seguite dalla loro lunghezza. Curare la visualizzazione su monitor
int piuLunga(char m[][C]); // la funzione restituisce l’indice della riga dove è memorizzata la stringa più lunga e visualizza nel main la stringa
void scambia(char m[][C], int k, int t); /*nella funzione si scambiano tra di loro le stringhe di indice k e t .  Eseguita la funzione la stringa
                                             della riga k+1 (indice k)  si trovi nella riga t+1 e quella della riga t+1 si trovi nella riga k+1 */

int main()
{
    char strmat[R][C];
    int r;

    carica(strmat);

    stampa(strmat);

    r=piuLunga(strmat);
    printf("\n\n la stringa piu' lunga e'\n\n%d\n\n",r);

    scambia(strmat,5,9);
    stampa(strmat);
}

void carica(char m[][C])
{
    printf("inserisci * per terminare la stringa\n ");
    printf("NON SUPERARE I 19 CARATTERI\n\n");
    int c=0;
    for(int i=0;i<C;i++)
    {
        printf("\n\n stringa %d: ",c);
        c++;
        scanf("%s",m[i]);
    }

}

void stampa(char m[][C])
{
    int a;
    int c=0;
    for(int i=0;i<C;i++)
    {
        a=strlen(m[i]);
        printf("\n\nstringa %d:",c);
        c++;
        printf("\n%s ",m[i]);
        printf("\nlunghezza della stringa: %d",a);
    }
}

int piuLunga(char m[][C])
{
    int max=0;

    for(int i=0;i<C;i++)
    {
        if(strlen(m[i])>strlen(m[max]))
        {
            max=i;
        }
    }
    return max;
}

void scambia(char m[][C], int k, int t)
{
    char a[C];

    strcpy(a, m[k]);
    strcpy(m[k], m[t]);
    strcpy(m[t], a);

}
