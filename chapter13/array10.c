#include <stdio.h>
int * fun(int *num);
int main()
{
    int max, *p, i;
    p = fun(&max);
    printf("Value of p : %d\n", p);
    printf("size of arr : %d\n", &max);
    for (i = 0; i < max; i++)
        printf("%d ", p[i]);

    p++;
    p++;
    printf("Value at p now : %d", *p);
    return 0;
}

int * fun(int *num)
{
    static int arr[] = {10, 20, 30, 40, 50};
    *num = sizeof(arr)/sizeof(arr[0]);
    /* num = &arr[0]; */
    printf("Value of num : %d\n", num);
    printf("Value of *num : %d\n", *num);
    return arr;
}