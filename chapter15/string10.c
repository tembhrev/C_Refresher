#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Bombay", target[] = "Nagpur";
    strcat(target, source);
    printf("source string = %s\n", source);
    printf("target string = %s\n", target);
    return 0;
}