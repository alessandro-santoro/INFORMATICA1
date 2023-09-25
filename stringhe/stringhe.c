#include <stdio.h>
#include <string.h>

#define R 20
#define C 10

void caricastr(char st[][C]);
void stampastr(char st[][C]);

int main()
{
    char stmat[R][C];

    caricastr(stmat);
    stampastr(stmat);
}

void caricastr(char st[][C])
{
    printf("inserisci * per terminare la stringa\n ");
    printf("NON SUPERARE I 19 CARATTERI\n\n");
    int c=0;
    for(int i=0;i<C;i++)
    {
        printf("\n\n stringa %d: ",c);
        c++;
        scanf("%s",st[i]);
    }

}

void stampastr(char st[][C])
{
    int c=0;
    for(int i=0;i<C;i++)
    {
        printf("\n\nstringa %d:",c);
        c++;
        printf("%s",st[i]);
    }
}