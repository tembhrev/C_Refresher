#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max, i, *p;
    printf("Enter array size: ");    
    scanf("%d", &max);
    printf("Printing value of max: %d\n", max);
    p = (int *) malloc (max * sizeof(int));
    printf("Printing value of p: %d\n", p);
    for (i = 0; i<= 5; i++)
    {
        p[i] = i * i;
        printf("%d ", p[i]);
    }
    p++;
    printf("Printing value at p: %d\n", *p);
    return 0;
}