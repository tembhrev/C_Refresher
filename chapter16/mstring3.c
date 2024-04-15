#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *names[6], n[50];
    int len, i;
    char *p;
    for (i=0; i<=5; i++)
    {
        printf("Enter name: ");
        scanf("%s", n);
        len = strlen(n);
        p = (char *) malloc (len+1);
        strcpy(p,n);
        names[i] = p;
        printf("Value of p: %u\n", p);
        printf("Value at p: %c\n", *p);
        printf("Value of n: %u\n", n);
        printf("Value at n: %c\n", *n);
    }
    for (i=0; i<=5; i++)
        printf("%s\n", names[i]);
    return 0;
}