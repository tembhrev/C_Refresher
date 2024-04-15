#include <stdio.h>
void  italy();
void brazil();
void argentina();
int main()
{
    printf("I am in main\n");
    italy();
    brazil();
    argentina();
    return 0;
}

void italy()
{
    printf("I am in italy\n");
}

void brazil()
{
    printf("I amin brazil\n");
}

void argentina()
{
    printf("I am in argentina\n");
}