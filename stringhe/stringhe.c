#include <stdio.h>
#include <string.h>

#define R 20
#define C 10

void caricast(char st[][C]);

void stampastr(char st[][C]);

int main()
{
    char stmat[R][C];
    int i;

    caricast(stmat);

    stampastr(stmat);



}

void caricastr(char st[][C])
{
    printf("inserisci * per terminare la stringa\n ");
    printf("NON SUPERARE I 19 CARATTERI\n\n");

    for(int i=0;i<R;i++)
    {
        scanf("%s",st[i]);
    }

}

void stampastr(char st[][C])
{
    int c=0;
    for(int i=0;i<R;i++)
    {
        printf("\n\nstringa %d:",c);
        c++;
        printf("%s",st[i]);
    }
}