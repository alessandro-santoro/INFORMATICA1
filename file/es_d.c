/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 23/10/2023
*
*/

#include <stdio.h>

void copia(char filein[], char fileout[]); /*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  
Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. */

int main()
{
    copia("input.txt", "output.txt");
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