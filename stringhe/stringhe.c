#include <stdio.h>
#include <string.h>

#define n 10000

int main() 
{
    char str1[n], str2[n];
    int l, a;

    scanf("%s", str1);
    scanf("%s", str2);
    printf("%s %s", str1, str2);


    l = strlen(str1);
    printf("\n\n%d\n\n", l);

    strcpy(str1, str2);
    printf("1: %s\n\n2: %s", str1, str2);

    strcat(str1, str2);
    printf("\n\n%s\n\n", str1);

    a = strcmp(str1,str2);
    printf("%d", a);

}