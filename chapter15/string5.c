#include <stdio.h>
int main()
{
    char str1[] = "Hello", str2[] = "Pi";
    char *p = "Hello", *s = "Pi";
    *p = 'Z';
    printf("Value of str1: %c", *p);
}