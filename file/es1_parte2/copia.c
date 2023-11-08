/** ****************************************************************************************
* 
* @author alessandro santoro
* @date 13/09/2023
*
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.
//Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. 
void copiaFile(char fInput[], char fOutput[]);



int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Utilizzo: %s [input_file] [output_file]\n", argv[0]);
        return 1;
 	   }

 	  char *input_file = argv[1];
  	  char *output_file = argv[2];


    copiaFile(input_file, output_file);
}


void copiaFile(char fInput[], char fOutput[])
{

    FILE * puntInput = fopen(fInput, "r");
    FILE * puntOutput = fopen(fOutput, "w");

    char c; 

    while(!feof(puntInput))
    {
        c = getc(puntInput);

        if (c!=EOF) putc(c, puntOutput);
    }

    fclose(puntInput);
    fclose(puntOutput);
}