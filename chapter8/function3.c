#include <stdio.h>
int calsum(int x, int y, int z);

int main()
{
    int a, b, c, res;
    printf("Enter numbers a, b and c:");
    scanf("%d%d%d", &a, &b, &c);
    res = calsum(a, b, c);
    printf("Sum of three numbers : %d\n", res);
    return 0;
}

int calsum(int x, int y, int z)
{
    int d;
    d = x + y +z;
    return (d);
}