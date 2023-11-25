#include <stdio.h>

void copiafile(char in[], char out[]);

int main()
{
    copiafile("fin.txt","fout.txt");
}

void copiafile(char in[], char out[])
{
    int c;

    FILE* f1;
    FILE* f2;

    f1=fopen(in,"r");
    f2=fopen(out,"w");

    if(f1!=0&&f2!=0)
    {
        printf("\n file aperti");
        while((c=fgetc(f1))!=EOF)
        {
            fputc(c,f2);
        }
        printf("\n file copiato");

        fclose(f1);
        fclose(f2);
    }

    else
    {
        printf("\n file non aperti");
    }
}