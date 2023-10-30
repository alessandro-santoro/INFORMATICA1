/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 23/10/2023
*
*/

#include <stdio.h>
int lettere = 0;
int parole = 1; 
int righe = 1;

void copia(char filein[], char fileout[]); /*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  
Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. */

void maiuscolo(char filein[], char fileout[]);

void conta_l_p_r(char file[]);

int main()
{
    copia("input.txt", "output.txt");
    maiuscolo("input.txt","output.txt");
    conta_l_p_r("input.txt");
    printf("\n le lettere sono:\t%d\n le parole sono:\t%d\n le righe sono:\t%d\n",lettere,parole,righe);
}

void copia(char filein[], char fileout[])
{

    int c;


    FILE * input = fopen(filein, "r");
    FILE * output = fopen(fileout, "w");


    while(!feof(input))
    {
        putc(getc(input), output);
    }

    fclose(input);
    fclose(output);
}

void maiuscolo(char filein[], char fileout[])
{
    int x;

    FILE * minusc = fopen(filein, "r");
    FILE * maiusc = fopen(fileout, "w");
    
    while(!feof(minusc))
    {
        x = getc(minusc);

        if(x >= 'a' && x <= 'z')   
        {
             x-=32;
        }
        putc(x, maiusc);
    } 

    fclose(minusc);
    fclose(maiusc);
}

void conta_l_p_r(char filein[])
{
    FILE * file = fopen(filein, "r");

    int x;

    while(!feof(file))
    {
        x = getc(file);

        if(x != ' ' && x != '\n')
        {
            lettere++;
        }
        else if(x == ' ')
        {
            parole++;
        }
        else if(x == '\n') 
        {
            righe++; 
            parole++;
        }
    }

    fclose(file);
}

void pariDispari(char fileinput[], char filepsri[], char filedispari[])
{
    FILE * input = fopen(fileinput, "r");
    FILE * pari = fopen(filepari, "w");
    FILE * dispari = fopen(filedispari, "w");

    int x;

    while(!feof(input))
    {
        x = getc(input);

        if(x % 2== 0 && x != ' ') 
        {
            putc(x, pari);
            putc(' ', pari);
        }
        else 
        {
            putc(x, dispari);
            putc(' ', pari);
        }
    }

    fclose(input);
    fclose(dispari);
    fclose(pari);

}