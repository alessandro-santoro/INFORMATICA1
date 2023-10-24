/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 23/10/2023
*
*/

#include <stdio.h>

void copia(char filein[], char fileout[]); /*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  
Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. */

void Maiuscolo(char filein[], char fileout[]);

int main()
{
    copia("input.txt", "output.txt");
    Maiuscolo("input.txt","output.txt");
}

void copia(char filein[], char fileout[])
{

    char c;


    FILE * input = fopen(filein, "r");
    FILE * output = fopen(fileout, "w");


    while(!feof(input))
    {
        putc(getc(input), output);
    }

    fclose(input);
    fclose(output);
}

void Maiuscolo(char filein[], char fileout[])
{
    char x;

    FILE * minuscolo = fopen(filein, "r");
    FILE * maiuscolo = fopen(fileout, "w");
    
    while(!feof(minuscolo))
    {
        x = getc(minuscolo);

        if(x >= 'a' && x <= 'z')
        {
            x-=32;
        }    

        putc(x, minuscolo);
    } 

    fclose(minuscolo);
    fclose(maiuscolo);
}