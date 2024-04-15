#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Jerry", string2[] = "Jerry";
    int i, j, k;
    i = strcmp(string1, string2);
    j = strcmp(string1, "Ferry");
    k = strcmp(string1, "Jerry boy");
    printf("%d %d %d\n", i, j, k);
    return 0;
}