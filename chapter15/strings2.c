#include <stdio.h>
int main()
{
    char name[] = "GoWithTheFlow";
    char *ptr;
    ptr = name;
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    printf("%s", name);
    return 0;
}