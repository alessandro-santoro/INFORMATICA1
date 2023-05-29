#include <stdio.h>
#include <string.h>

#define n 1000

int main() 
{
    char str1[n], str2[n];
    int a, b;

    scanf("%s", str1);
    scanf("%s", str2);
    printf("%s %s", str1, str2);


    a = strlen(str1);
    printf("\n\n%d\n\n", a);

    strcpy(str1, str2);
    printf("1: %s\n\n2: %s", str1, str2);

    strcat(str1, str2);
    printf("\n\n%s\n\n", str1);

    b = strcmp(str1,str2);
    printf("%d", b);

}